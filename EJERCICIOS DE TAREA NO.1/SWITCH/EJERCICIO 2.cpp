#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
	
	 //SELECCIONA UN PROGRAMA
    int num;
    cout<< "Ingrese un numero del 1 al 7: "<<endl;
    cin>> num;
    
    switch (num){
        case 1:
        	
            int edad;
            cout<< "Ingrese su edad";
            cin>> edad;
            if (edad>=18){
                cout<< "Eres mayor de edad" <<endl;
            } else{
                cout<< "No eres mayor de edad" <<endl;
            }
            break;
            
        case 2:
        	
            int num1, num2;
            cout<< "Ingrese un numero";
            cin>>num1;
            cout<<"Ingrese un segundo numero";
            cin>>num2;
            if(num1>num2){
                cout<< "El numero " << num1 << " es mayor que el numero " << num2 <<endl;
            } else{
                cout<< "El numero "<< num2 << " es mayor que el numero" << num1 <<endl;
            }
            break;
            
        case 3:
        	
            int numero1;
            cout<< "Ingrese un numero";
            cin>> numero1;
            if(numero1%2==0 ){
                cout<< "El numero es par" <<endl;
            } else {
                cout<< "El numero es impar" <<endl;
            }
            break;
            
        case 4:
        	
            int numero2;
            cout<< "Ingrese un numero";
            cin>> numero2;
            if(numero2<0){
                cout<< "El factorial no esta definido para numero negativos" <<endl;
            } else{
                int factorial = 1;
                for(int i = 1; i<=numero2; i++){
                    factorial*=i;
                }
                cout<< "El factorial de " << numero2 << " es " << factorial <<endl;
            }
            break;
            
        case 5:
        	
            int numero3;
            cout<< "Ingrese un numero que sea mayor que 10 y menor que 30 ";
            cin>> numero3;
            if (numero3>10 && numero3<30){
                cout<< "Numeros impares desde 1 hasta " << numero3 <<endl;
                for(int i=1; i<=numero3; i++) {
                    if (i % 2 != 0) {
                        cout << i << ", ";
                    }
                }
            } else{
                cout<< "El numero no cumple con los requisitos" <<endl;
            }
            break;
            
        case 6:
        	
            int numero4;
            cout<< "Ingrese un numero que sea mayor que 10 y menor que 30";
            cin>> numero4;
            if(numero4>10 && numero4<30){
                cout<< "Numeros impares desde 1 hasta " << numero4 <<endl;
                int i=1;
                while(i<=numero4){
                    if(i%2!=0){
                        cout<< i << ", ";
                    }
                    i++;
                }
            } else{
                cout<< "El numero no cumple con los requisitos" <<endl;
            }
            break;
            
        case 7:
        	
            int numero5;
            cout << "Ingresa un número del 1 al 5: ";
            cin >> numero5;
            switch (numero5) {
                case 1:
                    cout << "Lunes" << endl;
                    break;
                case 2:
                    cout << "Martes" << endl;
                    break;
                case 3:
                    cout << "Miércoles" << endl;
                    break;
                case 4:
                    cout << "Jueves" << endl;
                    break;
                case 5:
                    cout << "Viernes" << endl;
                    break;
                default:
                    cout << "Número inválido. Debe estar entre 1 y 5." << endl;
            }
            break;
            
        default:
            cout<< "Ese programa aun no ha sido ingresado en el codigo" <<endl;
    }
    return 0;
}



//Escribir un programa en el cual el usuario pueda seleccionar cualquiera de los ejercicios anteriores para poder ejecutarlo.
