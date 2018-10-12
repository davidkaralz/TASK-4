#include <iostream>
#include "Lectura.h"
#include "Imprimir.h"
#include "Unico.h"
using namespace std;


int main() {
	int cantidad;
	cout << "Cuantos elementos tiene el conjunto?\n";
	cin >> cantidad;
	int *conjunto = new int[cantidad];
	cout << "\n";
	Lectura(cantidad, conjunto);
	Imprimir(cantidad, conjunto);
	Unico(cantidad, conjunto);
	delete conjunto;
	system("pause");
	return 0;
}