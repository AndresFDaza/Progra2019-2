#include<iostream>
#include"ListaDobleEnlzCirc.h"
using namespace std;


int main() {


	int option = 0;
	ListaDobleEnlzCirc nuevaLDEC;
	int ingresaDato = 0;
	int ingresaDato2 = 0;


	do {

		cout << "============ MENU DE Lista Doblemente Enlazada Circular ============" << endl;
		cout << "1. Crear Lista DEC" << endl;
		cout << "2. Probar Lista DEC" << endl;
		cout << "3. Ver Lista DEC" << endl;
		cout << "4. Insertar a la Lista DEC" << endl;
		cout << "5. Eliminar de la Lista DEC " << endl;
		cout << "6. Destruír la lista DEC" << endl;

		cout << "999.Finalizar programa" << endl;
		cout << "=========================================" << endl;

		cout << "Su opcion: ";
		cin >> option;
		system("cls");

		switch (option)
		{
		case 1:
			cout << "Ingrese el valor del Nodo inicial: " << endl;
			cin >> ingresaDato;
			nuevaLDEC.Crear(ingresaDato);
			break;
		case 2:
			if (nuevaLDEC.Probar()) {
				cout << "La lista ya existe" << endl;
			}
			else {
				cout << "La lista NO existe" << endl;
			}
			break;
		case 3:
			nuevaLDEC.Ver();
			break;
		case 4:
			cout << "Ingrese el valor del Nodo: " << endl;
			cin >> ingresaDato2;
			cout << "Ingrese la posicion del Nodo: " << endl;
			cin >> ingresaDato;
			nuevaLDEC.Insertar(ingresaDato, ingresaDato2);
			break;
		case 5:
			cout << "Ingrese la posicion del dato que desea eliminar" << endl;
			cin >> ingresaDato;
			nuevaLDEC.Eliminar(ingresaDato);
			break;
		case 6:
			nuevaLDEC.Destruir();
			cout << "Se ha intentado destruir la lista" << endl;
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