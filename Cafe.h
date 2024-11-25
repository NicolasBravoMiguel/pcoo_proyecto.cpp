#ifndef CAFE_H
#define CAFE_H

#include <iostream>

using namespace std;

class Cafe{

    private:
        string americano;
        string expresso;
        string cappuccino;
    
    public:

        Cafe(){
            americano =  "desconocido";
            expresso =  "desconocido";
            cappuccino =  "desconocido";

        }

        Cafe (string _americano, string _expresso, string _cappuccino){
                americano = _americano;
                expresso = _expresso;
                cappuccino = _cappuccino;
        }
    
    string get_americano(){
        return americano;
    }
    string get_expresso(){
        return expresso;
    }
    string get_cappuccino(){
        return cappuccino;
    }

    void set_americano(string _americano){
        americano = _americano;
    }
    void set_expresso(string _expresso){
        expresso = _expresso;
    }
    void set_cappuccino(string _cappuccino){
        cappuccino = cappuccino;
    }

};


#endif 