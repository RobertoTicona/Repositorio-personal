// Leer archivo y sacar la media

#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <string>
#include <sstream>

using namespace std;

int main () {
	ifstream archivo;
	string frase;
	double numeros, suma = 0;
	int contador;
	
	archivo.open("H://Estudios angel//Ingeniería Estadística e Informatica//repo//numeros.txt",ios::in);
	
	if(archivo.fail()) {
		cout << "Error al abrir el archivo";
		return 1;
	}
	
	while (getline(archivo,frase)) {
		cout << frase << endl;
		
		istringstream num(frase);
		while(num >> numeros){
			suma += numeros;
			contador++;
		}
	}
	
	archivo.close();
	
	if(contador > 0) {
		cout << "El promedio es: " << suma / contador << endl;
	}
	else {
		cout << "No hay numeros";
	}
	system("pause");
	return 0;
}
