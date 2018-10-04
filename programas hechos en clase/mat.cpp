//programa hecho por: William Alfredo Vasquez Flores
//carnet:VF18003
#include <iostream>//libreria obligatoria
#include <stdlib.h>

using namespace std;//se utiliza lo siguiente para evitar poner std en cada linea de codigo

int main(int argc, char** argv) {
		int a[5][2] = {{0,0},
	              {1,2},
	              {2,4}};
				  
	    for(int i = 0; i < 5; ++i)
		{
			for (int j = 0; j < 2; ++j)
			{
				cout<<"a["<<i<<"]["<<j<<"]";
				cout<<a[i][j]<<endl;
			}
		}             
	
	
	return 0;
}
