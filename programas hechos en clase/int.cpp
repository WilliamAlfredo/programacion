//codigo hecho por William Alfredo Vasquez Flores
//carnet:VF18003
#include <iostream>//libreria obligatoria
#include "conio.h" 
#include <windows.h>//

using namespace std;//se utiliza lo siguiente para evitar poner std en cada linea de codigo


int main(int argc, char** argv) {
	
	for (int i=1; i<13; i++){
		cout<<"tabla del "<<i<<endl;
		
		for(int j = 1; j < 13; j++){
			cout << i << " * " << j << " = " << i*j <<endl;
		
		}
	}
	system ("PAUSE");

	_getch();
	return 0;//le retornosmos el control al main
}
