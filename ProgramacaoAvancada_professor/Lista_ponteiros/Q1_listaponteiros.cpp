//Qual o resultado impresso após a execução do trecho de programa a seguir?


#include <iostream>

using namespace std;

int main () {
 int i, j, *p;
 i = 4;
 j = 7;
 p = &j;
 *p = 9; //Resposta: Imprime o valor 9 e a mesma coisa de fazer j = 9
 cout << i << " " << j << " " << *p;
	return 0;
}

