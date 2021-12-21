/*Fazer um programa que receba do usuário uma quantidade N de números a ser
digitada. Em seguida, o programa deve solicitar N números do usuário. No final, o
programa exibe o máximo, o mínimo e a média dos valores digitados e quantos valores
estão acima da média.*/

#include <iostream>

using namespace std;

float media (float *pNotas, int N) {
	float media = 0;
	
	for (int i = 0; i < N; i++) {
		media += pNotas[i];
	}
	
	media /= N;
	
	return media;
}

void ordena (float *notas, int N) {
	int i, j, cont_notas = 0;
	float aux;
	
	for (i = 0; i < N; i++) { //Bubblesort
		for (j = 0; j < i; j++) {
			if (notas[j] > notas[i]) {
				aux = notas[i];
				notas[i] = notas[j];
				notas[j] = aux;
			}
		}
	}
	
	//Conta as notas acima da media
	for (i = 0; i < N; i++) {
		if (notas[i] > media(notas, N)) {
			cont_notas++;
		}
	}
	
	cout << "Notas acima da media: " << cont_notas;
	cout << "\nMenor nota: " << notas[0] << "\nMaior nota: " << notas[N-1];
}

int main () {
	
	int N, i = 0; // O i controla a entrada das notas
	float mediaf = 0;
	
	cout << "Digite a quantidade de notas: \n";
	cin >> N; 
	
	float notas[N], *pNotas; //vetor com a qtd de notas
	
	pNotas = notas; //Aponta para o endereco do primeiro elemento do vetor notas

	while (i < N) {
		cin >> *(pNotas + i);
		i++;
	}
	
	mediaf = media(notas, N);
	cout << "Media: " << mediaf << endl;
	ordena(notas, N);
	
	return 0;
}
