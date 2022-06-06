#pragma once
#include <iostream>
#include <string>
#include "cPeaje.h"
#include "cVehiculo.h"

using namespace std;

class cCabina
{
	friend class cPeaje;
protected:
	string codigo;
public:
#pragma region Constructor y destructor
	cCabina(string _codigo);
	~cCabina();
#pragma endregion

#pragma region Metodos Virtuales
	virtual void pasavehiculo(cVehiculo*vehiculo)=0;
	virtual void Impresion()=0;
#pragma endregion
#pragma region Metodos
	string to_string();
	string getcodigo() { return this->codigo; };
	
#pragma endregion

	
};

