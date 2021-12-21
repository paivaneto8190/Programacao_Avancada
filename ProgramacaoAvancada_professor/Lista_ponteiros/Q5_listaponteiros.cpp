/*Fa�a um programa para receber do usu�rio a dimens�o e os elementos de um vetor
e efetuar a sua ordena��o utilizando o m�todo da bolha. Neste m�todo de ordena��o,
percorre-se o vetor comparando cada elemento com o seguinte: se eles estiverem
na ordem errada, os elementos s�o permutados. O vetor � percorrido tantas
vezes quantas necess�rias at� que n�o seja necess�rio mudar nenhum elemento.*/

#include <iostream>

using namespace std;

void ordena (float *elemento, int N) { // usa o bubble sort para organizar elementos de um vetor
	int i, j;
	float aux;
	
	for (i = 0; i < N; i++) { //Bubblesort
		for (j = 0; j < i; j++) {
			if (elemento[j] > elemento[i]) {
				aux = elemento[i];
				elemento[i] = elemento[j];
				elemento[j] = aux;
			}
		}
	}
	
	for (i = 0; i < N; i++) { //Imprime vetor ordenado
		cout << elemento[i] <<	" ";
	}
	cout << endl;
}

int main () {
	
	int i, tam; // Tamanho do vetor tam
	cout << "Digite o numero de elementos: \n";
	cin >> tam;
	
	float vetor_ord[tam] = {};
	
	cout << "Digite os elementos do vetor: \n";
	for (i = 0; i < tam; i++) {
		cin >> vetor_ord[i];
	}
	
	ordena (vetor_ord, tam);

	return 0;
}

