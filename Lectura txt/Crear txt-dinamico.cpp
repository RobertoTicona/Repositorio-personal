// Crear archivo de manera dinamica

#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <string>

using namespace std;

int main() {
	ofstream archivo;
	string nombre_archivo, frase;
	char rpt;
	
	cout << "Ingrese un nombre para el archivo.txt: ";
	getline(cin,nombre_archivo);
	
	archivo.open(nombre_archivo.c_str(),ios::out);
	
	if(archivo.fail()) {
		cout << "Error al crear el archivo";
		return 1;
	}
	
	do{
		fflush(stdin);
		cout << "Ingresa un mensaje: ";
		getline(cin,frase);
		archivo << frase << endl;
		
		cout << "Desea ingresar mas frases?(s/n): ";
		cin >> rpt;
	} while ((rpt == 's')||(rpt == 'S'));
	archivo.close();
	
	system("pause");
	return 0;
}
