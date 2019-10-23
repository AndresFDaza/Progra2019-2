/*Documentacion:

Nodo:	Objeto de tipo estructura que se compone de dos elementos
		Uno almacena la informacion o dato correspondiente al
		nodo actual, el otro almacena la direccion de memoria
		correspondiente al siguiente nodo.

Elementos del Código:

	info:	atributo de tipo entero referente al dato perteneciente al nodo
	* sig:	atributo puntero de tipo nodo, el cual referencia la direccion
			de memoria del siguiente nodo

	Nodo():	Constructor donde asigna a sig valor null

	Nodo(int dato): Constructor que pide el valor para asignar al atributo info,
					tambien inicializa a sig con un Null

*/

#pragma once
#include <iostream>

class Nodo {

public:
	int info;
	Nodo* sig;

	Nodo() {
		sig = NULL;
		info = 0;
	};

	Nodo(int dato) {
		info = dato;
		sig = NULL;
	}

};