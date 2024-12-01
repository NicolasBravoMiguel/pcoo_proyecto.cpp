// Menu.h
#ifndef MENU_H
#define MENU_H
#include "Bebida.h"
#include "No_Alchol.h"
#include "Alchol.h"
#include <vector>

// Clase menu esta es composision de la clase Bebida

class Menu {
    private:
        vector<Bebida*> bebidas;
    
    public:
        // Constructor por omision

        Menu() {}

        //Constructor con parametros
        Menu(vector<Bebida*> _bebidas) {
            bebidas = _bebidas;
        }

////////////////////////////////////////////////////////////////////////////////////////////////////////////////

        // Getters
        vector<Bebida*> get_bebidas() { 
            return bebidas; 
            }

////////////////////////////////////////////////////////////////////////////////////////////////////////////////

        // Setters
        void set_bebidas(vector<Bebida*> _bebidas) { 
            bebidas = _bebidas; 
            }

///////////////////////////////////////////////////////////////////////////////////////////////////////////////

        // Métodos

// Funcion que muestra el menu de bebidas 
        void mostrarMenu() {
            cout << "=== MENU DE BEBIDAS ===" << endl;
            for(int i = 0; i < bebidas.size(); i++) {
                cout << "\nBebida #" << i+1 << endl;
                bebidas[i]->mostrarDetalles();
            }
        }

// Funcion para selecionar bebidas

        void seleccionarBebida(int index) {
            if(index >= 0 && index < bebidas.size()) {
                cout << "Bebida seleccionada:" << endl;
                bebidas[index]->mostrarDetalles();
            } else {
                cout << "Indice invalido" << endl;
            }
        }

// Filtra las bebidas dependiendo si es alcoholeica o no y debuelve un vector con las bebidas que cumplen con la condicion

        vector<Bebida*> filtrarPorCategoria(string categoria) {
            vector<Bebida*> filtradas;
            for(Bebida* bebida : bebidas) {
                if(dynamic_cast<Alchol*>(bebida) && categoria == "alcohol") {
                    filtradas.push_back(bebida);
                } else if(dynamic_cast<NoAlchol*>(bebida) && categoria == "noalcohol") {
                    filtradas.push_back(bebida);
                }
            }
            return filtradas;
        }

// Funcion que agrega babidas al carrito de compra

        void agregarAlCarrito(Bebida* bebida) {
            bebidas.push_back(bebida);
            cout << "Bebida agregada al carrito" << endl;
        }

// Funcion que elimina bebidas del carrito de compra

        void eliminarBebida(int index) {
            if(index >= 0 && index < bebidas.size()) {
                delete bebidas[index];  // Liberar memoria
                bebidas.erase(bebidas.begin() + index);
                cout << "Bebida eliminada exitosamente" << endl;
            } else {
                cout << "Indice de bebida invalido" << endl;
            }
        }


// Funcion que muestra el carrito de compra

        void mostrarCarrito() {
            float total = 0;
            cout << "\n=== CARRITO DE COMPRAS ===" << endl;
            for(Bebida* bebida : bebidas) {
                bebida->mostrarDetalles();
                total += bebida->calcularPrecioFinal();
                cout << "------------------------" << endl;
            }
            cout << "Total a pagar: $" << total << endl;
        }

// Funcion que muestra el estado de tu compra

        void procesarOrden() {
            cout << "Procesando orden..." << endl;
            mostrarCarrito();
            cout << "Orden procesada exitosamente!" << endl;
            bebidas.clear();
        }
};
#endif
