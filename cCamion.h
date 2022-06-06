#pragma once
#include <string>
#include "cVehiculo.h"

using namespace std;

class cCamion:
	public cVehiculo
{
public:
	cCamion(string _patente, string _codigo);
	~cCamion();

	int pagarpeaje();
};

