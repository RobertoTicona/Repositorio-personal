/*Pedir al usuario 2 cadenas de caracteres de numeros, uno entero y el otro real,
convertirlos a sus respectivos valores y por ultimo sumarlos */

#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {
	char cad1[8];
	char cad2[8];
	
	cout << "Digite un numero entero: "; cin.getline(cad1,8,'\n');
	cout << "Digite un numero flotante: "; cin.getline(cad2,8,'\n');
	
	float resultado;
	int entero;
	float flotante;
	
	entero = atoi(cad1);
	flotante = atof(cad2);
	
	resultado = entero + flotante;
	
	cout << "El resultado es: " << resultado << endl;
	
	system("pause");
	return 0;
}
