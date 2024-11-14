//Cadenas de caracteres

#include<iostream>

#include<stdlib.h>

#include<string.h>

using namespace std;

int main() {
	char palabra[] ="Alejandro";
	char palabra2[] = {'A','l','e','j','a','n','d','r','o'};
	char nombre[30];
	
	cout << "Digite su nombre: ";
	cin.getline(nombre,20,'\n');
	
	cout << nombre << endl;
	
	cout << palabra << endl;
	cout << palabra2 << endl;
	 
	system("pause");
	return 0;
}
