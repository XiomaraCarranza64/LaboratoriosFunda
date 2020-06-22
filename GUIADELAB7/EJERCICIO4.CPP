#include "iostream"

using namespace std ; 

int leerarreglo (float arreglo[],int cant)
{
   int  num = 1 ; 
    cout << "INGRESE LOS "<< cant << " NUMEROS" << endl ; 
    for (int i= 0 ; i<cant ; i++)
    {
        cout << "NUMERO " << num << " : "; 
        cin >> arreglo[i]; 
        num ++ ; 
    }
}


int sumaarreglos (float arreglo1[],float arreglo2[],int cant,float arreglosuma[] )

{

  for (int i=0; i<cant ; i++)

    arreglosuma[i] = arreglo1[i] + arreglo2[i];
    
}

int mostrararreglo(float arreglosuma[],int cant )
{
    int cantsum=1; 
    cout <<endl << endl <<  "LA SUMA DE ARREGLOS" << endl  ; 
    for (int i=0; i<cant; i++)
    {
        cout << "SUMA "<< cantsum << " : "<< arreglosuma[i]<< endl ;
        cantsum ++ ;  
    }
}


int main()
{
    int cant ; 
   cout << endl << "SUMATORIA ENTRE DOS ARREGLOS" << endl; 
   cout << "¿CUANTOS ELEMENTOS SE SUMARAN?"<< endl << "cant. ";
   cin >> cant ; 
  
   float arreglo1 [cant] , arreglo2 [cant] , arreglosuma[cant]; 

    cout << endl << "ARREGLO 1" << endl ; 
    leerarreglo (arreglo1,cant); 
    cout << endl << "ARREGLO 2" << endl ;
    leerarreglo (arreglo2,cant); 

    sumaarreglos (arreglo1,arreglo2,cant,arreglosuma); 
    mostrararreglo( arreglosuma,cant); 




}
