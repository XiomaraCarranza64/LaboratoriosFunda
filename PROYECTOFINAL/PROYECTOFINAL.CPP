#include "iostream"
#include "iomanip"//Se ultiliza para poder definir la cantidad de decimales en las funciones 
using namespace std ; 

const int longCad = 20;

struct costoPorArticulo{
char nombreArticul[longCad + 1];// Existen  21 casillas numeradas del 0 al 20 
int cantidad;
float precio; 
float costoPorArticulo;
}; 


int leerarticulos (costoPorArticulo arreglo[], int numeroarticulos)
{
   int secuencia = 1 , i  ; 
   cin.ignore (100,'\n'); // Se utiliza este comando para evitar errores al momento de ingresar datos -char- despues de datos -int- 
     
 for ( i=0 ; i<numeroarticulos; i++ )
 {
     cout << endl <<  "PRODUCTO NUMERO " << secuencia << endl  ;
             secuencia++ ;  
     cout << "NOMBRE DEL ARTICULO: "; 
       cin.getline(arreglo[i].nombreArticul,longCad + 1); //Se utiliza getline para permitir el uso espacios entre palabras 
     cout << "CANTIDAD COMPRADA: "; 
       cin>>arreglo[i].cantidad; 
     cout << "PRECIO UNITARIO: $ ";
       cin>>arreglo[i].precio; 
       cin.ignore (100,'\n');
       
     /*OTRA FORMA DE REALIZAR LA LECTURA DEL NOMBRE 
        getline (cin , articulo , '\n'); 
     strncpy (arreglo[i].nombreArticul,articulo.c_str(),longCad); */
       

 }

}


int costoporarticulo(costoPorArticulo arreglo[], int numeroarticulos)
{
   for (int i=0; i<numeroarticulos; i++)
   {
      arreglo[i].costoPorArticulo= arreglo[i].cantidad * arreglo[i].precio ; // la multiplicacion entre el precio y la cantidad se guarda en el campo correspondiente 

   }

}



int mostrarcompra(costoPorArticulo arreglo[], int numeroarticulos)
{
     cout << endl << "--------------------------------------------------------------" << endl<< endl   ; 
    for (int i=0 ; i<numeroarticulos;i++)
    {
        cout << "cant.  " << arreglo[i].cantidad << "  " <<  arreglo[i].nombreArticul<< "................   $ ";   
        cout << fixed <<setprecision(2)<< arreglo[i].precio << endl ; 
        cout << "$ " << fixed <<setprecision(2)<< arreglo[i].costoPorArticulo << endl << endl ; //El setprecision permite definir la cantidad de deciamles que apareceran en la pantalla 
    }
}


float totaldelacompra(costoPorArticulo arreglo[],int numeroarticulos)
{
  float suma = 0 ; //esta variable sera la responsable de ir sumando el costo total de todos los productos ingresados 
     for (int i=0 ; i<numeroarticulos;i++)
     {
       suma = suma +  arreglo[i].costoPorArticulo ; 
     }

   return suma ; 
}






int main()
{
  int numarticulos; 
  int i; 
   
  cout << endl << "COMPRA REALIZADA"<< endl << endl ; 
  cout << "NUMERO DE PRODUCTOS: "; 
  cin >> numarticulos; 

  costoPorArticulo comprastienda[numarticulos]; // arreglo donde se guardaran los datos que se ingresen 

   leerarticulos (comprastienda,numarticulos); // funcion que leera los datos y los guaradara en el arreglo
   costoporarticulo(comprastienda,numarticulos); //funcion que calculara es costo total por producto 
   mostrarcompra(comprastienda,numarticulos); // funcion que desplegara los datos registrados 
  
  cout << "--------------------------------------------------------------"; 
  cout << endl <<  "TOTAL A PAGAR $ " << fixed <<setprecision(2)<<  totaldelacompra(comprastienda,numarticulos) << endl<< endl ;  // funcion que desplegara el total de la compra ; 

  
}