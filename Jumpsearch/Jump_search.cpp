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

// Función para contar repeticiones
int repeticiones(int arr[], int n, int index, int x) {
    int count = 1;

    // Contar hacia atrás
    int i = index - 1;
    while (i >= 0 && arr[i] == x) {
        count++;
        i--;
    }

    // Contar hacia adelante
    int j = index + 1;
    while (j < n && arr[j] == x) {
        count++;
        j++;
    }

    return count;
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

    // Solicitar número a buscar
    int x;
    cout << "Digite el numero a buscar: ";
    cin >> x;

    // Repetir el algoritmo para amplificar el tiempo de ejecución
    const int REPETICIONES = 100000; // Número de repeticiones
    auto start_time = chrono::high_resolution_clock::now();

    int indice = -1;
    for (int i = 0; i < REPETICIONES; ++i) {
        indice = jumpSearch(num, x, contador);
    }

    auto end_time = chrono::high_resolution_clock::now();

    // Calcular tiempo de ejecución total y promedio
    chrono::duration<double> total_time = end_time - start_time;
    double tiempo_promedio = total_time.count() / REPETICIONES;

    int ocurrencias = 0;
    if (indice != -1) {
        ocurrencias = repeticiones(num, contador, indice, x);
    }

    // Mostrar resultados
    if (indice != -1) {
        cout << "\nEl numero " << x << " esta en el indice " << indice;
        cout << " y se repite " << ocurrencias << " veces en la lista." << endl;
    } else {
        cout << "\nEl numero " << x << " no se encuentra en la lista." << endl;
    }

    // Mostrar tiempo total y promedio
    cout << fixed << setprecision(10); // Mostrar 10 decimales
    cout << "Tiempo total de ejecucion para " << REPETICIONES << " repeticiones: "
         << total_time.count() << " segundos" << endl;
    cout << "Tiempo promedio por ejecucion: " << tiempo_promedio << " segundos" << endl;

    system("pause");
    return 0;
}

