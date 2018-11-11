//programa de colas 
//programa hecho por william alfredo vasquez flores
//carnte VF18003

#include <iostream>//libreria obligatorio
#include <conio.h>//se utiliza por sus comandos los cuales seusan para dar mejor presentacion al programa
#include <string.h>//estandar del lenguaje de programacion que contiene  la definicion de macros, constantes y funciones 
#include <stdlib.h>//contiene las funciones para gestion de memoria dinamica
#include <stdio.h>//contine macros y las declaraciones de funciones
//CUERPO DEL PROGRAMA
using namespace std;

struct datos {//estructura para datos
//declaracion de variables
int dato;
datos *s;
}*p,*aux,*u;
//declaracion de funciones 
void insertar (int dat);
void borrar ();
void listar ();

int main()
{

int opc,y;
//ciclo para repetir el proceso
do
{
cout<<"\n1. Insertar dato";//pedir al usuario insertar numero
cout<<"\t2. Borrar dato";//si el usuario desea borrar un numero
cout<<"\t3. Lista de datos";//para que los numeros queden en una lista
cout<<"\t4. Salir";//si el usirio desea salir del cliclo
cout<<"\n Ingrese opcion: ";cin>>opc;
switch(opc)
{
case 1: cout<<"Ingrese dato: ";
cin>>y;
insertar(y);
cout<<"\nDato insertado!!";
break;
case 2: borrar();
break;
case 3: listar(); break;
case 4: exit(1);
default: cout<<"\n Opcion no valida!!"; break;
}
}while(opc);
}
//utilizacion de primersa funcion
void insertar (int dat)
{
aux=new(datos);
aux->dato=dat;
if(u)
{
u->s=aux;
aux->s=NULL;
u=aux;
}
else
{
p=u=aux;
}
}
void borrar()
{
if(p)
{
aux=p;
cout<<"\nElimino a " <<p->dato;
p=aux->s;
delete(aux);
}
else
{
cout<<"\n No hay datos";
}
}

void listar()
{
int i;
if(!u)
{
cout<<"\n No hay datos en la cola";
return;
}
aux=p;
while(aux)
{
cout<<"\n"<<++i<<" - "<<aux->dato;
aux=aux->s;
}
}


