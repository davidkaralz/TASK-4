#include <iostream>
#include "Temporizador.h"
using namespace std;

int Contador[3];

int main() {
	int Contador[3];
	cout << "Ingrese el valor inicial de horas:\n";
	cin >> Contador[0];
	cout << "Ingrese el valor inicial de minutos:\n";
	cin >> Contador[1]; 
	cout << "Ingrese el valor inicial de segundos:\n";
	cin >> Contador[2];
	system("pause");
	Temporizador(Contador);

	

	system("pause");
	return 0;
}