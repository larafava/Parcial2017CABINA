#pragma once
#include <iostream>
#include <string>

using namespace std;

class cVehiculo
{
protected:
	string patente;
	string codigo;
public:
#pragma region Constructor y destructor
	cVehiculo(string _patente, string _codigo);
	~cVehiculo();
#pragma endregion

#pragma region Metodos virtuales
	virtual int pagarpeaje() = 0;
};

