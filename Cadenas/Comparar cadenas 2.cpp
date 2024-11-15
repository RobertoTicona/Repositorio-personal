/* 3. Pedir al usuario que digite 2 cadenas de caracteres, e indicar si ambas cadenas son
iguales, en caso de no serlo, indicar cual es mayor alfabeticamente */

#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;

int main() {
	
	char cadena1[30];
	char cadena2[30];
	
	cout << "Digite la primer cadena de caracteres: ";
	cin.getline(cadena1,30,'\n');
	cout << "Digite la segunda cadena de caracteres: ";
	cin.getline(cadena2,30,'\n');
	
	if (strcmp(cadena1,cadena2) == 0) {
		cout << "Ambas cadenas son iguales" << endl;
	}
	else if (strcmp(cadena1,cadena2) > 0) {
		cout << cadena1 << " es mayor alfabeticamente" << endl;
	} else {
		cout << cadena2 << " es mayor alfabeticamente" << endl;
	}
	system("pause");
	
	return 0;
}
