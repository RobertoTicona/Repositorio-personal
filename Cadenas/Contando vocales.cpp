/*9. Realice un progrma que lea una cadena de caracteres de la entrada est�ndar y
muestre en la salida est�ndar cu�ntas ocurrencias de cada vocal existen en la
cadena.*/

#include<iostream>
#include<stdlib.h>
#include<string.h>

using namespace std;

int main() {
	char frase[30];
	int vocal_a=0,vocal_e=0,vocal_i=0,vocal_o=0,vocal_u=0;
	
	cout << "Digite una frese: ";
	cin.getline(frase,30,'\n');
	
	for(int i = 0; i < 30; i++) {
		switch(frase[i]){
			case 'a': vocal_a++; break;
			case 'e': vocal_e++; break;
			case 'i': vocal_i++; break;
			case 'o': vocal_o++; break;
			case 'u': vocal_u++; break;		
		}
	}
	
	cout << "Vocal a: " << vocal_a << endl;
	cout << "Vocal e: " << vocal_e << endl;
	cout << "Vocal i: " << vocal_i << endl;
	cout << "Vocal o: " << vocal_o << endl;
	cout << "Vocal u: " << vocal_u << endl;
	system("pause");
	return 0;
}
