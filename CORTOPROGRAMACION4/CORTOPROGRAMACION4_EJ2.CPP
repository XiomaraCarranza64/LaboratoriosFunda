#include "iostream"
#include "iomanip"
using namespace std ; 




float leerestaturas (float arreglo [])
{
    int  i ,numeroarreglo;
    float  suma= 0 , media ; 
  for (i=0 ; i<25 ; i++)
  {
     if (i==24)// en el ultimo numero no colocara la coma 
     {
         cout << arreglo[i]<< endl ; 
     }
     else 
     {
         cout << arreglo[i]<< " , "; 
     }

  }

 
for (i=0;i<25;i++)
{
    suma = suma + arreglo[i];
}

media = suma / 25; 


return media ; 
}



int compararestatura (float media, float arreglo [])
{
    int i ,contamenor=0 , contamayor=0; //estara el contador del arreglo,estaturas menores y estaturas mayores que la media 
for (i = 0 ; i<25 ;i++)
{
   if (arreglo[i]<media)
   {
     contamenor++; 
   }

   else if (arreglo[i]>media)
   {
       contamayor++; 
   }

}
cout << "ESTATURAS MENORES QUE LA MEDIA: "<< contamenor<< endl ;
cout << "ESTATURAS MAYORES QUE LA MEDIA: "<< contamayor<< endl ; 

}







int main ()
{
cout << endl <<  "PROMEDIO DE ESTATURAS EN METROS DE 25 ALUMNOS"<< endl ;//se dejaran los datos ya dados 
float estaturas[25]={1.40,1.55,1.70,1.78,1.56,1.87,1.71,1.70,1.56,1.67,1.47,1.80,1.56,1.78,1.73,1.44,1.66,1.61,1.61,1.57,1.72,1.77,1.81,1.55,1.64}; 
float  media ; 

media = leerestaturas(estaturas); 
cout << endl << "LA MEDIA DE LAS ESTATURAS INGRESADAS ES: "<<fixed << setprecision(2)<< media << endl ; 
compararestatura (media,estaturas); 
}