#include <iostream>
using namespace std;

int main(){
	
	int num;
	cout<<"Ingrese un numero mayor que 10 y menor que 30"<<endl;
	cin>>num;
	
	//lo utilizamos para cumplir con la condicion que nos pidieron de nuestro numero
	if (num<=10 || num>=30){
		cout<<"El numero ingresado no cumple con el rango pedido"<<endl;	
	}else {
		cout<<"El numero ingresado cumple con el rango pedido. "<<endl;
	}
	
	//se utiliza el ciclo for para imprimir los numeros impares hasta el numero ingresado.
	 for (int i = 1; i <= num; i += 2){
	 	cout<<i<<endl;
	 }
	
	
	return 0;
}

/*Escribir un programa que pida al usuario un n�mero mayor a 10 y menor que 30,  
y que muestre por pantalla todos los n�meros impares desde 1 hasta ese n�mero utilizando un bucle for.
*/
