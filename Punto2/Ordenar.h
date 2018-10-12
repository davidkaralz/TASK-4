#include <iostream>
using namespace std;

int cambio = 1, temp;

void Ordenar(int cantidad, int *conjunto){
	while (cambio != 0){
		cambio = 0;
		for (int i = 0; i < cantidad - 1; i++){
			if (conjunto[i] > conjunto[i + 1]){
				temp = conjunto[i];
				conjunto[i] = conjunto[i + 1];
				conjunto[i + 1] = temp;
				cambio++;
			}
		}	
	}
}