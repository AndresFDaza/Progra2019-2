#pragma once

class Cola {

private:

	int P, U, M;
	bool I, V;
	int* arr;


public:

	// Constructor
	Cola();

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

	int getM();
	void setM(int);

	bool getI();
	void setI(bool);

	bool getV();
	void setV(bool);

	// Aún no se declara en el archivo encabezado
	//int getArr();
	//void setArr(int[]);

};