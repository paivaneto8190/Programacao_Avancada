#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main () {
	
	unsigned int semente = time(0);
	int cont_tenta = 1, num_sort, num_esc; //Contador comeca em 1
	
	srand (semente);
	num_sort = 1+rand()%100; //sorteia numero de 0 a 100
	
	cout << "Digite um numero de 0 a 100: " << endl;
	cin >> num_esc;
	
	while (num_esc != num_sort) {
		//Compara numero
		if (num_esc > num_sort) {
			cout << "O numero escolhido foi maior do que o sorteado" << endl;
		}
		else {
			cout << "O numero escolhido foi menor do que o sorteado" << endl;
		}
			
		cont_tenta++; //Adiciona uma tentativa
		cout << "Digite novamente um numero: " << endl;
		
		cin >> num_esc;
	}

	cout << "Tentativas realizadas: " << cont_tenta << endl;
	return 0;
}

