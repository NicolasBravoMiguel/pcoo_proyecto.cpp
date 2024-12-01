#include <iostream>
#include "Menu.h"
#include "Alchol.h"
#include "No_Alchol.h"

using namespace std;

/*
Como funciona el programa:

El progrma desplega un menu en el cual se pude elejir el tipo de bebida de su preferencia
esta buede ser una bebida alcoholica o una sin alcohol. Una vez que el usuario elija se 
tipo de bebida dos casos diferentes pueden occurir.

En caso de eleguir una bebida alcholica:
El prgrama le pedira los grados de alcohol esto es igual a la intesidad que le guste su coctel,
despues le pedira el tipo de alcohol el cual quiere que contenga su bebida, y despues el aroma 
este. Este puede ser, afrutado, floral, o un aroma especial el que el usuario dese si es que la desea
si es que no solo puede escribir ninguna. Te pedira la descripcion de la bebida en este 
uno puede escribir el nombre del coctel y si es que desea que tenga algo especial dentro
de el. Despues le pedira el tamanio que le guste su coctel, y finalmente le pedira la edad para 
verificar que es mayor de edad. Despues de esto imprimira los detalles de la bebida.


En caso de eleguir una bebida sin alcoholica:
El prgrama le pedira el sabor de su bebida este puede ser alguna fruta o un sabor especial el 
que el usuario desee. Le pedira una descripcion aqui igual que el caso anterior puede escojer si
la quiere mineral natural o como la desea preparar. Por ultimo escojera la temperatura y el tamanio.

Es possible mostrar las bebidas creadas
Es possible filtrar las bebidas por tipo de alcohol o sin alcohol.
Es possible eliminar bebidas

Si se utiliza el caso 7 del menu, el programa eliminara las bebidas creadas anteriormente simulando
como ti el cliente ya esta satisfecho y uno nuevo esta ordenando.

*/

int main() {
    Menu menu;
    int opcion;

// Menu pricipal este es el primero que se muestra en pantalla

    do {
        cout << "\n=== SISTEMA DE BEBIDAS ===" << endl;
        cout << "1. Mostrar menu completo" << endl;
        cout << "2. Agregar bebida alcoholica" << endl;
        cout << "3. Agregar bebida no alcoholica" << endl;
        cout << "4. Mostrar carrito" << endl;
        cout << "5. Filtrar por categoria" << endl;
        cout << "6. Eliminar bebida del carrito" << endl;
        cout << "7. Procesar orden" << endl;
        cout << "0. Salir" << endl;
        cout << "Ingrese una opcion: ";
        cin >> opcion;
        
        switch(opcion) {

// Opcion 1: Mostrar menu completo

            case 1: {
                menu.mostrarMenu();
                break;
            }

// Opcion 2: Agregar bebida alcoholica

            case 2: {
                float grado;
                string tipo, aroma, descripcion;
                int opcionTamanio;
                
                cout << "Ingrese grado de alcohol: ";
                cin >> grado;
                cin.ignore();
                cout << "Ingrese tipo de alcohol: ";
                getline(cin, tipo);
                cout << "Ingrese aroma: ";
                getline(cin, aroma);
                
                cout << "\nIngrese una descripcion para su bebida: ";
                getline(cin, descripcion);
                
                // Mostrar opciones de tamanio

                cout << "\nSeleccione el tamanio de la bebida:" << endl;
                cout << "1. Chico (250ml)" << endl;
                cout << "2. Mediano (500ml)" << endl;
                cout << "3. Grande (750ml)" << endl;
                cout << "Opcion: ";
                cin >> opcionTamanio;
                
                Alchol* nuevaAlcholica = new Alchol(grado, tipo, aroma, descripcion);
                nuevaAlcholica->establecerTamanio(opcionTamanio);
                
                // Lamada a la funcion de verificarEdadLegal con la finalidad de ver si el usuario es mayor de edad

                if(nuevaAlcholica->verificarEdadLegal()) {
                    menu.agregarAlCarrito(nuevaAlcholica);
                    nuevaAlcholica->mostrarAdvertencias();
                    cout << "\nBebida agregada al carrito:" << endl;
                    nuevaAlcholica->mostrarDetalles();
                } else {
                    cout << "Lo sentimos, no se pueden vender bebidas alcoholicas a menores de edad" << endl;
                    delete nuevaAlcholica;
                }
                break;
            }

// Opcion 3: Agregar bebida no alcoholica

            case 3: {
                string sabor, descripcion;
                int nivelHielo, opcionTamanio;
                
                cout << "Ingrese sabor: ";
                cin.ignore();
                getline(cin, sabor);
                
                cout << "\nIngrese una descripcion para su bebida: ";
                getline(cin, descripcion);
                
                // Mostrar opciones de temperatura

                do {
                    cout << "\nSeleccione el nivel de hielo:" << endl;
                    cout << "1. Sin hielo (Temperatura ambiente)" << endl;
                    cout << "2. Poco hielo (Temperatura fresca)" << endl;
                    cout << "3. Mucho hielo (Temperatura muy fria)" << endl;
                    cout << "Opcion: ";
                    cin >> nivelHielo;
                    
                    if(nivelHielo < 1 || nivelHielo > 3) {
                        cout << "Opcion invalida. Por favor seleccione 1, 2 o 3." << endl;
                    }
                } while(nivelHielo < 1 || nivelHielo > 3);
                
                // Mostrar opciones de tamanio

                cout << "\nSeleccione el tamanio de la bebida:" << endl;
                cout << "1. Chico (250ml)" << endl;
                cout << "2. Mediano (500ml)" << endl;
                cout << "3. Grande (750ml)" << endl;
                cout << "Opcion: ";
                cin >> opcionTamanio;
                
                // Establece todos los parametros y los agrega al carrito

                NoAlchol* nuevaNoAlcholica = new NoAlchol(sabor, nivelHielo, descripcion);
                nuevaNoAlcholica->establecerTamanio(opcionTamanio);
                menu.agregarAlCarrito(nuevaNoAlcholica);
                cout << "\nBebida agregada al carrito:" << endl;
                nuevaNoAlcholica->mostrarDetalles();
                break;
            }

// Opcion 4: Mostrar carrito

            case 4: {
                menu.mostrarCarrito();
                break;
            }

// Opcion 5:  Filtra por categoria

            case 5: {

                // Mostrar opciones de categoria dependiendo del tipo de bebida ya establecidas en el carrito

                string categoria;
                cout << "Ingrese categoria (alcohol/noalcohol): ";
                cin >> categoria;
                vector<Bebida*> filtradas = menu.filtrarPorCategoria(categoria);
                cout << "\nBebidas de categoria " << categoria << ":" << endl;
                for(Bebida* bebida : filtradas) {
                    bebida->mostrarDetalles();
                    cout << "------------------------" << endl;
                }
                break;
            }

// Opcion 6:  Elimina bebidas no desadas en el carrito

            case 6: {
                if(menu.get_bebidas().empty()) {
                    cout << "El carrito esta vacio" << endl;
                    break;
                }

                cout << "\nBebidas en el carrito:" << endl;
                vector<Bebida*> bebidas = menu.get_bebidas();
                for(int i = 0; i < bebidas.size(); i++) {
                    cout << "\nBebida " << i + 1 << ":" << endl;
                    bebidas[i]->mostrarDetalles();
                    cout << "------------------------" << endl;
                }

                int indexEliminar;
                cout << "\nIngrese el numero de la bebida que desea eliminar (1-" 
                     << bebidas.size() << "): ";
                cin >> indexEliminar;

                menu.eliminarBebida(indexEliminar - 1); // Restamos 1 porque mostramos índices desde 1
                break;
            }

// Opcion 7:  Proccesa el carrito

            case 7: {
                menu.procesarOrden();
                break;
            }

// Opcion 8:  Salir del programa
            
            case 0: {
                cout << "Gracias por su visita!" << endl;
                break;
            }
            
            default: {
                cout << "Opcion invalida" << endl;
                break;
            }
        }
    } while(opcion != 0);
    
    return 0;
}
