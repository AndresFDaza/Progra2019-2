#pragma once

#include "Nodo.cpp"

class ColaEnlazada {

private:

	Nodo* P, * U;
	Nodo Q;


	bool I, V;


public:

	// Constructor
	ColaEnlazada();

	// Métodos

	void Crear(int);
	bool Probar();
	int Ver();
	void Insertar(int);
	void Eliminar();
	void Destruir();

	// Getters y Setters

	int getP();
	void setP(int);

	int getU();
	void setU(int);

	bool getI();
	void setI(bool);

};