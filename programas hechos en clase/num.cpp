//codigo hecho por William Alfredo Vasquez Flores
//carnet:VF18003
#include <iostream>//libreria obligatoria
#include <windows.h>
#include <windows.h>
using namespace std;//se utiliza lo siguiente para evitar poner std en cada linea de codigo
void l();//declaracion de la funcion no retorna/no recibe parametros
int sumar(int a, int aux); 
int pedirNumSumar;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int n=1;//contador
	int vn;//sumarvalor de 1 a 4
	int suma = 0;//acumulador
	int aux;//intercambio de valores temporales
	vn=pedirNumSumar;
	do{
	  l();//llamada de la funcuion
	cout<<"cuantso nuemros desea sumar [2-4];";
	cin>>vn;
}while(vn <2 ||vn>4);
	while(n<=vn){
		l();
		cout<< "ingrese el numero"<<n<<endl;
		cin>>aux;//333
		suma=sumar(suma,aux);//3 6
		n++;//2 3
	}
	l();
	cout<<"la suma de los numeros es:"<<suma<<endl;
	system ("pause");
	l();
	cout<<"desarrollado por:brandon"<<endl;
	cout<<"UNIVERSIDAD DE EL SALVADOR"<<endl;
	cout<<"VERSION<SUMAR(1,)"<<endl;
	system ("pause");
	//return 0;
}
void l () {//implementacion de la funcion
	system ("cls");
	cout<< "---------------------------------------------------"<<endl;
	cout<< "---------------------------------------------------"<<endl;
}
int sumar(int a, int aux){
	
	return a+aux;
}

