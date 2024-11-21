/* Leer el archivo, ordenarlo, guardar en un nuevo archivo*/

#include <iostream>
#include <fstream>
#include <string>
#include <stdlib.h>

using namespace std;

// Función de ordenamiento Quicksort - particion

int partition(int arr[], int low, int high) {
	int pivot = arr[high];
	int i = low - 1;
	for(int j = low; j < high; j++) {
		if(arr[j] < pivot) {
			i++;
			swap(arr[i],arr[j]);
		}
	}
	swap(arr[i+1],arr[high]);
	return i + 1;
}

void Quicksort(int arr[], int low, int high) {
	if (low < high) {
		int pi = partition(arr,low,high);
		Quicksort(arr,low,pi-1);
		Quicksort(arr,pi+1,high);
	}
}

// Leer archivo

int main() {
	ifstream archivo;
	string frase; // cadena para almacenar los numeros
	int num[300000];
	int contador = 0;
    
    archivo.open("numeros_aleatorios.txt", ios::in);
    if(archivo.fail()) {
    	cout << "Error al leer el archivo" << endl;
    	return 1;
	}
	
	while(getline(archivo, frase)) {
			num[contador] = stoi(frase);
			contador++;
	}
	archivo.close();

    cout << "Datos guardados: " << contador << " numeros leidos." << endl;
	
	// Datos ordenados
	
	Quicksort(num, 0, contador - 1);
	
	cout << "Numeros ordenados: " << endl;
	for(int i = 0; i < contador; i++) {
		cout << num[i] << endl;
	}
	cout << endl;
	
	// Guardar los números ordenados en un nuevo archivo
	
	ofstream archivo_salida("numeros_ordenados.txt");
	if (archivo_salida.fail()) {
		cout << "Error al crear el archivo de salida" << endl;
		return 1;
	}
	
	for(int i = 0; i < contador; i++) {
		archivo_salida << num[i] << endl;
	}
	archivo_salida.close();
	
	cout << "Numeros ordenados guardados en 'numeros_ordenados.txt" << endl;
	system("pause");
	return 0;
}
