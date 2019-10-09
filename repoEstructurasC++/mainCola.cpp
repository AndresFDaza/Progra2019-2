#include <iostream>
#include "Cola.h"
using namespace std;

int main() {

	int option = 0;
	Cola nuevaCola;
	int tama�oCola = 0;
	int ingresaDato;


	do {

		cout << "============ MENU DE COLA ============" << endl;
		cout << "1. Crear cola" << endl;
		cout << "2. Probar cola" << endl;
		cout << "3. Ver cola" << endl;
		cout << "4. Insertar a la cola" << endl;
		cout << "5. Eliminar de la cola" << endl;
		cout << "6. Destru�r cola" << endl;

		cout << "999.Finalizar programa" << endl;
		cout << "=========================================" << endl;

		cout << "Su opcion: ";
		cin >> option;
		system("cls");

		switch (option)
		{
		case 1:
			if (nuevaCola.Probar())
			{
				cout << "\n\n ------> Solo puede crear una cola por elemento <------\n\n" << endl;
			}
			else
			{
				cout << "\n Ingrese el tama�o de la cola: ";
				cin >> tama�oCola;
				nuevaCola.Crear(tama�oCola);
			}
			break;
		case 2:
			if (nuevaCola.Probar())
				cout << "\n Ya existe una cola\n" << endl;
			else
				cout << "\n Aun no existe una cola\n" << endl;
			break;
		case 3:
			if (nuevaCola.Probar())
			{
				cout << "\n Este es el elemento visible de la cola creada: " << nuevaCola.Ver() << endl << endl;
			}
			else
				cout << "\n No se ve ninguna cola\n" << endl;
			break;
		case 4:
			if (nuevaCola.Probar())
			{
				cout << " Ingrese el dato a la cola: ";
				cin >> ingresaDato;
				nuevaCola.Insertar(ingresaDato);
			}
			else
				cout << "\n No hay donde insertar el dato\n" << endl;
			break;
		case 5:
			if (nuevaCola.Probar()) {
				nuevaCola.Eliminar();
				cout << "\n Se intent� eliminar el dato de la cola\n" << endl;
			}
			else {
				cout << "\n No hay de d�nde eliminar \n" << endl;
			}
			break;
		case 6:
			if (nuevaCola.Probar()) {
				nuevaCola.Destruir();
				cout << "\nLa cola ha sido destru�da\n" << endl;
			}
			else
				cout << "\n No hay una cola que destru�r \n" << endl;
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