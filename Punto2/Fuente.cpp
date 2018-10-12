#include <iostream>
#include "Lectura.h"
#include "Imprimir.h"
#include "Histograma.h"
#include "Ordenar.h"
using namespace std;

int main() {
	int cantidad;
	cout << "Cuantos elementos tiene el conjunto?\n";
	cin >> cantidad;
	int *conjunto = new int[cantidad];
	cout << "\n";
	Lectura(cantidad, conjunto);
	Imprimir(cantidad, conjunto);
	Ordenar(cantidad, conjunto);
	Histograma(cantidad, conjunto);
	delete conjunto;
	system("pause");
	return 0;
}