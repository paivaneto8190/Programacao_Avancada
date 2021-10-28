/*Faça um programa para receber do usuário a dimensão e os elementos de um vetor
e efetuar a sua ordenação utilizando o método da bolha. Neste método de ordenação,
percorre-se o vetor comparando cada elemento com o seguinte: se eles estiverem
na ordem errada, os elementos são permutados. O vetor é percorrido tantas
vezes quantas necessárias até que não seja necessário mudar nenhum elemento.*/

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

