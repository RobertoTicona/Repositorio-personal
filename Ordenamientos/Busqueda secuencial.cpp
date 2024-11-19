// Busqueda secuencial

#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {
	int a[] = {3,4,2,1,5};
	int i, dato;
	char band = 'F';
	
	dato = 10;
	
	//Busqueda secuencial
	i = 0;
	while((band == 'F') && (i < 5)) {
		if(a[i] == dato) {
			band = 'V';
		}
		i++;
	}
	
	if(band == 'F') {
		cout << "El numero no existe en el arreglo" << endl;
	} else if (band = 'V') {
		cout << "El numero a sido encontrado en la posicion: " << i - 1 << endl;
	}
	cout << endl;
	system("pause");
	return 0;
}
