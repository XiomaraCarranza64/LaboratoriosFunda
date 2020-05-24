#include "iostream" 

using namespace std; 

int main()
{

    int num ; 

    cout << "NUMERO PAR O IMPAR" << endl ; 
    cout << endl << "Digite un numero entero: ";  
    cin >> num ; 
    cout << endl; 

    if (num % 2 == 0)
    { 
        cout << "EL NUMERO ES PAR"<< endl << endl  ;
    }
    else 
    {
        cout << "EL NUMERO ES IMPAR"<< endl << endl ; 
    }

}