/* 7. Pedir su nombre al usuario en MAYUSCULA, si su nombre
comienza por la letra A, convertir su nombre a minusculas, caso
contrario no convertirlo. */

#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;

int main() {
	char nombre[20];
	cout << "Digite su nombre en MAYUSCULAS: "; cin.getline(nombre,20,'\n');
	
	if (nombre[0] == 'A') {
		strlwr(nombre);
		cout << "Nombre en minusculas: " << nombre << endl;
	} else {
		cout << "Nombre sin cambios: " << nombre << endl;
	}
	system("pause");
	return 0;
}
