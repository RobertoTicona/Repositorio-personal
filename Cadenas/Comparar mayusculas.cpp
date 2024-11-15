/*6. Convertir dos cadenas de minusculas a MAYUSCULAS. Compararlas, y decir
si son iuales o no.*/

#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;

int main() {
	char palabra1[20];
	char palabra2[20];
	cout << "Digite la primera palabra: "; cin.getline(palabra1,20,'\n');
	cout << "Digite la segunda palabra: "; cin.getline(palabra2,20,'\n');
	
	strupr(palabra1);
	strupr(palabra2);
	
	
	if (strcmp(palabra1,palabra2) == 0) {
		cout << "Son iguales" << endl;
	} else {
		cout << "No son iguales" << endl;
	}
	system("pause");
	return 0;
}
