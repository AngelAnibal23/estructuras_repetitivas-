/*
Ejercicio 1: 
Diseñar un algoritmo que imprima en la pantalla los primeros “n” múltiplos de 7 (positivos mayores que cero)
*/


#include <iostream>
using namespace std; 
int main(){
	
	int	n, num=7; 
	
	cout<<"Digite la cantidad de multiplos que quiere obtener: "; cin>>n; 
	for(int i=1; i<=n; i=i+1){
		
		cout<<"El multiplo ->"<< i <<" es:"<<"  "<<num*i<<endl; 
	}

	
	return 0; 
}
