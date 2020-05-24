#include "iostream" 

using namespace std; 

int main()
{

int num1 , num2 ;

cout << endl << "NUMEROS DIVISIBLES"<< endl;  
cout << endl << "Digite Dividendo: "  ; 
cin >> num1 ; 
cout << endl << "Digite Divisor: " ; 
cin >> num2 ;
cout << endl ; 

if (num1 % num2 == 0)
{
cout << num1 << " es divisble entre " << num2 << endl ; 

}
else 
{
    cout << num1 << " NO es divisible entre "<< num2 << endl ; 
}



}