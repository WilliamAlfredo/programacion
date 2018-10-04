//codigo hecho por William Alfredo Vasquez Flores
//carnet:VF18003
#include <iostream>//libreria obligatoria
#include <cstdlib>//para dar precicion con el metodo setprecicion de un flotante

using namespace std;//se utiliza lo siguiente para evitar poner std en cada linea de codigo
	int mat[5][5];
	int mat2[5][5];
	int mat3[5][5];//declaramos una matriz
	
void llenarMat();
void imprimirMat();
void limpiar();


void llenarMat(){
		for(int fila=0; fila<5; fila++){//ciclo for
	    for (int col=0; col<5; col++){
	    	if(fila==col ||fila%2==0 && col%2==0 || fila%2==1 && col%2==1){
	    		mat3[fila][col]=0;
			}
			else{
				mat3[fila][col]=1;
			}
	}
}
	
}
void imprimirMat(){
	
	for(int fila=0; fila<5; fila++){//ciclo for
	    for (int col=0; col<5;col++){
		 cout<<mat3[fila][col]<<"\t";
	    }
	    cout<<endl;
    }
	
}
void limpiar(){
	system("cls");
}
int main() { 
	
	llenarMat();
	imprimirMat();
	//limpiar();

	
	system("pause");
	return 0;
}
