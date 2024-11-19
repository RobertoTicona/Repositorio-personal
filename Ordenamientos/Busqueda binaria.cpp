// Busqueda binaria

#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {
	int numeros[] = {1,2,3,4,5};
	
	int inf, sup, mitad, dato;
	
	char band = 'F';
	
	dato = 4;
	
	// Algoritmo de la busqueda binaria
	
	inf = 0;
	sup = 5;
	int contador = 0;
	
	while((inf <= sup)) {
		mitad = (inf + sup)/2;
		contador++;
		if(numeros[mitad] == dato) {
			band = 'V';
			break;
		}
		if(numeros[mitad]>dato){
			sup = mitad;
			mitad = (inf + sup)/2;
		}
		if(numeros[mitad]<dato){
			inf = mitad;
			mitad = (inf + sup)/2;
		}
	}
	if(band == 'V') {
		cout << "El numero a sido encontrado en la posicion: " << mitad << endl;
		cout << "Numero de iteraciones: " << contador << endl;
	} else {
		cout << "El numero no se encuentra en la lista" << endl;
	}
	cout << endl;
	
	system("pause");
	return 0;
}
