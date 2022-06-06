#include "cColectivo.h"

cColectivo::cColectivo(string _patente) :cVehiculo(_patente) {

}

int cColectivo::pagarpeaje()
{
	return 10;
}
