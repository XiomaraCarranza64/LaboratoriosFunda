#include "iostream"
#include <stdio.h>
#include <string.h>
using namespace std ; 


int clavemurcielago (char arregloorigen[],char arreglodestino[])
{
int i, longitud; 
longitud = strlen(arregloorigen); // debe de guardarse en una variable la cantidad de caracteres que tiene la frase 
for (i=0; i<longitud ; i++)
{
  switch (arregloorigen[i])// para cada letra de la clave murcielago , se debe crear un caso de switch 
  {
  case 'm' : 
  arreglodestino[i]='0'; 
  break ; 
  case 'u' : 
  arreglodestino[i]='1'; 
  break; 
  case 'r' : 
  arreglodestino[i]='2'; 
  break ; 
  case 'c' : 
  arreglodestino[i]= '3'; 
  break ; 
  case 'i' : 
  arreglodestino[i]='4';
  break ;
  case 'e' : 
  arreglodestino[i]='5'; 
  break; 
  case 'l' : 
  arreglodestino[i]='6';
  break; 
  case 'a' : 
  arreglodestino[i]='7';
  break;  
  case 'g' :
  arreglodestino[i]='8' ;
  break; 
  case 'o' :
  arreglodestino[i]='9'; 
  break ; 
  default : 
  arreglodestino[i]= arregloorigen[i]; 
  break ; 
  }

}
arreglodestino[i]='\0'; // ESTE SIMBOLO SE COLOCA DESPUES DE LA ULTIMA LETRA INGRESADA PARA EVITAR QUE SALGAN SIMBOLOS EXTRAÑOS EN EL STRING 
cout  << "DECODIFICACION CLAVE MURCIELAGO"<< endl; 
printf (arreglodestino); // SE UTILIZA PRINTF PARA QUE NO SE IMPRIMA EL 0/
cout << endl  ;
return 0; 
}









int main ()
{

    char frase1[100]; //ESTE SERA EL ARREGLO DONDE SE GUARDARAN LAS LETRAS DE LAS FRASES INGRESADA
    char frase2[100];// ESTE SERA EL ARREGLO DONDE SE GUARDARA LA FRASE YA CODIFICADA CON EL CODIGO MURCIELAGO 
    cout << "CLAVE MURCIELAGO"<< endl << "ESTE PROGRAMA DEVOLVERA UNA FRASE EN CLAVE MURCIELAGO"<< endl << endl ; 
    cout << "DIGITE UNA FRASE: ";
    cin.getline(frase1,100); // ESTA FUNCION LEE LA FRASE Y GUARDA EN EL ARREGLO CADA LETRA EN CADA CASILLA DE ESTE 

    clavemurcielago(frase1,frase2); //SE INTRODUCE A LA FUNCION LOS DOS ARREGLOS PARA PODER MODIFICARLOS AHI ADENTRO 


}