#include "iostream"

using namespace std; 

int main()
{
    int   num1;
    int  num2;
    int  num3; 
    int  sum; 
    float promedio; 

    cout << endl << "PROMEDIO DE TRES NUMEROS ENTEROS" << endl << endl ; 

    cout << "Ingrese su primer numero entero: ";
    cin >> num1;

    cout << "Ingrese su segundo numero entero: "; 
    cin >> num2; 

    cout << "Ingrese su tercer numero entero: " ;
    cin >> num3; 
    cout << endl; 

    sum = num1 + num2 + num3; 

    promedio= (float) sum / 3; 

    cout << "EL PROMEDIO DE LOS NUMEROS DIGITADOS ES: " << promedio << endl << endl ; 








}