#pragma once
#include <string>

using std::string;

class Poligonos {

protected:
	string figura;
	string color;
	int ID;

public:
	Poligonos(string figura, string color, int ID) {
		this->figura = figura;
		this->color = color;
		this->ID = ID;
	}

	virtual double Area() = 0;
	virtual double Perimetro() = 0;

	virtual string getColor() {
		return "";
	}
	virtual string getFigura() {
		return "";
	}
	virtual int id() {
		return 0;
	}
};
