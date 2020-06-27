#include "iostream"
#include "string"// SE UTILIZAN ESTAS LIBRERIAS PARA GENERAR EL NUMERO RANDOM 
#include<stdlib.h>
#include<time.h>
using namespace std;

int numeromagico ()
{
    int num , i=2 , numusuario;
    num=rand()%101-1;//GUARDA EN LA VARIABLE EL NUMERO RANDOM 
    
cout << "INTENTO 1"<< endl << "INGRESE NUMERO O CTRL-Z PARA SALIR: ";
while(cin>>numusuario)// TODAS LAS VECES QUE LA VARIABLE SEA ALFO QUE SE PUEDA LEER 
{
  cout << endl; 
  if(numusuario==num )// PARA VERIFICAR SI EN EL PRIMER INTENTO SE LOGRA ADIVINAR EL NUMERO 
    {
        cout <<"EL NUMERO "<< numusuario <<" ES EL NUMERO MAGICO"<< endl; 
        cout << "FELICIDADES"<< endl<< "CTRL Z PARA SALIR: "; 
        cin >> numusuario ; 
    }
    
    else// SI NO LOGRA ADIVININAR EL NUMERO EN EL PRIMER INTENTO SEA HACE ESTO 
{  
 while (i<6)// i sera nuestro contador para limitar los intentos del usuario 
        { 
          
           if (numusuario>num)
            {
                  
                cout << "INTENTO " << i <<endl ; 
                i++;// siempre se tiene que ir sumando 1 
                cout <<"EL NUMERO "<< numusuario <<" ES MAYOR QUE EL NUMERO MAGICO"<< endl; 
                cout << "INGRESE NUEVO NUMERO O CTRL-Z PARA SALIR: ";
                cin >>numusuario;
                cout << endl ; 
                
            }

        else if (numusuario<num)
            {
                cout << "INTENTO " << i << endl ; 
                i++;// siempre se tiene que ir sumando 1 
            cout <<"EL NUMERO "<< numusuario <<" ES MENOR QUE EL NUMERO MAGICO"<< endl; 
            cout << "INGRESE NUEVO NUMERO O CTRL-Z PARA SALIR: ";
            cin >>numusuario;
            cout << endl ;
            
        
            }

         else if (numusuario==num)
            {
               
            cout <<"EL NUMERO "<< numusuario <<" ES EL NUMERO MAGICO"<< endl; 
            cout << "FELICIDADES"<< endl ; 
             i = 6; 
           
           }
       
       }
}
       
if (i==6) // AL YA NO CUMPLIR CON LA CONDICION DEL WHILE , El ACUMULADOR i SERA IGUAL A 6 Y PERMITIRA QUE SE DESPLIEGUE ESTA CONDICION 
     { 
          
        cout << endl << "GRACIAS POR PARTICIPAR   CTRL Z PARA SALIR: ";
        cin>>numusuario; 
     }


}

   
    
return 0 ;//no necesita retornar nada 
}





int main()
{
    
    cout << endl << "NUMERO MAGICO" << endl ; 
    cout << "DEBERA ESCOGER UN NUMERO ENTERO ENTRE 1 Y 100"<< endl << "TENDRA 5 INTENTOS PARA LOGRAR EL OBJETIVO"<<endl ;
    cout << "BUENA SUERTE"<< endl << endl ; 
    numeromagico(); //solo se necesita llamar a la funcion 
    
}
    

