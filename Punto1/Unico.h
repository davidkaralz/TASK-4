#include <iostream>
using namespace std;

int repetido_antes = 0;
int repetido_despues = 0;

void Unico(int cantidad, int *conjunto){

	cout << "Los elementos unicos son: {";

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
			
			if ((i < cantidad)&&(i>0)){
				cout << ", ";
			}
			cout << conjunto[i];
		}
		repetido_despues = 0;
		repetido_antes = 0;
	}
	cout << "} \n";
}