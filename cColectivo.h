#pragma once
#include <string>
#include "cVehiculo.h"

using namespace std;

class cColectivo:
	public cVehiculo
{
public:
	cColectivo(string _patente, string _codigo);
	~cColectivo();

	int pagarpeaje();
};

