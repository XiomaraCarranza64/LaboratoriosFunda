#include "iostream"
using namespace std ; 


int leernotas (int num , float arreglo[][5])//necesitamos el numero de personas y la matriz donde se guardaran las notas de cada persona 
{
 int i , j , numcolumna=1 , numfila=1 ;//numcolumna es para controlar las 5 notas y numfila es para la controlar las personas ingresadas 
 cout << "DIGITE LAS NOTA"<< endl<< endl  ; 
 for (i=0;i<num;i++)
   {
    cout << endl << "ESTUDIANTE "<< numfila << endl<<endl; 
    numcolumna= 1; // se coloca  este comando aqui dado a que cada vez que se realiza una iteracion , la variable numcolumna  comienza con 1 
    
       for (j=0; j<5;j++)
       {
           ; 
           cout << "DIGITE NOTA "<< numcolumna<< " : "; 
           cin >> arreglo[i][j]; 
           numcolumna++; // debe llegar hasta 5
       }
    numfila++ ;// debe de llegar hasta el numero de estudiantes  ingresados 
   }
 
}


int promediofinal(float arreglonotas[][5] , float arreglopromedio[] , int num )// necesitamos la matriz con las notas , arreglo para los promedios y el numero de personas
{
    int i , j; 
    float nota ; 
    for (i=0;i<num; i++)
   {
    
    float sum = 0 ; 
    for (j=0;j<5;j++)// Se corre la matriz para poder hacer el calculo de la nota final 
     {
       nota = arreglonotas[i][j]*0.2;// nota se modificara cada vez que corra por una nueva nota 
       sum = sum + nota ; // sum recibira todos las notas ya multiplicadas con su ponderacion 
     }
    arreglopromedio[i]=sum ; 
   } 

int persona = 1 ; 
for (i=0;i<num;i++)
{
    cout << endl << "ESTUDIANTE "<< persona ; 
if (arreglopromedio[i]<6.0)
   {
    cout << endl << "SU NOTA FINAL ES: "<< arreglopromedio[i]<< endl << "REPROBO"<< endl ; 
   }
else if (arreglopromedio[i]>=6.0)
   {
     cout << endl <<  "SU NOTA FINAL ES: "<< arreglopromedio[i]<< endl << "APROBO"<< endl ; 
   }
  persona ++ ; 
}


}






int main ()
{
    int personas ; 
    cout << "NUMERO DE ESTUDIANTES QUE DESEAN CONSULTAR SU PROMEDIO: "; 
    cin >> personas ; // en base a este dato creamos los arreglos 
    float notas[personas][5] , promedio[personas]; 
    leernotas(personas,notas); 
    promediofinal(notas,promedio,personas); 
}


