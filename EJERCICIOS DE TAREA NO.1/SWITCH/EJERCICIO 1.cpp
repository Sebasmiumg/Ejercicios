#include <iostream>
using namespace std;

int main(){
	
	int a,b,c,d,e;
	int dias;
	
	cout<<"Ingrese un numero del 1 al 5 "<<endl;
	cin>>dias;
	
	switch(dias){
		case 1:
			cout<<"Lunes"<<endl;
			cin>>a;
			break;
			
			case 2:
				cout<<"Martes"<<endl;
			cin>>b;
			break;
			
				case 3:
					cout<<"Miercoles"<<endl;
			           cin>>c;
				break;
				
					case 4:
						cout<<"Jueves"<<endl;
			              cin>>d;
	               	break;
		
						case 5:
							cout<<"Viernes"<<endl;
		                    	cin>>e;
	}
	
	if (dias>=5 || dias==0){
		
		cout<<"El numero ingresado no cumple lo requerido \n";
	}
	
	return 0;
}

/*Escribir un programa que pida al usuario un número del 1 al 5 
y muestre por pantalla el nombre del día de la semana correspondiente utilizando una estructura switch.
*/
