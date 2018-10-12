#include <iostream>
#include <string>
using namespace std;

string Codificar(string frase,int desp, int largo){
	char letra;	
	for (int i = 0; i < largo; i++){
		if (frase[i]==' '){
			cout << frase[i];
		}
		if ((frase[i]<=90) && (frase[i]>=65)){
			if (frase[i] + desp>90){
				letra = frase[i] + desp - 26;
				frase[i] = letra;
				cout << letra;
			}
			else
			{
				letra = frase[i] + desp;
				frase[i] = letra;
				cout << letra;
			}
		}
	}
	cout << "\n";
	return frase;
}