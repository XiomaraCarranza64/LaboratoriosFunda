#include "iostream" 

using namespace std; 

int main()
{

    string palabra , inicial , final ;
    int longitud , ultim ; 

    cout << endl << "DIGITE UNA PALABRA: " ; 
    cin >> palabra ; 
    cout << endl  ;

    inicial = palabra[0];
    longitud = palabra.length();
    ultim = longitud - 1; 
    final = palabra[ultim]; 

    if (inicial == final)
    {
        cout << "SU PALABRA INICIA Y FINALIZA CON LA MISMA LETRA: " << inicial <<  endl << endl  ; 

    }
    else 
    { 
        cout << "SU PALABRA NO COMIENZA y TERMINA CON LA MISMA LETRA"<< endl<< endl ;
        cout << "SU LETRA INCIAL ES: " << inicial << endl << "SU LETRA FINAL ES: "<< final << endl<< endl  ; 
    }
    

}