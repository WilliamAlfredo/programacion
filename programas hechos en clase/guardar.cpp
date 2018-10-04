//codigo hecho por William Alfredo Vasquez Flores
//carnet:VF18003
//fecaha en que fue creado:17 de septimebre de 2018
//calcular 5 notas utilizando arreglos
#include <cstdlib>//para dar precicion con el metodo setprecicion de un flotante
#include <iostream>//libreria obligatoria
#include <windows.h>

using namespace std;//se utiliza lo siguiente para evitar poner std en cada linea de codigo

int main() {
	
	float notas[5]; 
	float sumar=0;
	for(int i=0; i<=4; i++ ){
		do{
			system ("cls");
	        cout<<"ingrese la nota"<<i+1<<endl;
 	        cin>>notas[i];
	   }while(notas[i]<0 || notas[i]>10);
	sumar=sumar+notas[i];//acumulador
    }
        system("cls");//para limpiar la pantalla
    	for(int i=0; i<=4; i++ ){
    		cout<<"N"<<i+1<<":"<<notas[i]<<endl;
    }
    cout<<"El promedio de notas sera de :"<<sumar/5<<endl;
	system ("pause");
	return 0;
}
