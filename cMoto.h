#pragma once
#include "cVehiculo.h"
#include <string>

using namespace std;

class cMoto:
	public cVehiculo
{
public:
#pragma region  constructor y destructor
	cMoto(string _patente, string _codigo);
#pragma endregion

#pragma region metodos
	int pagarpeaje();
#pragma endregion
};

