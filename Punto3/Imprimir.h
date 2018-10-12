#include <iostream>
using namespace std;

void Imprimir(int **M, int filas, int col){
	for (int i = 0; i < filas; i++){
		for (int j = 0; j < col; j++){
			cout << M[i][j] << "  ";
		}
		cout << "\n";
	}
}
