/*
Ejercicio 11:
Diseña un algoritmo que reciba un número entero positivo y calcule su factorial. El
factorial de un número, representado como n!, es el producto de todos los números
positivos menores o iguales a n. Por ejemplo: 5! = 5 × 4 × 3 × 2 × 1 = 120.
*/
#include <iostream>
using namespace std; 
int main(){
	
	int n, i, factorial;  
	
	cout<<"Ingrese un numero: "; cin>>n; 
	
	factorial=1; 
	
	if(n<0){
		cout<<"Debe ingresar solo numeros positivos."<<endl; 
	}
	else{
	for(i=1; i<=n; i=i+1){
		
		factorial=factorial*i; 
	}
	}
														
	cout<<"El factorial del numero que ingreso es: "<<factorial; 
		
	return 0; 
}
