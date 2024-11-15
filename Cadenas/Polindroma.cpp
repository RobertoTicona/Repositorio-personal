// 5. Hacer un programa que determine si una palabra es políndroma

#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;

int main() {
	char cad1[30];
	char cad2[30];

	
	cout << "Digite una palabra: "; cin.getline(cad1,30,'\n');
	
	strcpy(cad2,cad1);

	strrev(cad2);
	
	if (strcmp(cad1, cad2) == 0) {
		cout << "La palabra es polindroma" << endl;
	} else {
		cout << "La palabra no es polindroma" << endl;
	}
	
	system("pause");
	
	return 0;
}
