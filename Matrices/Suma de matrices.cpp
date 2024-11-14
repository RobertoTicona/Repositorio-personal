/*6. Realice un programa que calcule la suma de dos matrices cuadradas de
3x3*/

#include <iostream>

#include <stdlib.h>

using namespace std;

int main() {
	int m1[3][3];
	int m2[3][3];
	
	cout << "Primera matriz" << endl;
	
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << "Digite un numero [" << i+1 << "] [" << j+1 << "]: ";
			cin >> m1[i][j];
		}	
	}
	
	cout << "Segunda matriz" << endl;
	
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << "Digite un numero [" << i+1 << "] [" << j+1 << "]: ";
			cin >> m2[i][j];
		}	
	}
	
	cout << "Las matrices son: " << endl;
	
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << m1[i][j] << " ";
		}
		cout << "\n";
	}
	
	cout << endl;
	
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << m2[i][j] << " ";
		}
		cout << "\n";
	}
	
	cout << endl;
	
	cout << "Suma de matrices: " << endl;
	
	
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << m1[i][j] + m2[i][j] << " ";
		}
		cout << "\n";
	}
}
