//Qual o resultado impresso ap�s a execu��o do trecho de programa a seguir?


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

