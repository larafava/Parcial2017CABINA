#pragma once
#include <string>
#include "cVehiculo.h"

using namespace std;

class cCoche:
 public cVehiculo
{
public:
	cCoche(string _patente, string _codigo);
	~cCoche();

	int pagarpeaje();
};

