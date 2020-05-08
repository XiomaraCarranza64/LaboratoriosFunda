#include "iostream"
#include "cmath"
using namespace std;

int main ()
{
    float radio;
    float radio2; 
    float area;
    float PI = 3.1416; 
    float perimetro ; 

    cout << endl << endl <<  "AREA Y PERIMETRO DE UN CIRCULO" << endl << endl ;  
    
    cout << "Ingrese el radio deL circulo:  " ; 
    cin >> radio;
    cout <<  endl << endl ; 

    radio2 = pow(radio,2); 

    area= PI * radio2 ; 

    perimetro = (2 * PI) * radio ; 

    cout << "EL AREA DEL CIRCULO ES :  " << area << endl << endl ; 
    cout << "EL PERIMETRO DEL PERIMETRO ES:  " << perimetro << endl << endl ; 

}
    
    


