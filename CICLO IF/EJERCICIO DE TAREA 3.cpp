#include <iostream>
using namespace std;

int main(){
	
	int num;
	
	cout<<"Ingrese un numero: ";
	cin>>num;
	
	if(num%2 == 0){
		cout<<"El numero ingresado es Par"<<endl;
	}else{
		cout<<"El numero ingresado es Impar"<<endl;
	}
	
	return 0;
}
