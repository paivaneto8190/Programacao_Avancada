// Qual o erro no trecho de programa a seguir?

#include <iostream>

using namespace std;

int main () {
 int x, *p;
 x = 10;
 *p = x; //Resposta: Atribuiu valor ao ponteiro, sem inicia-lo antes, podendo colocar o valor x em um lugar de memoria importante
 cout << *p;
 
	return 0;
}

