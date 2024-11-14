/*7. Desarrollar un programa que determine si una matriz es simétrica o no. Una
matriz es simétrica si es cuadrada y si es igual a su matriz transpuesta*/

#include <iostream>

#include <stdlib.h>

using namespace std;

int main() {
	int numeros[100][100], filas, columnas;
	char band = 'F';
	
	cout << "Digite el numero de filas: "; cin >> filas;
	cout << "Digite el numero de columnas: "; cin >> columnas;
	
	for (int i = 0; i < filas; i++) {
		for (int j = 0; j < columnas; j++) {
			cout << "Digite un numero [" << i+1 << "] [" << j+1 << "] : ";
			cin >> numeros[i][j];
 		}
	}
	
	if (filas == columnas) {
		for (int i = 0; i < filas; i++) {
			for (int j = 0; j < columnas; j++) {
				if(numeros[i][j] == numeros [j][i]) {
					band = 'V';
				}
			}
		}
	}
	
	if(band == 'V') {
		cout << "La matriz es simetrica";
	}
	else {
		cout << "La matriz no es simetrica";
	}
	cout << endl;
	system("pause");
	return 0;
}
