#include <iostream>
using namespace std;

int repetido_antes = 0;
int repetido_despues = 0;

void Histograma(int cantidad, int *conjunto){
	cout << "\nEl histograma es:\n";
	for (int i = 0; i < cantidad; i++){
		for (int j = i+1; j < cantidad; j++){
			if (conjunto[i] == conjunto[j]){
				repetido_despues++;
			}
		}
		for (int j = i-1; j >=0; j--){
			if (conjunto[i] == conjunto[j]){
				repetido_antes++;
			}
		}
		if ((repetido_despues>=0)&&(repetido_antes==0)){
			cout << conjunto[i];
			for (int k = 0; k <= repetido_despues; k++){
				cout << " * ";
			}
			cout << "\n";
		}
		repetido_despues = 0;
		repetido_antes = 0;
	}
}