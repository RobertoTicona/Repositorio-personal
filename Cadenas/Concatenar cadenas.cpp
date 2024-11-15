/* 4. Crear una cadena que tenga la siguiente frase "Hola que tal", luego
crear otra cadena para preguntarle al usuario su nombre, por ultimo añadir
el nombre al final de la primera cadena y mostra el mensaje completo
"Hola que tal (Nombre del Usuario)*/

#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;

int main() {
	char cad1[] = "Hola que tal ";
	char cad2[20];
	char cad3[40];
	
	cout << "Cual es tu nombre?" << endl;
	cin.getline(cad2,20,'\n');
	
	strcpy(cad3,cad1);
	
	strcat(cad3,cad2);
	
	cout << cad3 << endl;
	
	system("pause");
	return 0;
}
