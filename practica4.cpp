#include<iostream>
#include<stdio.h>
#include<string.h>

using namespace std;

struct suscripcion{
    char nombre[20];
    int tiempo;
    char nombreR[20];
};

int main(){
    struct suscripcion Pe[10];
    struct suscripcion *apuntador;
    int opcion;
    apuntador=Pe;
    do{
    
    int a;
    char eliminar[20];
    
    for(int i=0; i<10; i++){
        Pe[i].nombre[0]='n';
    cout<<"MENU"<<endl;
	cout<<"1. Ingresar datos"<<endl;
	cout<<"2. Eliminar datos"<<endl;
	cout<<"3. Mostrar datos"<<endl;
	cout<<"4. Salir"<<endl;
    cin>>opcion;
    
    switch (opcion){
        case 1:
            for(int i=0;i<10; i++){
                if(Pe[i].nombre[0]='n'){
                    cout<<"Nombre de la persona: "; fflush(stdin);cin.getline(Pe[i].nombre,20,'\n');
                    cout<<"Tiempo de suscripcion: "; cin>>Pe[i].tiempo;
                    cout<<"Nombre de la revista: "; fflush(stdin); cin.getline(Pe[i].nombreR,20,'\n');
                    cout<<'\n';
                    break;
                    }else
                    cout<<"El "<<i+1<<" espacio esta ocupado"<<endl;
        }break;
        case 2:
            cout<<"Nombre de la persona a eliminar: ";
			fflush(stdin);
			cin.getline(eliminar,20,'\n');
            for(int i=0; i<10; i++){
            	a=strcmp(apuntador->nombre,eliminar);
            	if (a!=0)
            		apuntador++;
            	else{
					Pe[i].nombre[0]='n';
                    cout<<"Persona eliminada "<<endl;
				}
			}
            break;

        case 3:
        	for(int i=0; i<'n'; i++){
        			cout<<"Mostrar datos "<<endl;
       				cout<<"Nombre de la persona : "<<apuntador->nombre<<endl;
        			cout<<"Tiempo de suscripcion: "<<apuntador->tiempo<<endl;
        			cout<<"Nombre de la revista: "<<apuntador->nombreR<<endl;
        		}
				break;
        default:
            cout<<"Opcion invalida "<<endl;
        break;

    }

    }
 } while (opcion != 4); 
	

	return 0;
}
