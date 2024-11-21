#include <bits/stdc++.h>
#include <iostream>
#include <fstream>
#include <string>
#include <stdlib.h>
#include <chrono> // Para medir el tiempo
#include <iomanip> // Para configurar precisión en los decimales

using namespace std;

// Función de Jump Search
int jumpSearch(int arr[], int x, int n) {
    int paso = sqrt(n);
    int prev = 0;

    while (arr[min(paso, n) - 1] < x) {
        prev = paso;
        paso += sqrt(n);
        if (prev >= n)
            return -1;
    }
    while (arr[prev] < x) {
        prev++;
        if (prev == min(paso, n))
            return -1;
    }
    if (arr[prev] == x)
        return prev;

    return -1;
}

int main() {
    ifstream archivo;
    string frase;
    int num[300000];
    int contador = 0;

    // Abrir archivo
    archivo.open("numeros_ordenados.txt", ios::in);
    if (archivo.fail()) {
        cout << "Error al leer el archivo" << endl;
        return 1;
    }

    // Leer archivo y guardar los números
    while (getline(archivo, frase)) {
        num[contador] = stoi(frase);
        contador++;
    }
    archivo.close();
    cout << "Datos guardados: " << contador << " numeros leidos" << endl;

    // Variables para rastrear el tiempo más corto y más largo
    double tiempo_min = DBL_MAX;
    double tiempo_max = DBL_MIN;
    int num_rapido = -1, num_lento = -1;

    // Recorrer todos los elementos del arreglo
    for (int i = 0; i < contador; i++) {
        // Medir tiempo para cada búsqueda
        auto start_time = chrono::high_resolution_clock::now();
        jumpSearch(num, num[i], contador);
        auto end_time = chrono::high_resolution_clock::now();

        chrono::duration<double> execution_time = end_time - start_time;

        // Verificar si es el tiempo mínimo
        if (execution_time.count() < tiempo_min) {
            tiempo_min = execution_time.count();
            num_rapido = num[i];
        }

        // Verificar si es el tiempo máximo
        if (execution_time.count() > tiempo_max) {
            tiempo_max = execution_time.count();
            num_lento = num[i];
        }
    }

    // Mostrar resultados
    cout << fixed << setprecision(10);
    cout << "\nEl numero que se busca mas rapido es: " << num_rapido
         << " con un tiempo de " << tiempo_min << " segundos." << endl;
    cout << "El numero que se busca mas lento es: " << num_lento
         << " con un tiempo de " << tiempo_max << " segundos." << endl;

    system("pause");
    return 0;
}

