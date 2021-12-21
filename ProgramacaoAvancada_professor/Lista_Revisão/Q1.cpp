#include <iostream>

using namespace std;

int main () {
    float valores, soma = 0;
    int cont = 0;

    cout << "Entre com os valores positivos ou nulos: \n";
    cin >> valores;

    while (valores >= 0) {
    	cont++;
        soma += valores;
        cin >> valores;
    }

    soma /= cont;
    cout << "Media: " << soma;

    return 0;
}