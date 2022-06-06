#pragma once
#include "cCabina.h"
#include <string>
#include <iostream>
#define L_MAX 25

using namespace std;

class cPeaje
{
	friend class cCabina;
	cCabina** ListaCabinas;
	unsigned int CantidadActual;
	unsigned int CantidadMaxima;

public:
	cPeaje(int longitud = L_MAX);
	~cPeaje();

	bool agregar(cCabina* nuevacabina);
	cCabina* quitar(string codigo);
	bool eliminar(int posicion);
	int buscar(string codigo);
	void imprimir();
	void listar(); //imprimir los datos de la lista
	bool operator+(cCabina* cabina);
	bool operator-(cCabina* cabina);
	cPeaje* operator[](unsigned int pos, cVehiculo*vehiculo);
	friend ostream& operator<<(ostream& out, cCabina& cabina);
	void setint(int aux);
	


};

