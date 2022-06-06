#include "cPeaje.h"

cPeaje::cPeaje(int longitud) {
	this->ListaCabinas = new cCabina * [longitud];
	this->CantidadActual = 0;
	this->CantidadMaxima = longitud;
	for (unsigned int i = 0; i < CantidadActual; i++)
		this->ListaCabinas[i] = NULL;
}

bool cPeaje::agregar(cCabina* nuevacabina) {
	for (unsigned int i = 0; i < CantidadMaxima; i++) {
		if (this->ListaCabinas[i] == NULL) {
			this->ListaCabinas[i] = nuevacabina;
			CantidadActual++;
			return true;
		}
	} return false;
}

cCabina* cPeaje::quitar(string codigo) {
	for (int i = 0; i < CantidadActual; i++) {
		if (this->ListaCabinas[i] != NULL && this->ListaCabinas[i]->getcodigo() == codigo) {
			cCabina* Aux = this->ListaCabinas[i];
			this->ListaCabinas[i] = NULL;
			return Aux;
		}
	} return NULL;
}

bool cPeaje::eliminar(int posicion) {
	bool tor = false;
	if (posicion < this->CantidadActual) {
		delete this->ListaCabinas[posicion];
		this->ListaCabinas[posicion] = NULL;
		int i = posicion + 1;
		while (i < this->CantidadActual) {
			this->ListaCabinas[i - 1] = this->ListaCabinas[i];
			i++;
		}
		this->ListaCabinas[this->CantidadActual - 1] = NULL;
		this->CantidadActual = this->CantidadActual - 1;
		tor = true;
	}
	return tor;
}

int cPeaje::buscar(string codigo) {
	for (int i = 0; i < CantidadActual; i++)
		if (this->ListaCabinas[i] != NULL && this->ListaCabinas[i]->getcodigo() == codigo)
			return i;
	return -1;
}

void cPeaje::listar() {
	int i;
	for (i = 0; i < this->CantidadActual; i++) {
		this->ListaCabinas[i]->Impresion();
	}
}


bool cPeaje::operator+(cCabina* cabina) {
	return this->agregar(cabina);
}
bool cPeaje::operator-(cCabina* cabina) {
	int posicion = this->buscar(cabina->getcodigo());
	if (posicion >= 0)
		return this->eliminar(posicion);
	else
		return false;
}


ostream& operator<<(ostream& out, cCabina& cabina)
{
	return out << cabina.to_string() << endl;
}



