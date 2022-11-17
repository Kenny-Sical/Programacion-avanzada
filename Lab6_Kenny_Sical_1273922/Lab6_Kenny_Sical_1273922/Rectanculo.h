#pragma once
#include <string>
#include "Poligonos.h"

using  std::string;

class Rectangulo : public Poligonos {

protected:
    double base;
    double altura;

public:
    Rectangulo(string figura, string color, int ID, double base, double altura) : Poligonos(figura, color, ID) {
        this->base = base;
        this->altura = altura;
    }
    double Area()override {
        return this->base * this->altura;
    }
    double Rectangulo::Perimetro()override {
        return (2 * this->base) + (2 * this->altura);
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