#include "MiColor.h"
String^ MiColor::getColor() {
	return Color;
}

void MiColor::setColor(String^ _Color) {
	this->Color = _Color;
}