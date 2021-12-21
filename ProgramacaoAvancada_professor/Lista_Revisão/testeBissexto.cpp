#include <iostream>

using namespace std;

int main () {
	int ano, i = 0;
	
	cin >> ano;
	
	while (i == 0) {
	if ((ano % 4 == 0) && (ano % 100 != 0)) {
		cout << "bissexto" << endl;
	}
	else if (ano % 400 == 0){
		cout << "bissexto" << endl;
	}
	else {
		cout << "nao bissexto" << endl;
	}
	cin >> ano;
	
}

	return 0;
}

