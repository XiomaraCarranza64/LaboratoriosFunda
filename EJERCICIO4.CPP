#include "iostream" 

using namespace std; 

int main()

{ 
    string palabra ; 
    int longitud  ; 
    cout << endl << "LONGITUD DE UN PALABRA"<< endl ; 
    cout << endl << "INGRESE UNA PALABRAS: ";
    cin >> palabra ; 
    cout << endl ; 

    longitud = palabra.length(); 
    
    if (longitud>10)
    { 
        cout << "EL NUMERO DE CARACTERES DE -"<<palabra<< "- ES MAYOR DE 10"<< endl << endl ;
    }
    else 
    { 
         
        cout << "EL NUMERO DE CARACTERES DE -"<< palabra<< "- ES MENOR O IGUAL A 10"<< endl << endl ;

    }

    if ( longitud % 2 == 0 )
    { 
        cout <<  "-" <<palabra << "- TIENE "<< longitud << " CARACTERES Y "<< longitud << " ES PAR"<< endl  ; 

    }
    else
    {
        cout << "-" <<palabra << "- TIENE "<< longitud << " CARACTERES Y " << longitud << " ES IMPAR" << endl ;
    }

}