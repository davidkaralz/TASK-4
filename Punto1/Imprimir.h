#include <iostream>
using namespace std;


void Imprimir(int cantidad, int *conjunto){
	cout << "El conjunto ingresado fue: [";
	for (int i = 0; i < cantidad; i++){
		cout << conjunto[i];
		if (i < (cantidad - 1)){
			cout << ", ";
		}
	}
	cout << "]\n";
}