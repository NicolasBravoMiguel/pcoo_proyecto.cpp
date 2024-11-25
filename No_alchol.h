#ifndef NO_ALCHOL_H
#define NO_Alchol_H

#include <iostream>
#include "Tamanio.h"



using namespace std;

class No_alcohol: public Tamanio{

    private:

        string limonada;
        string naranjada;
        string jamaica;
        string horchata;

    public:

    // constructores 
    No_alcohol ():Tamanio(){ //Por Omision

        limonada = "desconocido";
        naranjada = "desconocido";
        jamaica = "desconocido";
        horchata = "desconocido";

    }

    No_alcohol(string _limonada, string _naranjada, string _jamaica, string _horchata, int _grande, int _mediano, int _chico): Tamanio(_grande, _mediano, _chico){ // con parametros

        limonada = _limonada;
        naranjada = _naranjada;
        jamaica = _jamaica;
        horchata = _horchata;

    }

    string get_limonada(){ //metodo getter
        return limonada;
    }
    string get_naranjada(){ //metodo getter
        return naranjada;
    }
    string get_jamaica(){ //metodo getter
        return jamaica;
    }
    string get_horchata(){
        return horchata;
    }

    void set_limonada(string _limonada){
        limonada = _limonada;
    }
    void set_naranjada(string _naranjada){
        naranjada = _naranjada;
    }
    void set_jamaica(string _jamaica){
        jamaica = _jamaica;
    }
    void set_horchata(string _horchata){
        horchata = _horchata;
    }

};

#endif