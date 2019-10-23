/* Documentacion:
NodoDoble:	Es un objeto que maneja la estructura de un Nodo sencillo,
			con la diferencia de manejar otro espacio puntero adicional.
Elementos:
	sig :	variable tipo puntero que almacena la direccion de memoria del
			siguiente Nodo,
	ant :	variable tipo puntero que almacena la direccion de memoria del
			Nodo anterior.
	info:	variable que almacena la informacion propia del nodo (tipo
			entero en este caso).

	NodoDoble() :	Constructor que inicializa el NodoDoble con los punteros
					siguiente y anterior como nulos ( = NULL).

	NodoDoble(int dato):	Constructor que pide el valor (entero) a asignar
							al atributo info, tambien inizializa ant y sig como NULL.

*/

#include<iostream>
class NodoDoble {
public:
	int info;
	NodoDoble* sig;
	NodoDoble* ant;

	NodoDoble() {
		sig = 0;
		ant = 0;
		info = 0;
	}

	NodoDoble(int dato) {
		info = dato;
		sig = ant = 0;
	}

};