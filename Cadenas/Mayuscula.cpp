//Pasar una palabra a MAYUSCULA - Funci�n strupr()

#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;

int main() {
	char palabra[] = "Alejandro";
	
	strupr(palabra);
	
	cout << palabra << endl;
	system("pause");
	return 0;
}
