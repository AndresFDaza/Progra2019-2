/* Documentación:
Cola:	Estructura de listas especiales, la cola
		se basa en un arreglo sujeto una modalidad
		FIFO para el acceso de datos.

Elementos del código:
 P,U -> Punteros del arreglo, donde P=Primero y U=Último
	(P usa -1 no existe, 0 existe, 1 existe y hay un dato(indica posicion primer dato))
	(U usa -1 no existe, 0 existe, any# existe e indica la posicion del último dato )

 M -> Especifica el tamaño del arreglo( No el número de datos, recordar para la implementación)
 I -> Indica cuando se realiza o no un proceso
 V -> Indica si el arreglo está o no vacío
 arr -> Arreglo dinámico, ( arr[0] es UNICAMENTE de control, no se guardan datos en esta posicion)

 -----------Para los métodos se verifica la existencia de la cola para realizar los procesos-----------
 Crear() -> Inicializa punteros y asigna el tamaño de la cola (Existencia de la cola)
 Probar() -> Retorna la comprobacion a la existencia de la cola
 Ver() -> Retorna el primer dato de la cola (FIFO)
 Insertar() -> Inserta dato al final de la cola (FIFO)
 Eliminar() -> Se deshace del primer dato (FIFO - Reasigna dato por dato a su nueva posicion, siempre deja
				"residuo" sin importancia )
 Destruir() -> Se deshace de cada dato de forma segura y elimina la cola en su totalidad.

*/

#include "Cola.h"

// Constructor

Cola::Cola() {
	P = -1; U = -1; M = 0;
	I = false; V = false;
	arr = 0;
}

// Métodos

void Cola::Crear(int tamaño)
{
	M = tamaño;
	arr = new int[M];
	P = 0;
	U = 0;
	V = true;
	I = true;

}

bool Cola::Probar()
{
	if (P != -1)
		return true;
	else
		return false;
}

int Cola::Ver()
{
	int dato = 0;
	if (Probar() && P == 1) {
		int dato = arr[P];
		I = true;
		return dato;
	}
	else {
		I = false;
		dato = -1; //Si no existe un dato retorna -1, colsultar si así deberia ser
		return dato;
	}
}

void Cola::Insertar(int dato) //ERRROOOORRR CORREGIR! NO EVALUA METER DATO SI ESTÁ LLENO
{
	if (U <= M) {
		U = U + 1;
		arr[U] = dato;
		I = true;
		if (P == 0) {
			P = P + 1;
		}
	}
	else
		I = false;

}

void Cola::Eliminar()
{
	if (Probar() && P != 0) {
		for (int i = 0; i < U - 1; i++) {

			arr[P + i] = arr[P + i + 1];
		}
		if (U >= 0) {
			U = U - 1;
			if (U == 0) {
				P = 0;
			}
		}
		else {
			U = -1;
			P = -1;
		}

		I = true;
	}
	else
		I = false;
}

void Cola::Destruir()
{
	if (Probar()) {
		for (int i = 0; i < M; i++) {
			Eliminar();
		}
		delete arr;
		P = -1;
		U = -1;
		I = true;
	}
	else
		I = false;
}


// Getters & Setters

int Cola::getP()
{
	return P;
}
void Cola::setP(int p)
{
	P = p;
}

int Cola::getU()
{
	return U;
}
void Cola::setU(int u)
{
	U = u;
}

int Cola::getM()
{
	return M;
}
void Cola::setM(int m)
{
	M = m;
}

bool Cola::getI()
{
	return I;
}
void Cola::setI(bool i)
{
	I = i;
}

bool Cola::getV()
{
	return V;
}
void Cola::setV(bool v)
{
	V = v;
}

//Consultar como hacer un getter y setter de un arreglo
/*
int Cola::getArr() {
	return arr;
}
void Cola::setArr(int arreglo[])
{
	arr = arreglo;
}
*/