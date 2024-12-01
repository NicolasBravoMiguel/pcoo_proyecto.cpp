// Bebida.h
#ifndef BEBIDA_H
#define BEBIDA_H
#include <iostream>
#include <string>
using namespace std;

// Clase Bebida es la clase padre y hereda sus atributos a las clases Alchol y No_Alchol
class Bebida {
    protected:
        
        float precio;
        int tamanio;
        string descripcion;
    
    public:
        // Constructor por omision
        Bebida() {
            precio = 0;
            tamanio = 0;
            descripcion = "";
            
        }
        // Constructor con parametros
        Bebida(float _precio, int _tamanio, string _descripcion) {
            
            precio = _precio;
            tamanio = _tamanio;
            descripcion = _descripcion;
        }

///////////////////////////////////////////////////////////////////////////////////////////////////////        

        // Getters
        

        float get_precio() { 
            return precio; 
            }
        int get_tamano() {
            return tamanio; 
            }
        string get_descripcion() { 
            return descripcion; 
            }

//////////////////////////////////////////////////////////////////////////////////////////////////////////

        // Setters
        
        void set_precio(float _precio) { 
            precio = _precio; 
            }
        void set_tamano(int _tamanio) { 
            tamanio = _tamanio; 
            }
        void set_descripcion(string _descripcion) { 
            descripcion = _descripcion; 
            }

//////////////////////////////////////////////////////////////////////////////////////////////////////////
        
        // Métodos
        
// Funcion que define el tamanio de la bebida

        void establecerTamanio( int opcionTamanio){
            switch (opcionTamanio){
                case 1:
                    tamanio = 250; // 250 ml
                    break;
                case 2:
                    tamanio = 500; // 500 ml
                    break;
                case 3:
                    tamanio = 750; // 750 ml
                    break;
                default: 
                    tamanio = 250; // 250 ml
            }
        }

// Funcion que ajusta el precio de la bebida de acorde al tamanio

         float calcularPrecioSegunTamanio() {
            float precioBase = calcularPrecioFinal();
            if (tamanio == 250) 
                return precioBase; // el precio no cambia del inicial

            if (tamanio == 500) 
                return precioBase * 1.5; // el precio aumenta un 50%

            if (tamanio == 750) 
                return precioBase * 2;  // el precio aumenta un 100%

            return precioBase;
        }

// Funcion que calcula el precio final de la bebida

        virtual float calcularPrecioFinal() = 0;


// Funcion que muestra los detalles de la bebida aligual q su precio final

      virtual void mostrarDetalles() {
    cout << "\n=== Detalles de la Bebida ===" << endl;
    cout << "Descripcion: " << descripcion << endl;
    cout << "Tamanio: " << tamanio << "ml" << endl;
    cout << "Precio: $" << calcularPrecioSegunTamanio() << endl;
    cout << "=======================" << endl;
    }


        
};

#endif