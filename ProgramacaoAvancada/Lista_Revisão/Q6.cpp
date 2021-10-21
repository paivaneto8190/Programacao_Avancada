/*Faça um programa que, dado um valor em reais (sem centavos), mostre a menor
combinação existente de notas (R$ 100, 50, 20, 10, 5 e 2) para esse valor.*/

//NAO ESTA TOTALMENTE OTIMIZADO

#include <iostream>

using namespace std;

int main () {
	
	int real, cont_100 = 0, cont_50 = 0, cont_20 = 0, cont_10 = 0, cont_5 = 0, cont_2 = 0;
	
	cout << "Digite um valor em reais: " << endl;
	cin >> real;
	
	//Calcula a combinacao de notas
	cont_100 = real / 100;
	cont_50 = (real % 100) / 50;
	cont_20 = (real % 50) / 20;
	cont_10 = (real % 20) / 10;
	cont_5 = (real % 10) / 5;
	cont_2 = (real % 5) / 2;
	
	
	cout << "Seu troco: " << cont_100 << " de 100, " << cont_50 << " de 50, " << cont_20 << " de 20, " << cont_10 << " de 10, " << cont_5 << " de 5, " << cont_2 << " de 2." << endl;
	return 0;
}

