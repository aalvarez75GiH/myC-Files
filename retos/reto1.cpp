#include<iostream>
using namespace std;
int main(){

float radio,radio2;
float pi=3.1416;
float area,diametro;
float* apuntador;
float* apuntador2;

     //Area de un Circulo:
    cout<<"Introduzca el radio del circulo: " <<endl; cin>>radio;
    radio2=radio*radio;
    area=pi*radio2;
    cout<<"El area del Circulo es: "<<area<<endl;

     //Diametro de una Circunferencia:
    cout<<"Introduzca el radio de la circunferencia: " <<endl; cin>>radio;
    radio2=radio*radio;
    diametro=(4*pi)*radio2;
    cout<<"El diametro de una de la Circunferencia es: "<<diametro<<endl;

    //Area de un Circulo y diametro de circunferencia con punteros:
    cout<<"Ahora con un Puntero"<<endl;
    cout<<"Introduzca el radio del circulo: " <<endl; cin>>radio;
    apuntador = &area;
    *apuntador=pi*(radio*radio);
    cout<<"Muestrame el area calculada por apuntador: "<<*apuntador<<endl;

    apuntador = &diametro;
    *apuntador = (4 * pi)*(radio*radio);
    cout<<"Muestrame el diametro calculado por punteros: "<<*apuntador<<endl;

    cout<<"Ahora con dos Punteros"<<endl;

cout<<"Introduzca el radio de ambas figuras: " <<endl; cin>>radio;
    radio2=radio*radio;
    apuntador  = &radio2;
    apuntador2 = &pi;
    area = (*apuntador2) * (*apuntador); 
    cout<<"El area del Circulo es: "<<area<<endl;
    diametro = (4 * (*apuntador2)) * (*apuntador); 
    cout<<"El diametro de la circunferencia es: "<<diametro<<endl;

return 0;


}
