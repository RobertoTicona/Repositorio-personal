//Invertir una cadena - Función strrev()

#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;

int main() {
	char cad[] = "reconocer";
	
	strrev(cad);
	
	cout << cad << endl;
	
	system("pause");
	return 0;
}
