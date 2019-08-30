#include <iostream>
#include<conio.h>
using namespace std; 

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct lugar{
	char domicilio[20];
	int calle;
	char pais[20];
	
}; 
struct autoo{
	char modelo [20];
	int dia;
	float precio;
	struct lugar lu;
};


int main(int argc, char** argv){
	struct autoo A1[5];
	struct autoo *apuntador;
	apuntador=&A1[0];
	
	for (int i=0;i<1;i++){
		cout<<"Modelo: ";
		cin.getline(A1[i].modelo,20,'\n');
		cout<<"Dia: ";
		cin>>A1[i].dia;
		cout<<"Precio: ";
		cin>>A1[i].precio;
		cout<<"Domicilio: ";
		fflush(stdin);
		cin.getline(A1[i].lu.domicilio,20,'\n');
		
	}
	//mostrar o gardado 
	cout<<endl<<"Modelo guardado: "<<apuntador->modelo;
	cout<<endl<<"Año guardado: "<<A1[0].dia;
	cout<<endl<<"Precio guardado: "<<A1[0].precio;
	cout<<endl<<"Domicilio guardado: "<<A1[0].lu.domicilio;
	
	
	
	getch();
	return 0;
}
