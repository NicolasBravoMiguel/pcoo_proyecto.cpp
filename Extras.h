#ifndef EXTRAS_H
#define EXTRAS_H

#include <iostream>
#include "Tamanio.h"
#include "Cafe.h"

using namespace std;

class extras: Tamanio:{

    private:

        string cc; // chocolate caliente
        string mdf; // mateada de fresa
        string mdc; // mateada de chocolate
        string mdv; // mateada de vainilla
        Cafe cafe;

    public:

    // constructores 
    extras (){ //Por Omision

        cc = "desconocido";
        mdf = "desconocido";
        mdc = "desconocido";
        mdv = "desconocido";
        

    }

    extras(string _cc, string _mdf, string _mdc, string _mdv, Cafe _cafe, int grande, int mediano, int chico): Tamanio(_grande, _mediano, _chico){ // con parametros

        cc = _cc;
        mdf = _mdf;
        mdc = _mdc;
        mdv = _mdv;
        cafe = _cafe;

    }

    string get_cc(){ //metodo getter
        return cc;
    }
    string get_mdf(){ //metodo getter
        return mdf;
    }
    string get_mdc(){ //metodo getter
        return mdc;
    }
    string get_mdv(){
        return mdv;
    }

    Cafe get_cafe(){ //metodo getter
        return cafe;
    }


    void set_cc(string _cc){
        cc = _cc;
    }
    void set_mdf(string _mdf){
        mdf = _mdf;
    }
    void set_mdc(string _mdc){
        mdc = _mdc;
    }
    void set_mdv(string _mdv){
        mdv = _mdv;
    }
    void set_cafe(Cafe _cafe){
        cafe = _cafe;
    }
    
};

#endif