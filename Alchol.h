#ifndef ALCHOL_H
#define Alchol_H

#include <iostream>
#include "Tamanio.h"

using namespace std;

class Alcohol: public Tamanio{

    private:
        string tequila;
        string vodka;
        string whiskey;
        string gin;

    public:

    // constructores 
    Alcohol (): Tamanio(){ //Por Omision

        tequila ="desconocido";
        vodka = "desconocido";
        whiskey = "desconocido";
        gin = "desconocido";

    }

    Alcohol(string _teqiula, string _vodka, string _whiskey, string _gin, int _grande, int _mediano, int _chico): Tamanio(_grande, _mediano, _chico){ // con parametros

        tequila = _teqiula;
        vodka = _vodka;
        whiskey = _whiskey;
        gin = _gin;
        
    }

    string get_Tequila(){ //metodo getter para tequila
        return tequila;
    }
    string get_Vodka(){ //metodo getter para vodka
        return vodka;
    }
    string get_Whiskey(){ //metodo getter para whiskey
        return whiskey;
    }
    string get_Gin(){ //metodo getter para gin
        return gin;
    }

    void set_tequila(string _tequila){
        tequila = _tequila;
    }
    void set_vodka(string _vodka){
        vodka = _vodka;
    }
    void set_whiskey(string _whiskey){
        whiskey = _whiskey;
    }
    void set_gin(string _gin){
        gin = _gin;
    }

};

#endif