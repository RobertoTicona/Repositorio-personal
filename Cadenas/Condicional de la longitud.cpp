/* 1. Hacer un programa que pida al usuario que digite una cadena
de caracteres, luego verificar la longitud de la cadena, y si esta
supera a 10 caracteres mostrarla en pantalla, caso contrario no mastrarla*/

#include <iostream>

#include <stdlib.h>

#include <string.h>

using namespace std;

int main() {
	char nombre[100];
	int longitud = 0;
	
	cout << "Digite una cadena de caracteres: " << endl;
	
	cin.getline(nombre,100,'\n');
	
	longitud = strlen(nombre);
	
	if (longitud > 10) {
		cout << nombre << endl;
	}
	else {
		cout << "Longitud de la cadena menor a 10" << endl;
	}
	
	system("pause");
	return 0;
}
