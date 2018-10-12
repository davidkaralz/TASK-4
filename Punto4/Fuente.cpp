#include <iostream>
#include <string>
#include "Codificar.h"
#include "Decodificar.h"

using namespace std;
int desplazamiento;
int largo = 0;
string frase;

int main() {
	
	cout << "introduzca una frase en mayuscula\n";
	getline(cin, frase);
	for (char c : frase){
		largo++;
	}
	cout << "\nCuantos caracteres se desplazara el codigo?\n";
	cin >> desplazamiento;
	while (desplazamiento > 25){
		desplazamiento -= 25;
	}
	cout << "\nEl mensaje codificado es: \n";
	frase=Codificar(frase, desplazamiento, largo);
	cout << "\nEl mensaje decodificado es: \n";
	Decodificar(frase, desplazamiento, largo);
	system("pause");
	return 0;
}


