#include "cCoche.h"

cCoche::cCoche(string _patente, string _codigo) :cVehiculo(_patente, _codigo) {

}

int cCoche::pagarpeaje()
{
	return 5;
}
