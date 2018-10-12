#include <iostream>
#include <iomanip>
#include <Windows.h>
using namespace std;

void Temporizador(int *Contador){
	for (int k = Contador[0]; k >= 0; k--){
		for (int j = Contador[1]; j >= 0; j--){
			for (int i = Contador[2]; i >= 0; i--){
				Sleep(1);
				system("cls");
				cout << "Tiempo restante:\n";
				cout << setfill('0') << setw(2) << k << ":" << setfill('0') << setw(2) << j << ":" << setfill('0') << setw(2) << i << endl;
			}
			Contador[2] = 59;
		}
		Contador[1] = 59;
	}
}