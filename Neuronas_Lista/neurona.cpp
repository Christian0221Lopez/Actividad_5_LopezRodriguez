#include "neurona.h"
#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include<iostream>
#include<stdio.h>
#include<fstream>
#include <string>
#include <sstream>
#include <QApplication>

using namespace std;



void Neurona::InsertarAdelantefloat(int id,float voltaje,int pos_x,int pos_y,int red,int green,int blue)
{
    Neurona* Pnn = new Neurona;

    Pnn->Id = id;
    Pnn->Voltaje = voltaje;
    Pnn->Pos_x = pos_x;
    Pnn->Pos_y = pos_y;
    Pnn->Red = red;
    Pnn->Green = green;
    Pnn->Blue = blue;

    Pnn->pAnt = this;
    this->pSig->pAnt = Pnn;
    Pnn->pSig = this->pSig;
    this->pSig = Pnn;

}

float Neurona::EliminarSiguiente()
{
    Neurona* Pnn = this->pAnt->pAnt;

    delete this->pAnt;

    this->pAnt = Pnn;
    Pnn->pSig = this;

    return 0;

}



