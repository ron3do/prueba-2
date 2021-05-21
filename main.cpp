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
struct componentes disp [MAX];

/*
Se crea un subprograma el cual se encarga de capta la informacion de los nombres de mos dispositivos, el tipo y el consumo
*/
void registrar_iot(int n){
  
  for(int i=0;i<n;i++){
    
    cout<<"Nombre del dispositivo: ";
    cin.ignore();
    getline(cin,disp[i].device);
    cout<<"Tipo: ";
    cin.ignore();
    getline(cin,disp[i].tipo);
    cout<<"Consumo: ";
    cin>>disp[i].consumo;
  
  
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
void calculo_consumo(int o){

  string disp1;
  string disp2;
  string disp3;
  string disp4;
  float consumo=0; 
  float tiempo=0;
  float calc=0;
  float calc1=0;
  float c1=0;
  float t1=0;
  
  disp1=disp[0].tipo;
  //consumo=disp[0].consumo;
  //tiempo=disp[0].tiempo;
  for (int p=0;p<o;p++){
    disp2=disp[p].tipo;
    if (disp1==disp2){
      for(int q=0;q<o;q++){
      calc1=disp[q].consumo*disp[q].tiempo;
      calc+=calc1;
      }
    }
    
    //else if(disp1!=disp2){

    //}
  }
  cout<<disp1<<": "<< calc<<endl;
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
  cout<<"Ingrese Opción"<<endl;
}
  
 
/*cuerpo principal del programa, donde son llamados los subprogrmamas y dependiendo de las opciones del usuario realiza estos llamados.
*/

int main() {

  int op=0;
  int cant=0;

  do {

  menu(); // llama al subprograma menu

  cin>>op; // recibe la opcion del usuario
  
  /* depende la opcion del usuario se toma la desicion de que subprograma llamar
  */
  switch(op){

    case 1:

    cout<<"Digite la cantidadad de dispositivos IOT"<<endl;
    cin>>cant;
    registrar_iot(cant);
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
