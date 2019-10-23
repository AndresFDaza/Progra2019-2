#pragma once
#include "NodoDoble.cpp"
#pragma once

class ListaDobleEnlzCirc {

private:

	NodoDoble* P, * Q;
	NodoDoble* Inicio;


	bool I, V;


public:

	// Constructor
	ListaDobleEnlzCirc();

	// Métodos

	void Crear(int);
	bool Probar();
	void Ver();
	void Insertar(int, int);
	void Eliminar(int);
	void Destruir();

	// Getters y Setters



	NodoDoble* getP();
	void setP(NodoDoble*);

	NodoDoble* getQ();
	void setQ(NodoDoble*);

	bool getI();
	void setI(bool);

	bool getV();
	void setV(bool);
};