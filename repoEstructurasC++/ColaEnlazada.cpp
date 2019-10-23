/* Documentación:
Cola Enlazada:	Estructura de listas especiales, la cola enlazada
				se basa en una lista enlazada compuesta de nodos,
				sujeto una modalida FIFO para el acceso de datos.

Elementos del código:

 P,U:	Punteros tipo Nodo de la cola enlazada, donde P=Primero y U=Último
 Q:		Puntero tipo Nodo auxiliar



 I:	Indica cuando se realiza o no un proceso
 V: Indica cuando la cola está o no vacia


 -----------Para los métodos se verifica la existencia de la cola para realizar los procesos-----------

 Crear():		Inicializa punteros y pide el dato a insertar en el primer nodo)
 Probar():		Retorna la comprobacion a la existencia de la cola
 Ver():			Retorna el primer dato de la cola (FIFO)
 Insertar():	Pide dato y crea nodo al final de la cola (FIFO)
 Eliminar():	Se deshace del primer Nodo (FIFO - El Nodo siguiente al primero pasa a ser el primer nodo )
 Destruir():	Se deshace de cada dato de forma segura y elimina la cola en su totalidad.

*/

#pragma once

#include "ColaEnlazada.h"
#include "Nodo.cpp"

ColaEnlazada::ColaEnlazada() {
	P = NULL;
	U = NULL;
	Q = NULL;
	I = false;
	V = false;
}

void ColaEnlazada::Crear(int dato)
{

	Nodo* Q = new Nodo(dato);
	P = Q;
	U = Q;
	I = true;
}

bool ColaEnlazada::Probar()
{
	if (P->sig != NULL) {
		return true;
	}
	else {
		return false;
	}
	I = true;
}

int ColaEnlazada::Ver()
{
	if (Probar()) {
		I = true;
		return P->info;
	}
	else {
		I = false;
		return -1;
	}
}

void ColaEnlazada::Insertar(int dato)
{
	if (Probar()) {
		Nodo* P = new Nodo(dato);
		U->sig = P;
		U = P;
		I = true;
	}
	else
		I = false;
}

void ColaEnlazada::Eliminar()
{
	if (Probar()) {
		Nodo* Q;
		Q = P;
		P = P->sig;
		delete P;
		if (P == NULL) {
			P = U = NULL;
		}
		I = true;
	}
	else {
		I = false;
	}
}

void ColaEnlazada::Destruir()
{
	while (P != NULL) {
		Eliminar();
	}
}


// Getters & Setters

bool ColaEnlazada::getI()
{
	return I;
}

void ColaEnlazada::setI(bool i)
{
	I = i;
}
