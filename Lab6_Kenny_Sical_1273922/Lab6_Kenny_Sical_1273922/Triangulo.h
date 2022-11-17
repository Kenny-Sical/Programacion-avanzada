#pragma once
#include "poligonos.h"
class Triangulo : public Poligonos {

protected:
    double lado;
    double base;

public:
    Triangulo(string figura, string color, int ID, double lado, double base) : Poligonos(figura, color, ID) {
        this->lado = lado;
        this->base = base;
    };

    double Area() override {
        double a = sqrt((this->lado * this->lado) - ((this->base * this->base) / 4));
        return ((this->base * a) / 2);
    }
    double Perimetro() override {
        return (2 * this->lado) + this->base;
    }
    int id() override {
        return this->ID;
    }
    string getColor() override {
        return this->color;
    }
    string getFigura() override {
        return this->figura;
    }
};
