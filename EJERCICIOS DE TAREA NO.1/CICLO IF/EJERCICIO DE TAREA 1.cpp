#include <iostream>
using namespace std;

int main(){
	
	int edad;
	
	cout<<"Ingrese su edad"<<endl;
	cin>>edad;
	
	if(edad>=18){
		cout<<"Tu eres mayor de edad"<<endl;
	}else if(edad<18){
		cout<<"Tu eres menor de edad"<<endl;
	}
	return 0;
}
