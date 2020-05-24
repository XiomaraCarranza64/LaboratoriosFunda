#include "iostream" 

using namespace std; 

int main()
{
    float num ; 
    cout << endl << "NUMEROS POSITIVOS, NEGATIVOS Y CERO" << endl<< endl  ; 
    cout << "Digite un numero: "; 
    cin >> num ; 
    cout << endl ; 

    if (num>0)
    {
        cout << "EL NUMERO ES POSITIVO"<< endl<< endl  ; 
        }
    else if  (num<0)
    {
        cout << "EL NUMERO ES NEGATIVO" << endl << endl ;
    }
       
    else 
    {
        cout<< "EL NUMERO ES CERO"<< endl << endl ; 
    }

   }