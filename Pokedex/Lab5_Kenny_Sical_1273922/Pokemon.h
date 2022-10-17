#pragma once
using namespace System;
ref class Pokemon
{
public:
	//General variables
	String^ NationalNumber;
	String^ NamePokemon;
	String^ Generacion;

	String^ getName();
	String^ getGeneracion();
	String^ getNationalNumber();
	void setName(String^ _name);
	void setGeneracion(String^ _generacion);
	void setNationalNumber(String^ _NationalNumber);

};

