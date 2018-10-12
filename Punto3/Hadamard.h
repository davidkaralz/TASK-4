#include <iostream>
using namespace std;

void Hadamard(int **Ma, int **Mb, int **Mc, int filas, int col){

	cout << "\nEl producto Hadamard entre estas matrices es: \n";
	for (int i = 0; i < filas; i++){
		for (int j = 0; j < col; j++){
			Mc[i][j] = Ma[i][j] * Mb[i][j];
		}
	}
}