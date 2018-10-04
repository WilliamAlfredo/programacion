//codigo hecho por William Alfredo Vasquez Flores
//carnet:VF18003
#include <iostream>//libreria obligatoria
#include <iomanip>
using namespace std;//se utiliza lo siguiente para evitar poner std en cada linea de codigo

int main() {
	float ventas;
	
	do {
		cout<<"introduzca el total de ventas";
		cin>>ventas;
	}
	while(ventas <=0);
	
	return 0;
}
