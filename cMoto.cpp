#include "cMoto.h"

cMoto::cMoto(string _patente) :cVehiculo(_patente) {

}

int cMoto::pagarpeaje()
{
	return 6;
}
