#pragma once
#include "cCabina.h"
#include <iostream>

using namespace std; 

class cCabinaAutomatico:
	public cCabina
{
private:

public:
	cCabinaAutomatico(string _codigo);
	~cCabinaAutomatico();

	void pasavehiculo(cVehiculo*vehiculo);
	void Impresion();
};

