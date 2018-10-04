//programa hecho por: William Alfredo Vasquez Flores
//VF18003
//fecha que se creo: 23de septiembre de 2018
//este codigo sirve para saber el total a pagar en una llamada 
#include <iostream>//libreria obligatoria
#include <windows.h> //para reproducir sonid0

using namespace std;

float costos(float min){//funcion usada 
	float costo;//desclaracion de una variable
	do //
	{
		cout<<"ingrese los minutos hablados"<<endl;//decimos al usuario que ingrese los minutos hablados
		cin>>min;
	}while(min<=0);
	
	if (min >0 && min<=10){//primera condicion de llamada
		
		cout<<"Total a pagar: $0.05";//total a pagar
		
	}
	else if(min >10 && min <15){//segunda condicion a cumplir si no se cumple la primera
		
		cout<<"Total a pagar : $0.08";//total a pagar si no se cumple la primera condicion
		
	}
	else if(min > 15){//tercera y ultima condicion a cumplir
		
		cout<<"Total a pagar sera de : $0.10";//total a pagar en la ultima condicion
		
		
	}
	return costo;//que retorne la funcion costo
}

int main() {
	
	float min;//dec;aramos la variable min que significa minutos
	costos (min);
	cout<<endl;//aparecera en al pantalla el total apagar
	Beep(888,200);
	system ("pause");//para que aparesca el resultado en pantalla

	return 0;//le regresamos el control al main
}
