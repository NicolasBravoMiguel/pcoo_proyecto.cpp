#include <iostream>
#include "Alchol.h"
#include "No_alchol.h"

using namespace std;

// Función para mostrar el menu principal
void mostrar_menu_principal() {
    cout << "\nTipo de bebidas:" << endl;
    cout << "1. Bebida Alcholica" << endl;
    cout << "2. Bebida Sin Alchol" << endl;
    cout << "3. Salir" << endl;
    cout << "Seleccione una opcion: " << endl;
}

// Función para mostrar el submenu de la Categoría 1
void mostrar_sub_menu_categoria1() {
    cout << "\nBebidas Alcholicas" << endl;
    cout << "1. Tequila" << endl;
    cout << "2. Vodka" << endl;
    cout << "3. Whiskey" << endl;
    cout << "4. Gin" << endl;
    cout << "5. Regresar" << endl;
    cout << "Seleccione una opcion: ";
}

// Función para mostrar el submenú de la Categoría 2
void mostrar_sub_menu_categoria2() {
    cout << "\nBebidas no alcholicas"<< endl;
    cout << "1. Limonada" << endl;
    cout << "2. Naranajada" << endl;
    cout << "3. Jamaica" << endl;
    cout << "4. Horchata" << endl;
    cout << "5. Regresar" << endl;
    cout << "Seleccione una opcion: ";
}

void mostrar_sub_menu_categoria3() {
    cout << "\nBebidas extras"<< endl;
    cout << "1. Chocolate caliente" << endl;
    cout << "2. Malteada de fresa" << endl;
    cout << "3. Malteada de chocolate" << endl;
    cout << "4. Malteada de vainilla" << endl;
    cout << "5. Regresar" << endl;
    cout << "Seleccione una opcion: ";
}

// Función principal
int main() {
    int opcionPrincipal = 0;  // Variable para el menú principal
    int opcionSubcategoria = 0;  // Variable para subcategorías

    do {
        mostrar_menu_principal();  // Mostrar menú principal
        cin >> opcionPrincipal;  // Leer opción del usuario

        switch(opcionPrincipal) {
            case 1:
                do {
                    mostrar_sub_menu_categoria1();  // Mostrar submenú de Categoría 1
                    cin >> opcionSubcategoria;  // Leer opción de subcategoría

                    switch(opcionSubcategoria) {
                        case 1:
                            cout << "Has seleccionado Tequila\n";
                            break;
                        case 2:
                            cout << "Has seleccionado Vodka\n";
                            break;
                        case 3:
                            cout << "Has seleccionado Whiskey\n";
                            break;
                        case 4:
                            cout << "Has seleccionado Gin\n";
                            break;
                        case 5:
                            cout << "Regresando al menú principal...\n";
                            break;
                        default:
                            cout << "Opcion no válida.\n";
                    }
                } while(opcionSubcategoria != 5);  // Volver al menú principal
                break;

            case 2:
                do {
                    mostrar_sub_menu_categoria2();  // Mostrar submenú de Categoría 2
                    cin >> opcionSubcategoria;  // Leer opción de subcategoría

                    switch(opcionSubcategoria) {
                        case 1:
                            cout << "Has seleccionado Limonada\n";
                            break;
                        case 2:
                            cout << "Has seleccionado Naranjada\n";
                            break;
                        case 3:
                            cout << "Has seleccionado Jamaica\n";
                            break;
                        case 4:
                            cout << "Has seleccionado Horchata\n";
                            break;
                        case 5:
                            cout << "Regresando al menú principal...\n";
                            break;
                        default:
                            cout << "Opcion no válida.\n";
                    }
                } while(opcionSubcategoria != 5);  // Volver al menú principal
                break;
            case 3:
                do {
                    mostrar_sub_menu_categoria3();  // Mostrar submenú de Categoría 3
                    cin >> opcionSubcategoria;  // Leer opción de subcategoría

                    switch(opcionSubcategoria) {
                        case 1:
                            cout << "Has seleccionado Chocolate caliente\n";
                            break;
                        case 2:
                            cout << "Has seleccionado Malteada de fresa\n";
                            break;
                        case 3:
                            cout << "Has seleccionado Malteada de chocolate\n";
                            break;
                        case 4:
                            cout << "Has seleccionado Malteada de vainilla\n";
                            break;
                        case 5:
                            cout << "Regresando al menú principal...\n";
                            break;
                        default:
                            cout << "Opcion no válida.\n";
                    }
                } while(opcionSubcategoria != 5);  // Volver al menú principal
                break;
            case 4:
                cout << "Saliendo del programa...\n";
                break;

            default:
                cout << "Opcion no válida. Intente de nuevo.\n";
        }

    } while(opcionPrincipal != 3);  // Salir del programa si elige 3

    return 0;};