#ifndef NO_ALCHOL_H
#define NO_Alchol_H

#include <iostream>
using namespace std;

class No_alchol{

    private:

        string limonada;
        string naranjada;
        string jamaica;
        string horchata;

    public:

    // constructores 
    No_alchol (){ //Por Omision

        limonada = "desconocido";
        naranjada = "desconocido";
        jamaica = "desconocido";
        horchata = "desconocido";

    }

    No_alchol(string _limonada, string _naranjada, string _jamaica, string _horchata){ // con parametros

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
};

#endif