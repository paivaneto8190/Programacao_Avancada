/*Fazer uma fun��o que receba 3 n�meros como par�metros, A, B e C, e os ordene
de tal forma que, ao final da fun��o, A contenha o menor n�mero e C o maior. Em
seguida, fazer um programa que receba 3 n�meros do usu�rio, chame a fun��o e
mostre os n�meros ordenados.*/

#include <iostream>

using namespace std;

int main () {
	int num[3] = {}, i, j, aux;
	
	cout << "Entre com 3 numeros: " << endl;
	
	for (i = 0; i < 3; i++) {
		cin >> num[i];
	}
	
	for (i = 0; i < 3; i++) { //Bubblesort
		for (j = 0; j < i; j++) {
			if (num[j] > num[i]) {
				aux = num[i];
				num[i] = num[j];
				num[j] = aux;
			}
		}
	}
	
	for(i = 0; i < 3; i++) {
		cout << num[i] << "  ";
	}
	return 0;
}

