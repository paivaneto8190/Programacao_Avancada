#include <iostream>

using namespace std;

int main () {
	char caractere;
	float num1, num2, res;
	
	cout << "Digite os números para a operacao: " << endl;
	cin >> num1 >> num2;
	
	cout << "Digite a operacao: " << endl;
	cin >> caractere;
	
	while (caractere == '+' || caractere == '-' || caractere == '*' || caractere == '/') {
		switch (caractere) {
			case '+' :
				res = num1 + num2;
				cout << "Resposta: " << res << endl;
			break;
			case '-' :
				res = num1 - num2;
				cout << "Resposta: " << res << endl;
			break;
			case '*' :
				res = num1 * num2;
				cout << "Resposta: " << res << endl;
			break;
			case '/' :
				res = num1 / num2;
				cout << "Resposta: " << res << endl;
			break;
			default :
				cout << "Operacao invalida" << endl;
		}
		cout << "Digite a operacao: " << endl;
		cin >> caractere;
	}
	return 0;
}

