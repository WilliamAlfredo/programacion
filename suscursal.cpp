//hecho por William Alfredo Vasquez Flores
//el programa esta hecho para saber los datos de un empleado y calcular los descuentos de su salario
#include <iostream>//libreria estandar
#include <cstdlib>//contiene funciones para la gestion de memoria dinamica 


using namespace std;//permite  abrebiar el cidigo
struct Empleado{//estructura empleado
     //declaracion de variables
	char cod[5];
	char nombre[50];
	int edad;
	float salbase;
	float salliquido;
	float isss;
	float afp;
	float renta;
	float totalprestamo;
	char departamento[60];
	char puesto[60];
};
struct Sucursales{//estructura de sucursal
     //declaracion de variables
	int numsucursal;
	char nombresucursal[60];
	
};
float calisss(float sal,float tope)//funcion para calcular el isss
//declaracion de variable
{float isss=0;
	if(sal>=1000)
	isss=30;
	else
	isss=sal*0.03;
return isss;//retorna la variable isss
}
float calafp(float salario, float afp)//funcion para calcular afp
{
	afp=salario*0.0725;
	return afp;//retorna variable afp
}
float calrenta(float sal)//funcion para calcular la renta
{
	float renta;//declracion de variables
	
	/*la renta se calcula mediente una table proporcinado por el ministerio de hacienda
	la cual se presenta a continuacion.
	a los que ganan de        a                         aplicar
	$0.01--------------------$472.00---------------------sin renta
	$472.01------------------$895.24---------------------10% sobre lo que sobrepasa de $472.00 mas cuota fija de $17.67
	$895.25------------------$2038.10--------------------20% sobre lo que sobrepasa de $895.24 mas cuota fija de $60.00
	$2038.11-----------------mas-------------------------30% sobre lo que sobrepasa de $2038.10 mas cuota fija de $253.37*/
    if (sal >=0.01 && sal <=472.00){
    	cout << "no se aplica renta" << endl;
	}
	else if (sal >=472.01 && sal <=895.24){
		renta = ((sal - 472.00) * 0.1)+17.67;
	}
	else if (sal >=895.25 && sal <=2038.10){
		renta = ((sal - 895.24) * 0.2)+60;
	}
	else if(sal >= 2038.11){
		renta = ((sal - 2038.10) * 0.2)+253.37;
	}
	
	return renta;//retornara la vavriable renta
}

float calliq(float sal, float isss, float afp, float renta){//funcion para calcular el salario liquido
	
	float salliqui;//declaracion de variables
	
	salliqui=sal-(isss+afp+renta);
	
	return salliqui;//retornar a variable salario liquido
}
//cuerpo principal
int main() {
	//declaracion de variables
	int n;
	cout << "cuantos empleados tiene?"<<endl;
	cin>>n;
	Empleado e[n];
	Sucursales s;
	int cp;
	int contador;
	for(int i=0; i<n;i++)
	{
		cout << "cod:"<<endl;
		cin>>e[i].cod;
		cout << "nombre:"<<endl;
		cin>>e[i].nombre;
		cout << "edad:"<<endl;
		cin>>e[i].edad;
		cout << "salbase:"<<endl;
		cin>>e[i].salbase;
		e[i].isss=calisss(e[i].salbase,1000);
		e[i].afp=calafp(e[i].salbase,7.25);
		e[i].renta=calrenta(e[i].salbase);
		e[i].salliquido=calliq(e[i].salbase, e[i].isss, e[i].afp, e[i].renta);
		//afp
		//renta
		
		cout<<"cantidada de prestamos del empleado:"<<endl;
		cin>>cp;
		if(cp<5){
		contador=0;//contador
		float totpres=0;//acumulador
		float pres;
		while(contador<cp)
		{
			cout<<"monto a descontar:"<<endl;
			cin>>pres;
			if(e[i].salbase*0.2>(e[i].salbase-totpres))
			{
			
			totpres=totpres+pres;
			
		    }
		    contador++;
		}
		}
		else{
			cout <<"No se puede realizar el prestamo"<<endl;
			system ("pause");
		}
	}
	
	system ("cls");
	for (int i=0; i<n; i++)
	{
		cout << "cod:" <<e[i].cod<< endl;
		cout << "nombre:" <<e[i].nombre<< endl;
		cout << "edad: " <<e[i].edad<< endl;
		cout << "salario base: " <<e[i].salbase<< endl;
		cout << "isss: " <<e[i].isss<< endl;
		cout << "afp: " <<e[i].afp<< endl;
		cout << "renta: " <<e[i].renta<< endl;
		cout << "salario liquido: " << e[i].salliquido << endl;
	}
	system("PAUSE");
}
