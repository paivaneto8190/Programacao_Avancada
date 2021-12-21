#include <iostream>

using namespace std;

int main () {
	int N = 2;
int* arr;
arr = new int[N];

for (int i=0; i<N; i++){
 arr[i] = i+1;
 cout << arr[i];
}
// Operacoes com o array
arr = NULL;
for (int i = 0; i < N; i++) {
cout << arr[i];	
}
delete[] arr;
arr = NULL;

return 0;}

