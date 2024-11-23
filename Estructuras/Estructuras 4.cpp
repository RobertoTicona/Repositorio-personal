/*4. Hacer un arreglo de estructura llamada atleta para n atletas que 
contenga los siguientes campor: nombre, pais, numero_medalas y devuelva
los datos(nombre,pais) del atleta que ha ganado el mayor número de
medallas*/

#include <iostream>
#include <stdlib.h>

using namespace std;

struct atleta{
	char nombre[20];
	char pais[20];
	int n_medallas;
}atletas[1000000];

int main() {
	int n, mmedallas = 0, mayor = 0;
	cout << "Digite cuantos atletas se registraran: " << endl;
	cin >> n;
	
	for(int i = 0; i < n; i++) {
		fflush(stdin);
		cout << i + 1 << " Nombre: ";
		cin.getline(atletas[i].nombre,20,'\n');
		cout << i + 1 << " Pais: ";
		cin.getline(atletas[i].pais,20,'\n');
		cout << i + 1 << " Numero de medallas: ";
		cin >> atletas[i].n_medallas;
		cout << endl;
		
		if(atletas[i].n_medallas > mayor) {
			mayor = atletas[i].n_medallas;
			mayor = i;
		}
	}
	
	cout << "\n\nDatos del atleta con mas medallas: " << endl;
	cout << "Nombre: " << atletas[mayor].nombre << endl;
	cout << "Pais: " << atletas[mayor].pais << endl;
	system("pause");
	return 0;
}
