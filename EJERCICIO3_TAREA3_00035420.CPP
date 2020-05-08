#include "iostream"
#include "cmath"
using namespace std; 

int  main ()

{
    string nombre; 
    float precio;
    int  cant ; 
    float total; 

    cout << endl << "PRODUCTO COMPRADO" << endl << endl;

    cout << "Nombre del producto comprado" << endl << "-" ; 
    getline(cin,nombre)  ; 
    cout << endl <<  "Precio del producto comprado"<< endl << "$";
    cin >> precio ; 
    cout << endl << "Cantidad comprada de producto" << endl << "cant.";
    cin >> cant ; 

    total = precio * cant ; 

    cout << endl << "Total de dinero gastado" << endl << "$" << total << endl << endl ; 



}