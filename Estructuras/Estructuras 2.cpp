/* Hacer una estructura llamada alumno, en la cual
se tendrán los siguientes campos: nombre, edad, promedio,
pedir datos al usuario para 3 alumnos, comprobar cuál de los 3 tiene
el mejor promedio y posteriormente imprimir los
datos del alumno */

#include <iostream>

using namespace std;

struct alumno{
	char nombre[20];
	int edad;
	int promedio;
}alumnos[3];

int main() {
	for(int i = 0; i < 3; i++) {
		fflush(stdin);
		cout << "Nombre del alumno " << i + 1 << ": " << endl;
		cin.getline(alumnos[i].nombre,20,'\n');
		cout << "Edad del alumno " << i + 1<< ": " << endl;
		cin >> alumnos[i].edad;
		cout << "Promedio del alumno " << i + 1 << ": " << endl;
		cin >> alumnos[i].promedio;
	}
	
	int maxIndex = 0;
	for(int i = 1; i < 3; i++){
		if(alumnos[i].promedio > alumnos[maxIndex].promedio){
			maxIndex = i;
		}
	}
	
	cout << "\nAlumno con mayor promedio: " << endl;
	cout << "Nombre: " << alumnos[maxIndex].nombre << endl;
	cout << "Edad: " << alumnos[maxIndex].edad << endl;
	cout << "Promedio: " << alumnos[maxIndex].promedio << endl;
	return 0;
}
