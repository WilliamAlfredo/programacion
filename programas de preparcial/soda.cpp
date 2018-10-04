//programa hecho por :William Alfredo Vasquez Flores
//carnet:VF18003
//fecha de creacion: 23 de septiembre del 2018
//este programa es pra saber los insumos necesarios para la produccion de sodas y jugos en una empresa
#include <iostream>//libreria obligatoria
#include <windows.h>//para reproducir sonido

using namespace std;

void produccion(int bebidas){//creamos la funcion produccion mediante vod para que la funcion no retorne nada solo hara los calculos 
//establecidos detro de la funcon y en main imprimiremos el resultado
	int produccion;//declaramos la variable produccion donde se almacenaran los datos que el usuario ingrese
	int agua;//aqui se almacenaran las operaciones que se haran entre el valor proporcionado por el usuario y 
	//la cantidad de mililitros de agua en cada unudad
	int azucar;//aqui se almacenaran las operaciones que se haran entre el valor proporcionado por el usuario y
	//y la cantidad de azucar que se usa para cada unidad
	
	if (bebidas == 1)
	{
		cout << "ingrese la cantidad de soda aproducir:"<<endl;
		cin >> produccion;
		agua = produccion * 500;
		azucar = produccion * 800;
	}
	else if(bebidas == 2)
	{
		cout << "ingrese la cantidad de jugo a producir:" <<endl;
		cin >> produccion;
		agua = produccion * 600;
		azucar = produccion * 700;
	}
	cout << "el total de agua a usar sera de :"<<agua<<"ml"<<endl;//imprimir los resultados de la opreracion 
	cout << "el total de agua a usar sera de :"<<azucar<<"g"<<endl;//y que seran los resultados de la funcion mostrada
	
	//return produccion;
}

int main() {

    int bebidas;
    cout << "escoja la bebida de la cual desea saber los productos necesitados:"<<endl;//le decimos al usuarioque seleccione que decea calcular
    cout << "1.soda "<<endl;//entre soda y jugo el usuario elije que desea saber para la elaboracion
    cout << "2. jugo"<<endl;
    cin >> bebidas;//aqui almacenamos la opcionque elija el usuario
    
    Beep(888,200);//ejecutamos un sonido
    

    system ("cls");
    produccion(bebidas);
    Beep(888,200);

    return 0;
}
