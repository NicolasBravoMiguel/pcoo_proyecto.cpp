// Alcohol.h
#ifndef ALCHOL_H
#define ALCHOL_H
#include "Bebida.h"

// Clase alcohol la cual heredea de la clase padre Bebida

class Alchol : public Bebida {
    private:
        float gradoDeAlcohol;
        string tipoDeAlcohol;
        string aroma;
        
    public:
        // Constructor por omision
        Alchol() : Bebida() {
            gradoDeAlcohol = 0;
            tipoDeAlcohol = "";
            aroma = "";
        }
        // Constructor con parametos
        Alchol(float _grado, string _tipo, string _aroma, string _descripcion) : Bebida() {
            gradoDeAlcohol = _grado;
            tipoDeAlcohol = _tipo;
            aroma = _aroma;
            descripcion = _descripcion;
        }
        
//////////////////////////////////////////////////////////////////////////////////////

        // Getters

        float get_gradoDeAlcohol() { 
            return gradoDeAlcohol; 
            }
        string get_tipoDeAlcohol() { 
            return tipoDeAlcohol; 
            }
        string get_aroma() { 
            return aroma; 
            }

////////////////////////////////////////////////////////////////////////////////////

        // Setters

        void set_gradoDeAlcohol(float _grado) { 
            gradoDeAlcohol = _grado; 
            }

        void set_tipoDeAlcohol(string _tipo) { 
            tipoDeAlcohol = _tipo; 
            }

        void set_aroma(string _aroma) { 
            aroma = _aroma; 
            }

////////////////////////////////////////////////////////////////////////////////////

        // Métodos

        // Funcion que valida si el usuario que esta consumiendo la bebida es mayor de edad

        bool verificarEdadLegal() {
            int edad;
            cout << "Por favor, ingrese su edad: ";
            cin >> edad;
            return edad >= 18;
        }

        // Funcion que muestra el Precio base de la bebida 

        float calcularPrecioFinal () override {
            precio = 14.0;
            return precio;
        }
        
        // Funcion que muestra tanto el aviso que deberian de tener todos los consumidores de alcohol como el precio de la bebida
        void mostrarAdvertencias() {
            cout << "ADVERTENCIA: El consumo excesivo de alcohol es danino para la salud" << endl;
            cout << "Grado alcoholico (0 - 100 ml): " << gradoDeAlcohol << "%" << endl;
        }
};

#endif
