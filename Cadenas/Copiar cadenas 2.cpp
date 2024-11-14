/* 2. Pedir al usuario una cadena de caracteres,
almacenarla en un arreglo y copiar todo su contenido
hacia otro arreglo de caracteres*/

#include <iostream>

#include <stdlib.h>

#include <string.h>

using namespace std;

int main() {
	
	char cadena[30];
	
	cout << "Digite una cadena de texto: " ;
	cin.getline(cadena,20,'\n');
	
	cout << cadena << endl;
	
	char cadena2[30];
	
	strcpy(cadena2, cadena);
	
	cout << cadena2 << endl;
	
	system("pause");
	return 0;
}
