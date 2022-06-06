#pragma once
#include <string>
#include "cCabina.h"

using namespace std;

class cCabinaManual:
	cCabina
{
private:
  int contmoto;
  int contcamion;
  int contcoche;
  int contcolectivo;

public:
	cCabinaManual(string _codigo);
	~cCabinaManual();

	void pasavehiculo(cVehiculo*vehiculo);
	void Impresion();
};

