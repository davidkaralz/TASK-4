#include <iostream>
#include "Lectura.h"
#include "Imprimir.h"
#include "Hadamard.h"
using namespace std;
int filas,columnas,i;

int main() {
	
	cout << "Ingrese el numero de filas\n";
	cin >> filas;
	cout << "Ingrese el numero de columnas\n";
	cin >> columnas;
	int **M1 = new int*[columnas];
	for (i = 0; i < columnas; i++) {
		M1[i] = new int[filas];
	}
	int **M2 = new int*[columnas];
	for (i = 0; i < columnas; i++) {
		M2[i] = new int[filas];
	}
	int **M3 = new int*[columnas];
	for (int i = 0; i < columnas; i++) {
		M3[i] = new int[filas];
	}
	cout << "Ingrese la primera matriz de " << filas << "x" << columnas << " (por filas)\n";
	Lectura(M1,filas,columnas);
	cout << "Ingrese la segunda matriz de " << filas << "x" << columnas << " (por filas)\n";
	Lectura(M2, filas, columnas);
	system("cls");
	cout << "La primera matriz fue: \n";
	Imprimir(M1, filas, columnas);
	cout << "\nLa segunda matriz fue: \n";
	Imprimir(M2, filas, columnas);
	Hadamard(M1, M2, M3, filas, columnas);
	cout << "\nEl resultado Hadamard es: \n";
	Imprimir(M3, filas, columnas);



	system("pause");
	return 0;
}


