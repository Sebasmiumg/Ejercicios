#include <iostream>
using namespace std;

int main(){
	
	int a;
	cout<<"Ingrese un numero: ";
	cin>>a;
	
	int fac = 1;
	
	int contador = a;
	while (contador > 0){
		fac *= contador;
		contador--;
	}
	
	cout<<"El factorial es: " <<fac<<endl;

	return 0;
}

//Escribir un programa que pida al usuario un número y calcule su factorial utilizando un bucle while.
