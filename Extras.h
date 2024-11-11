#ifndef EXTRAS_H
#define EXTRAS_H

#include <iostream>
using namespace std;

class extras{

    private:

        string cc; // chocolate caliente
        string mdf; // mateada de fresa
        string mdc; // mateada de chocolate
        string mdv; // mateada de vainilla

    public:

    // constructores 
    extras (){ //Por Omision

        cc = "desconocido";
        mdf = "desconocido";
        mdc = "desconocido";
        mdv = "desconocido";

    }

    extras(string _cc, string _mdf, string _mdc, string _mdv){ // con parametros

        cc = _cc;
        mdf = _mdf;
        mdc = _mdc;
        mdv = _mdv;

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
};

#endif