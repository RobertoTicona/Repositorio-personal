//Transformar una cadena a numeros - Funcion atoi() y atof()

#include <iostream>
#include <stdlib.h>


using namespace std;

int main() {
	char cad[] = "123.456";
	float numero;
	
	numero = atof(cad);
	
	cout << numero << endl;
	
	system("pause");
	return 0;
}
