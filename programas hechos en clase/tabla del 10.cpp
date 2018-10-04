//codigo hecho por William Alfredo Vasquez Flores
//carnet:VF18003
#include <iostream>//libreria obligatoria
#include <windows.h>
using namespace std;//se utiliza lo siguiente para evitar poner std en cada linea de codigo

int main(int argc, char** argv) 
{
	for(int x=1; x<=10; x++){
		cout<<"TABLA DEL "<<x<<endl;

	  for(int i=1; i<=9; i++){
		cout <<i<<"x"<< x<<"="<<i*10<<endl;
	}
}
	
	system ("pause");
	return 0;
}
