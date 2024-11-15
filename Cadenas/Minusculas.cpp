//Pasar una palabra a minusculas - Función strlwr()

#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;

int main() {
	char palabra[] = "PROGRAMACIONATS";
	
	strlwr(palabra);
	
	cout << palabra << endl;
	
	system("pause");
	
	return 0;
}
