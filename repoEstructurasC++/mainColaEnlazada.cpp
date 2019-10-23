#include<iostream>
#include"ColaEnlazada.h"
using namespace std;


int main() {

	void funcCrear(ColaEnlazada);
	void funcProbar(ColaEnlazada);
	void funcVer(ColaEnlazada);
	void funcInsertar(ColaEnlazada);
	void funcEliminar(ColaEnlazada);
	void funcDestruir(ColaEnlazada);


	int option = 0;
	ColaEnlazada nuevaColaEnlazada;
	int ingresaDato = 0;


	do {

		cout << "============ MENU DE Cola Enlazada ============" << endl;
		cout << "1. Crear cola enlazada" << endl;
		cout << "2. Probar cola enlazada" << endl;
		cout << "3. Ver cola enlazada" << endl;
		cout << "4. Insertar a la cola enlazada" << endl;
		cout << "5. Eliminar de la cola enlazada" << endl;
		cout << "6. Destruír la cola enlazada" << endl;

		cout << "999.Finalizar programa" << endl;
		cout << "=========================================" << endl;

		cout << "Su opcion: ";
		cin >> option;
		system("cls");

		switch (option)
		{
		case 1:
			funcCrear(nuevaColaEnlazada);
			break;
		case 2:
			funcProbar(nuevaColaEnlazada);
		case 3:
			funcVer(nuevaColaEnlazada);
			break;
		case 4:
			funcInsertar(nuevaColaEnlazada);
			break;
		case 5:
			funcEliminar(nuevaColaEnlazada);
			break;
		case 6:
			funcDestruir(nuevaColaEnlazada);
			break;

		case 999:
			cout << "\t\t SALIENDO DEL PROGRAMA . . .\n";
			break;
		default:
			cout << "\n************OPCION FUERA DE RANGO, INTENTE NUEVAMENTE*******\n\n" << endl;
			break;
		}

	} while (option != 999);
	cout << "\n\n\n" << endl;

	system("Pause");
	return 0;
}
void funcCrear(ColaEnlazada colaenlazada) {
	int ingresaDato2 = 0;

	cout << "Ingrese el valor del Nodo inicial: " << endl;
	cin >> ingresaDato2;
	colaenlazada.Crear(ingresaDato2);
};

void funcProbar(ColaEnlazada colaenlazada) {
	if (colaenlazada.Probar()) {
		cout << "La lista ya existe" << endl;
	}
	else {
		cout << "La lista NO existe" << endl;
	}
};

void funcVer(ColaEnlazada colaenlazada) {
	cout << "Valor en cola: " << colaenlazada.Ver() << endl;
};

void funcInsertar(ColaEnlazada colaenlazada) {

	int ingresaDato2 = 0;

	cout << "Ingrese el valor del Nodo: " << endl;
	cin >> ingresaDato2;

	colaenlazada.Insertar(ingresaDato2);
};

void funcEliminar(ColaEnlazada colaenlazada) {
	colaenlazada.Eliminar();
	cout << "Se ha eliminado un dato" << endl;
};

void funcDestruir(ColaEnlazada colaenlazada) {
	colaenlazada.Destruir();
	cout << "Se ha eliminado la cola" << endl;
};