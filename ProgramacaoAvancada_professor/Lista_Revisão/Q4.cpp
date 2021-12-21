#include <iostream>
using namespace std;
int main()
{
int x, y, p, a;
cout << "Informe dois numeros:";
cin >> x;
cin >> y;
p = 0;
a = y;
while(a > 0){
p += x;
a--;
}
cout << "\nResultado: " << p << endl;

return 0;
}
