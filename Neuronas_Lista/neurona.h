#ifndef NEURONA_H
#define NEURONA_H
#include "neurona.h"
#include <QString>

class Neurona
{
private:
    Neurona* pAnt;
    Neurona* pSig;
    int Id;
    float Voltaje;
    int Pos_x;
    int Pos_y;
    int Red;
    int Green;
    int Blue;
    friend class Clista;
public:
    void InsertarAdelantefloat(int,float,int,int,int,int,int);
    float EliminarSiguiente();
    QString Set();
};



#endif // NEURONA_H
