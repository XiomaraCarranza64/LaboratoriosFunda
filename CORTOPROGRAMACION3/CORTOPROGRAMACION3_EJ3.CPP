#include "iostream"
#include "conio.h"
using namespace std;



int  bisiesto(int year)
{
     bool bisiesto ; //tomara el valor de true o false segun sea el año sea bisisesto o no 
if (year%400==0)
    {
        bisiesto = true;
           
    }
 else if (year%4==0 && year%100!=0)
    {
        bisiesto= true ;
    }

 else 
    {
        bisiesto = false ; 
    }



if (bisiesto==true)//Se compara el valor de bisiesto con respecto a lo que este contenga 
    {
        cout <<"EL A" << (char)164<< "O "<< year << " ES BISIESTO"<< endl ; 
    }

else 
    {
        cout <<"EL A" << (char)164<< "O "<< year << "  NO ES BISIESTO"<< endl ;
    }

    return 0 ;//no necesita retornar nada 
}

int main()
{
    int year;  
    cout << endl << "A" << (char)164<<"O BISIESTO"<< endl ;
    cout <<  "INGRESE UN  A" << (char)164<<"O BISIESTO: "; 
    cin >> year; //pedrira el valor nesesario para iniciar la funcion 

   bisiesto(year);
    
 }
