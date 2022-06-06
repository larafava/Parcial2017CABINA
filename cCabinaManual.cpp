#include "cCabinaManual.h"

cCabinaManual::cCabinaManual(string _codigo) :cCabina(_codigo) {
	this->contcamion = 0;
	this->contcoche = 0;
	this->contcolectivo = 0;
	this->contmoto = 0;
}

void cCabinaManual::pasavehiculo(cVehiculo* vehiculo)
{
	int peajepagado=vehiculo->pagarpeaje();
	if (peajepagado == 6) //no verifique que sea el tipo de vehiculo porque a cada vehiculo asigne un valor distinto
		contmoto == contmoto + 1;
	


}

void cCabinaManual::Impresion() {
	cout << "cantidad motos:" + std::to_string(contmoto);
	cout << "cantidad coches:" + std::to_string(contcoche);
	cout << "cantidad colectivos:" + std::to_string(contcolectivo);
	//asi con cada uno
}