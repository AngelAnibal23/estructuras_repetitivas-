/*
Ejercicio: 5
Un profesor necesita un programa que solicite las notas de N estudiantes del curso ha dictado en la universidad.
El programa consultará si desea continuar
ingresando notas, y mostrará al final la cantidad de aprobados y desaprobados y el promedio del salón
*/
#include<iostream>
using namespace std; 

int promediosalon(float x, float y){
	int promefunc; 
	
	if(y>0){
		promefunc=x/y; 
	}
	else{
		promefunc=0; 
	}
	
	return promefunc; 
}


int main(){
	
	int    ni, sn, ca, cd, nota; 
	char   opc; 
	double na, promedio; 
	
	sn=0;  
	ni=0; 
	ca=0; 
	cd=0; 
	 
	
		cout<<"Digite la nota aprobatoria: ";  cin>>na; 
		
		if(na<0){
			cout<<endl<<"La nota no puede ser negativa. "; 
			return 1; 
		}

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
	
	
	promedio = promediosalon(sn,ni); 
	
	cout<<"\nLa cantidad de estudiantes aprobados es: "<<ca<<endl; 
	cout<<"\nLa cantidad de estudiantes desaprobados es: "<<cd<<endl; 
	cout<<"\nEl promedio de notas de el salon es: "<<promedio<<endl; 
	
	return 0; 
}
