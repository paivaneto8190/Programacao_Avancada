/*Fazer uma função que recebe um dia, um mês e um ano como parâmetros e retorna
o número de dias desde o início daquele ano. Para o dia 1º de janeiro de qualquer
ano, a função deve retornar 1. Para o dia 31 de dezembro, ela deve retornar
365 ou 366, dependendo de o ano ser ou não bissexto. Um ano é bissexto quando
é múltiplo de 400 ou também quando é múltiplo de 4 e não múltiplo de 100.*/

#include <iostream>

using namespace std;

//Funcao para saber ano bissexto
bool bissexto (int ano) {
	if ((ano % 4 == 0) && (ano % 100 != 0)) {
		return 1;
	}
	else if (ano % 400 == 0){
		return 1;
	}
	else {
		return 0;
	}
}

int main () {
	
	int ano, mes, dia, i;
	
	cout << "Digite um dia, um mes e um ano, respectivamente: ";
	cin >> dia >> mes >> ano;
	
	//verifica o caso do ultimo mes
	if (bissexto (ano)) {
		if (mes == 12 && dia == 31)
			dia = 366 ;
	}
	else {
		for (i = 1; i < mes; i++) {
			if (i <= 7) { //apos o mes 7, a condicao se inverte
				if ((i % 2 != 0)) {
					dia += 31;
				}
				else {
					dia	+= 30;
				}
			}
			else {
				if ((i % 2 == 0)) {
					dia += 31;
				}
				else {
					dia	+= 30;
				}
			}
		}
	}

	cout << "Dias desde o comeco do ano: " << dia << endl;
	return 0;
}

