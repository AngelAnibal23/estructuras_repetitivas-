/*
Ejercicio 4:
Se necesita un programa que solicite los N gastos realizados en un viaje. El programa consultará si 
desea continuar ingresando gastos, y mostrara al final la suma de los N gastos. 
*/

#include <iostream>
using namespace std; 
int main(){
	
	int sumatoria_gastos, gasto; 
	char opcion; 
	
	sumatoria_gastos=0; 
	
	do{
		cout<<"Ingrese el gasto: "; cin>>gasto; 
		
		sumatoria_gastos=sumatoria_gastos+gasto; 
		
		cout<<"Desea seguir ingresando gastos? (Si: 's'  y   No: 'n'): "; cin>>opcion; 
		
	}while(opcion =='s' || opcion == 'S');
	
	cout<<"\nEl gasto total es: "<<sumatoria_gastos; 
	
	return 0; 
}

