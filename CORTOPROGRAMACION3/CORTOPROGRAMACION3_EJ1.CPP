#include "iostream"
#include "iomanip"
using namespace std;


int  salarioreal()
{
   int i , empleados ,horastraba, horasextras ;
   float salarioreal,salariototal; 

  cout << "NUMERO DE EMPLEADOS: "; 
  cin>> empleados ;

  for (i=1;i<=empleados;i++) // tomara como limite el numero de empleados que digite el usuario 
    {
      cout << endl << "EMPLEADO " << i ; 
      cout << endl <<  "DIGITE NUMERO DE HORAS TRABAJAS: " ; 
      cin >> horastraba ; 
      cout << "DIGITE NUMERO DE HORAS EXTRAS TRABAJADAS: "; 
      cin >> horasextras; 


       salariototal= (horastraba*1.75)+(horasextras*2.50);//Se suman la multiplicacion del numero de horas trabajadas con el precio especifico de cada uno

       salarioreal =  salariototal*0.96;// Salario total menos el descuento del ISSS
       salarioreal*=0.9375; // Lo que quedo del salario total menos el descuento de AFP
  
         if (salariototal>500)
       {
          salarioreal*= 0.90;//Lo que queda del salario total menos el descuento de la Renta 
        
       }

       cout  << endl << "EMPLEADO NUMERO "<<i<< ":" << endl ; 
       cout <<"SALARIO TOTAL"<<endl<< "$"<<fixed<<setprecision(2)<<salariototal<< endl; 
       cout << "TOTAL NETO A PAGAR"<<endl<< "$"<<fixed<<setprecision(2)<<salarioreal<<endl; 


    }
    
}

int main()
{
    salarioreal(); 
   
}


