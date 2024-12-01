// NoAlcohol.h actualizado
#ifndef NOALCHOL_H
#define NOALCHOL_H
#include "Bebida.h"

class NoAlchol : public Bebida {
    private:
        string sabor;
        int temperatura;
        string nivelHielo;
        
    public:
        // Constructor por omision
        NoAlchol() : Bebida() {
            sabor = "";
            temperatura = 20; // temperatura ambiente por defecto
            nivelHielo = "Sin hielo";
        }
        
        // Constructor con parámetros
        NoAlchol(string _sabor, int _nivelHielo, string _descripcion) : Bebida() {
            sabor = _sabor;
            temperatura = 20; // temperatura ambiente por defecto
            descripcion = _descripcion;
            personalizarTemperatura(_nivelHielo);
        }

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

        // Getters

        string get_sabor() { 
            return sabor; 
            }
        int get_temperatura() { 
            return temperatura; 
            }
        string get_nivelHielo() { 
            return nivelHielo; 
            }

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

        // Setters
        void set_sabor(string _sabor) { 
            sabor = _sabor; 
            }
        
        void set_temperatura(int _nivelHielo) {
            personalizarTemperatura(_nivelHielo);
        }

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

        // Métodos

// Funcion que personaliza la temperatura de la bebida

        void personalizarTemperatura(int nivel) {
            switch(nivel) {
                case 1:
                    temperatura = 20; // temperatura ambiente
                    nivelHielo = "Sin hielo";
                    break;
                case 2:
                    temperatura = 10; // temperatura fresca
                    nivelHielo = "Poco hielo";
                    break;
                case 3:
                    temperatura = 5;  // temperatura muy fría
                    nivelHielo = "Mucho hielo";
                    break;
                default:
                    temperatura = 20;
                    nivelHielo = "Sin hielo";
                    cout << "Nivel de hielo invalido. Se establece sin hielo por defecto." << endl;
            }
            cout << "Bebida preparada " << nivelHielo << " (Temperatura: " << temperatura << " Grados - C)" << endl; // imprime
        }

// Funcion que expresa el precio inicial de una bebida no alcoholica 

        float calcularPrecioFinal () override {
            precio = 8.0;
            return precio;
        }

// Funcion que imprime los parametros de la bebida
        void mostrarDetalles() override {
            Bebida::mostrarDetalles();
            cout << "Sabor: " << sabor << endl;
            cout << "Nivel de hielo: " << nivelHielo << endl;
            cout << "Temperatura: " << temperatura << " Grados - C" << endl;
        }
};
#endif
