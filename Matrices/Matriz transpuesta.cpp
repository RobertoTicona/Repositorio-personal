/*5. Realice un progreama que lea una matriz de 3x3 y cree su matriz transpuesta.
La matriz transpuesta es aquella en la que la columna i era la fila y i de la matriz
original */

#include <iostream>

#include <stdlib.h>

using namespace std;

int main () {
	int numeros[3][3];
	
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j ++) {
			cout << "Digite un numero ["<< i+1  << "] [" << j+1  << "]: ";
			cin >> numeros[i][j];
		}
	}
	
	cout << "La matriz original es:\n";
	for (int i = 0; i < 3; i++){
		for (int j = 0; j < 3; j++){
			cout << numeros[i][j];
		}
		cout << "\n";
	}
	
	cout << "Matriz transpuesta: \n";
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++){
			cout << numeros [j][i];
		} 
		cout << "\n";
	}
	
	system("pause");
	return 0;
}
