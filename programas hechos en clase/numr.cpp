//codigo hecho por William Alfredo Vasquez Flores
//carnet:VF18003
#include <iostream>//libreria obligatoria
#include <conio.h>

using namespace std;//se utiliza lo siguiente para evitar poner std en cada linea de codigo

int main() {
	int fil, col;
	int matriz[30][30];
	//int matriz2[30][30];
	cout<<"ingrese el numero de filas:";cin>>fil;
	cout<<"ingrese el nuemro de columnas:";cin>>col;
	
	int matriz2[fil][col];
	
	for(int i=0; i<fil; i++){
		
		for(int j=0; j<col; j++){
			
			cout<<"ingrese dato["<<i<<"]["<<j<<"]:"; cin >> matriz[i][j];
		}
		
	}
	
	for(int i=0; i<fil; i++){
		
		for(int j=0; j<col; j++){
			
			cout<< matriz[i][j]<<" ";
		}
		cout<<"\n";
	}
	
	for(int i=0; i<fil; i++){
		
		for(int j=0; j<col; j++){
			
			matriz2[i][j]= matriz[i][j];
		}
	
	}
	cout<<"\nmatriz 2\n";
	    
	
	for(int i=0; i<fil; i++){
		
		for(int j=0; j<col; j++){
			
			cout<< matriz2[i][j]<<" ";
		}
		cout<<"\n";
	}
	
	
	

	return 0;
	getch();
}
