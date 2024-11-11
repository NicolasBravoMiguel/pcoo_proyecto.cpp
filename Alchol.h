#ifndef ALCHOL_H
#define Alchol_H

#include <iostream>
using namespace std;

class Alchol{

    private:
        string tequila;
        string vodka;
        string whiskey;
        string gin;

    public:

    // constructores 
    Alchol (){ //Por Omision

        tequila ="desconocido";
        vodka = "desconocido";
        whiskey = "desconocido";
        gin = "desconocido";

    }

    Alchol(string _teqiula, string _vodka, string _whiskey, string _gin){ // con parametros

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

    
};

#endif