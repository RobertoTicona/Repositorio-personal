// Crear txt

#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <string>

using namespace std;

int main() {
	ofstream archivo;
	
	archivo.open("numeros.txt", ios::out); // crear el archivo o abrirlo
	
	if(archivo.fail()) {
		cout << "Error al crear el archivo";
		return 1;
	}
	
	archivo << "Hola que tal guapisimos";
	
	archivo.close();
	system("pause");
	return 0;
}
