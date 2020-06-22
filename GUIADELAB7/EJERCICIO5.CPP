#include "iostream"

using namespace std ;

int numimpares(int arreglo[])
{
  int num=1 , i; 
   arreglo[0]= 1 ;  
   for  (i=1 ; i<100 ; i++)
   {
       num = num +2 ; 
       arreglo[i]= num ; 
   } 

}



int imprimirarreglo(int arreglo[])
{
    cout << endl << "PRIMEROS 100 NUMEROS IMPARES" << endl ; 

   for (int i=99; i>=0 ; i--)
   {
       cout << arreglo[i] << endl ; 
   }
}








int main ()
{
   int numerosimpares [100] ; 
   numimpares(numerosimpares); 
   imprimirarreglo(numerosimpares); 


}



