#pragma once
#include "poligonos.h"
class Cuadrado : public Poligonos {

protected:
    double lado;

public:
    Cuadrado(string figura, string color, int ID, double lado) : Poligonos(figura, color, ID) {
        this->lado = lado;
    }

    double Area() override {
        return this->lado * this->lado;
    }
    double Perimetro() override {
        return this->lado * 4;
    }
    int id()override {
        return this->ID;
    }
    string getColor() override {
        return this->color;
    }
    string getFigura() override {
        return this->figura;
    }
};