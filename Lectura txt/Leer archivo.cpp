// Leer un archivo txt

#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <string>

using namespace std;

int main() {
	ifstream archivo;
	string frase;
	
	archivo.open("Ejemplo.txt",ios::in);
	
	if(archivo.fail()) {
		cout << "Error al leer el archivo";
		return 1;
	}
	
	while(getline(archivo, frase)){
		cout << frase << endl;
	}
	
	archivo.close();
	
	system("pause");
	return 0;
}
