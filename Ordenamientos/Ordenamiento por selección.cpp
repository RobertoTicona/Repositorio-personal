// Ordenamiento por selección

#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {
	int numeros[] = {3,2,1,5,4};
	int i, j , min, aux;
	
	for(i = 0; i < 5; i++) {
		min = i;
		for(j = i+1; j < 5; j++) {
			if(numeros[j] < numeros[min]) {
				min = j;
			}
		}
		aux = numeros[i];
		numeros[i] = numeros[min];
		numeros[min] = aux;
	}
	
	cout << "Orden ascendente: ";
	for(i = 0; i < 5; i++) {
		cout << numeros[i] << " ";
	}
	cout << endl;
	
	cout << "Orden descendente: ";
	for(i = 4; i >= 0; i--) {
		cout << numeros[i] << " ";
	}
	cout << endl;
	
	system("pause");
	return 0;
}
