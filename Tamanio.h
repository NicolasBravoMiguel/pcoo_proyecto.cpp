#ifndef TAMANIO_H
#define TAMANIO

#include <iostream>
#include "Extras.h"
#include "Alchol.h"
#include "No_alchol.h"


using namespace std;

class Tamanio{

    protected:

    int grande;
    int mediano;
    int chico;

    public:

    Tamanio(){
        grande = 0;
        mediano = 0;
        chico = 0;
    }

    Tamanio (int _grande, int _mediano, int _chico){
        grande = _grande;
        mediano = _mediano;
        chico = _chico;
    }

    int get_grande(){
        return grande;
    }

    int get_mediano(){
        return mediano;
    }
    
    int get_chico(){
        return chico;
    }

    void set_grande(int _grande){
        grande = _grande;
    }

    void set_mediano(int _mediano){
        mediano = _mediano;
    }

    void set_mediano(int _chico){
        chico = _chico;
    }


};


#endif