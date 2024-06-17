/*
Ejercicio 2: 
Leer numeros por el teclado hasta ingresar uno negativo.
*/

#include <iostream>
using namespace std; 
int main(){
	
	int numero;
	char letra; 
	
	numero=0; 
	
	 cout<<"BIENVENIDO"; 
	
	while(numero>=0){
	   
		cout<<"Ingrese cualquier numero: "; cin>>numero; 
		
		if(numero==letra){
			numero=-1; 
			cout<<endl<<"El dato ingresado no es valido"; 
		}
	}
	
	return 0; 
}

