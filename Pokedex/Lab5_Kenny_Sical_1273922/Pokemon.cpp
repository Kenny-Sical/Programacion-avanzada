#include "Pokemon.h"
String^ Pokemon::getName() {
	return NamePokemon;
}
String^ Pokemon::getGeneracion() {
	return this->Generacion;  
}
String^ Pokemon::getNationalNumber() {
	return this->NationalNumber;
}
void Pokemon::setName(String^ _name) {
	this->NamePokemon = _name;
}
void Pokemon::setGeneracion(String^ _generacion) {
	this->Generacion = _generacion;
}
void Pokemon::setNationalNumber(String^ _NationalNumber) {
	this->NationalNumber = _NationalNumber;
}