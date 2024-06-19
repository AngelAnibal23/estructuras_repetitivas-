/*
Ejercicio: 5
Un profesor necesita un programa que solicite las notas de N estudiantes del curso ha dictado en la universidad.
El programa consultará si desea continuar
ingresando notas, y mostrará al final la cantidad de aprobados y desaprobados y el promedio del salón
*/
#include<iostream>
using namespace std; 
int main(){
	
	int ni, sn, ca, cd, nota; 
	char opc; 
	double prom, na; 
	
	sn=0;  
	ni=0; 
	ca=0; 
	cd=0; 
	 
	
		cout<<"Digite la nota aprobatoria: ";  cin>>na; 

	do{
	
		cout<<"\nDigite la nota del estudiante: "; cin>>nota; 
		
		if(nota>na){
			ca=ca+1; 
		}
		else{
			cd=cd+1; 
		}
		
		sn=sn+nota; 
		ni= ni+1; 
		
		cout<<"\nDesea continuar ingresando notas?  (Si:'s' y No: 'n') : ";  cin>>opc; 
		
	}while(opc=='s' || opc=='S');
	
	if(ni>0){
		prom=sn/ni;
	}
	else{
		prom=0; 
	}
	
	cout<<"\nLa cantidad de estudiantes aprobados es: "<<ca<<endl; 
	cout<<"\nLa cantidad de estudiantes desaprobados es: "<<cd<<endl; 
	cout<<"\nEl promedio de notas de el salon es: "<<prom<<endl; 
	
	return 0; 
}
