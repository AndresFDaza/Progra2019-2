/* Documentaci�n:
ListaDobleEnlzCirc :	Estructura de listas especiales, la lista doblemente
						enlazada circular se compone de nodos dobles, donde
						la lista "no tiene" principio ni fin (circulo-anillo).

Elementos del c�digo:

	Inicio: Puntero que indica el primer NodoDoble (Nodo inicial)

	P:	Puntero m�vil tipo NodoDoble de la lista DEC (doblemente encadenada circular),
		donde P se�ala una posicion de referencia.
	Q:	Puntero tipo NodoDoble auxiliar este existe solo al momento de agregar un
		nuevo NodoDoble.



 I:	Indica cuando se realiz� o no un proceso.
 V: Indica cuando la lista est� o no vac�a.


 -----------Para los m�todos se verifica la existencia de la lista para realizar los procesos-----------

 Crear():		Crea un NodoDoble y pide el dato a insertar en el primer NodoDoble, se�alado como Inicio).
 Probar():		Retorna la comprobacion a la existencia de la lista.
 Ver():			Retorna e imprime toda la lista, procurando no repetir la lista (lista circular).
 Insertar():	Pide dato y crea nodoDoble en cierta posicion (requiere posicion-dato). NOTA: MODIFICAR PARA TENER C�DIGO MAS LIMPIO Y ESCALABLE.
 Eliminar():	Se deshace del nodoDoble en la posicion que el usuario infrese.
 Destruir():	Calcula el tama�o de la lista y elimina cada Nodo de forma segura hasta eliminar la lista en su totalidad.

*/

#include "ListaDobleEnlzCirc.h"
using namespace std;

//constructor
ListaDobleEnlzCirc::ListaDobleEnlzCirc() {

	//Inicio = new NodoDoble();
	//P = new NodoDoble();
	//Q = new NodoDoble();
	I = false;
	V = false;
	Inicio = 0;
	P = 0;
	Q = 0;
}

//m�todos
void ListaDobleEnlzCirc::Crear(int dato)
{
	if (Probar()) {
		I = false;
		cout << "Ya existe una lista" << endl;
	}
	else {
		//NodoDoble* P;
		//NodoDoble* Inicio;

		NodoDoble* P = new NodoDoble(dato);
		P->sig = P;
		P->ant = P;
		P->info = dato;
		Inicio = P;
		I = true;
		cout << "Lista creada" << endl;
	}
}

bool ListaDobleEnlzCirc::Probar()
{
	if (Inicio != NULL) {

		V = false;
		I = true;
		return true;
	}
	else {
		V = true;
		I = true;
		return false;
	}
}

void ListaDobleEnlzCirc::Ver()
{
	if (Probar()) {
		P = Inicio;
		cout << ":::::" << endl;
		do {
			cout << P->info << endl;
			P = P->sig;
		} while (P != Inicio);

		cout << ":::::" << endl;

		I = true;
	}
	else {
		I = false;
		cout << ":::::" << endl;
		cout << "No existe una lista" << endl;
		cout << ":::::" << endl;

	}
}

void ListaDobleEnlzCirc::Insertar(int referencia, int dato)
{
	if (Probar()) {


		P = Inicio;
		int cuenta = 1;

		while (cuenta < (referencia - 1)) {
			P = P->sig;
			cuenta = cuenta + 1;
		}

		NodoDoble* Q = new NodoDoble(dato);


		Q->info = dato;
		Q->ant = NULL;
		Q->sig = NULL;

		P->sig->ant = Q;
		Q->sig = P->sig;
		P->sig = Q;
		Q->ant = P;

		I = true;
	}
	else {
		I = false;
		cout << "No existe una lista" << endl;
	}
}

void ListaDobleEnlzCirc::Eliminar(int referencia)
{
	if (Probar()) {

		if (referencia > 1) {

			NodoDoble* P = new NodoDoble();

			P = Inicio;
			int cuenta = 1;

			while (cuenta < (referencia)) {
				NodoDoble* P = new NodoDoble();
				P = P->sig;
				cuenta = cuenta + 1;
			}

			P->sig->ant = P->ant;
			P->ant->sig = P->sig;
			P->sig = NULL;
			P->ant = NULL;
			delete P;
			I = true;
		}

		else
		{
			NodoDoble* P = new NodoDoble();

			P = Inicio;

			Inicio = P->sig;

			P->sig->ant = P->ant;
			P->ant->sig = P->sig;
			P->sig = NULL;
			P->ant = NULL;
			delete P;
			I = true;
		}

	}
	else {
		I = false;
		cout << "No existe una lista" << endl;
	}
}

void ListaDobleEnlzCirc::Destruir()
{
	if (Probar()) {

		int cuentaTama�o = 1;
		P = Inicio;
		do {
			P = P->sig;
			cuentaTama�o = cuentaTama�o + 1;
		} while (P != Inicio);


		do {
			Eliminar(cuentaTama�o);
			cuentaTama�o = (cuentaTama�o - 1);
		} while (cuentaTama�o > 0);

		delete Inicio;


	}
	else {
		I = false;
		cout << "No existe una lista" << endl;
	}

}


NodoDoble* ListaDobleEnlzCirc::getP()
{
	return P;
}
void ListaDobleEnlzCirc::setP(NodoDoble* p)
{
	P = p;
}

NodoDoble* ListaDobleEnlzCirc::getQ()
{
	return Q;
}
void ListaDobleEnlzCirc::setQ(NodoDoble* q)
{
	Q = q;
}

bool ListaDobleEnlzCirc::getI()
{
	return I;
}
void ListaDobleEnlzCirc::setI(bool i)
{
	I = i;
}

bool ListaDobleEnlzCirc::getV()
{
	return V;
}
void ListaDobleEnlzCirc::setV(bool v)
{
	V = v;
}


