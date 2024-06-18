/*
Ejercicio 8:
Elaborar un programa que lea “n” números (positivos mayores que cero) e indique el
mayor número ingresado.
*/
#include <iostream>
using namespace std; 
int main(){
	
	int numero, i, n, mayor; 
	
	i=0;
	mayor=0;
	
	cout<<"Ingrese la cantidad de numeros: "; cin>>n; 
	
	while(i<n){
		
		cout<<"Ingrese un numero: "; cin>>numero;
		
		if(numero<=-1){
			cout<<"Solo puede ingresar numeros positivos."<<endl; 
			i=n; 
		}
		else if(numero>mayor){
		
		mayor=numero; 
		
		i=i+1;
		}
		
	}
	
	cout<<"El numero mayor de todos los ingresados es: "<<mayor<<endl; 
	
	
	return 0; 
}

