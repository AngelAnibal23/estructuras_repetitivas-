/*
Ejercicio 7:
Diseñar un algoritmo que permita leer “n” números por el teclado. El programa debe
calcular el promedio de los números pares y el promedio de los números impares.
*/
#include <iostream>
using namespace std;
int main(){
    
         int n, numero, sp, si, i, cp, ci;
         float pi, pp;
         
         i=0; sp=0;  si=0;  ci=0; cp=0;
         
        cout<<"Ingrese la cantidad de numeros que va a digitar: ";
        cin>>n; 
        
        while(i<n){
            cout<<"Ingrese un numero: ";
            cin>>numero;
            
            if(numero%2==0){ 
            sp=sp+numero;   
            cp++;
            }
            else{
            si=si+numero;
            ci++;
            }
            i++;
        }
        
       if(ci>0){
           pi=si/ci;
           }
       else{
            pi=0;
        }
         if(cp>0){
             pp=sp/cp;
    	}  
    	else{
             pp=0; 
        }
              
        cout<<"\nPromedio pares: "<<pp<<endl;
        cout<<"\nPromedio impares: "<<pi<<endl;
              
              
       return 0; 
 }


