/*
Ejercicio 4:
Se necesita un programa que solicite los N gastos realizados en un viaje. El programa consultará si 
desea continuar ingresando gastos, y mostrara al final la suma de los N gastos. 
*/

#include <iostream>
using namespace std; 
int main(){
	
	int sg, gasto; 
	char opc; 
	
	sg=0; 
	
	do{
		cout<<"Ingrese el gasto: "; cin>>gasto; 
		
		sg=sg+gasto; 
		
		cout<<"Desea seguir ingresando gastos? (Si: 's'  y   No: 'n'): "; cin>>opc; 
		
	}while(opc =='s' || opc == 'S');
	
	cout<<"\nEl gasto total es: "<<sg; 
	
	return 0; 
}

