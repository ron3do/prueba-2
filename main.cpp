// Ronald Chavarría Bolaños
// Randall 
// practica 3 

#include <iostream>
#include <string>
#include <limits.h>
using namespace std;

//cin.ignore(std::numeric_limits<streamsize>:max(),'\n');
#define MAX 100

/* Se crea una estructura en la cual se crean unos arrays donde se depositan los dispositivos, los tipos de dispositivos, el consumo de cada uno de los dispositivos, así como el tiempo que se encuentran operando
*/
struct componentes{ 

  string device;
  string tipo;
  float consumo;
  float tiempo;
  
}; 

/*
se le da un nombre a la estructura que se utilizara en el programa*/
struct componentes disp[MAX];

/*
Se crea un subprograma el cual se encarga de capta la informacion de los nombres de mos dispositivos, el tipo y el consumo
*/
void registrar_iot(int n){
  
  for(int i=0;i<n;i++){
    
    cout<<"Nombre del dispositivo: ";
    cin.ignore();
    getline(cin,disp[i].device);
    cout<<"Tipo: ";
    //cin.ignore();
    getline(cin,disp[i].tipo);
    cout<<"Consumo: ";
    cin>>disp[i].consumo;
    cout<<"-----------------"<<endl;

  
}

}
/*se crea un sub programa que nos permite ingresar los tiempos de lo dispositivos ya registrados previamente, desplegando el nombre del dispositivo para una mayor facilidad*/
void ing_tiempo (int m ){

  for (int j=0;j<m;j++){

    cout<<disp[j].device<<": ";
    cin>>disp[j].tiempo;
    
  }

}
/*sea crea un sub programa para que realice el calculo de los watts/hora que consumen los tipos de dispositivos
*/
void calculo_consumo(int x){
  string aux1;
  float cons=0;
  float time=0;
  float var[x];
  for (int i=0;i<x;i++){
    aux1=disp[i].tipo;
    
    for (int j=0;j<x;j++){
      if (disp[j].tipo==aux1){
        var[j]=disp[j].consumo*disp[j].tiempo;
        cons+=var[j];
        
      }

    }

  }
    cout<<cons<<endl;


    
   
}

/* se crea un subprograma que despliega en pantalla un mensaje en el cual usuario puede ver las opciones que presenta el programa, 
*/
void menu(){
  cout<<"Calculos de consumo de Dispositivos IOT"<<endl;
  cout<<"Menu de Opciones"<<endl;
  cout<<"1. Para registrar Dispositivos IOT"<<endl;
  cout<<"2. Para ingresar tiempo de funcionamiento"<<endl;
  cout<<"3. Para dezplegar los consumos de los Dispositivos IOT"<<endl;
  cout<<"4. Para Salir"<<endl;
  cout<<"-----------------"<<endl;
  
}
  
 
/*cuerpo principal del programa, donde son llamados los subprogrmamas y dependiendo de las opciones del usuario realiza estos llamados.
*/

int main() {

  int op=0;
  int cant=0;

  do {

  menu(); // llama al subprograma menu
  cout<<"Ingrese Opción: ";
  cin>>op; // recibe la opcion del usuario
  cout<<"-----------------"<<endl;
  
  /* depende la opcion del usuario se toma la desicion de que subprograma llamar
  */
  switch(op){

    case 1:

    cout<<"Digite la cantidadad de dispositivos IOT: ";
    cin>>cant;
    cout<<"-----------------"<<endl;
    registrar_iot(cant);
    cout<<"-----------------"<<endl;
    break;

    case 2:
    cout<<"Digite los consumos de los dispositivos IOT"<<endl;
    ing_tiempo(cant);
    break;

    case 3:
    cout<<"Los consumos son: "<<endl;
    calculo_consumo(cant);
    break;
  }
  }
  // si el usuario digita 4 o desea finalizar el programa 
  while(op!=4);{
    cout<<"Muchas Gracias."<<endl<<"Hasta Pronto";
  };
  

  

  


}
