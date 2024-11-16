// Lectura txt y media

#include <iostream>
#include <fstream>

using namespace std;

int main() {
	ifstream archivo("datosada.txt");
	if(!archivo){
		cout << "No se pudo abrir el archivo";
		return 1;
	}
	
	double numero, suma = 0;
	int contador = 0;
	
	while(archivo >> numero) {
		suma += numero;
		contador++;
	}
	
	archivo.close();
	
	if(contador == 0) {
		cout << "El archivo esta vacio o no contiene datos validos" << endl;
	} else {
		double media = suma / contador;
		cout << "La media de los datos es " << media << endl;
	}
	
	system("pause");
	return 0;
}
