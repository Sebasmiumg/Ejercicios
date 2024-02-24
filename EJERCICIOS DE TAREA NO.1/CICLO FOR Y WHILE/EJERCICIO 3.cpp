#include <iostream>
using namespace std;

int main(){
	
	
		int num;
	cout<<"Ingrese un numero mayor que 10 y menor que 30"<<endl;
	cin>>num;
	
	//lo utilizamos para cumplir con la condicion que nos pidieron de nuestro numero
	if (num<=10 || num>=30){
		cout<<"El numero ingresado no cumple con el rango pedido"<<endl;	
	}else{
		cout<<"El numero ingresado cumple con el rango pedido"<<endl;
	}
	
	int i = 1;
	while (i<=num){
		cout<<i<<endl;
		i += 2; // Incrementamos i en   2 para obtener solo los números impares
	}
	
	return 0;
}
	

	
