#include <iostream>
#include <string.h>

using namespace std;

//array y for
int main()
{

string nombre;
string nombre2;
char arreglo1[7];
char letra;
//For para llenar arreglo 1 con nombre
cout<<"Introduce your name: "<<endl;
cin>>nombre;

for (int i=0;i<=10;i++){

	arreglo1[i]=nombre[i];
	arreglo1[i+1]=nombre[i+1];
 	cout<<arreglo1<<endl;
}

for (int p=10;p>=0;p--){

letra=arreglo1[p];
nombre2 = nombre2 + letra; 
cout<<"WITH FOR LOOP -- Your name backwards is: "<<" "<<nombre2<<endl;
//cout<<"la letra es: "<<letra<<endl;
//cout<<p<<endl;
}
/*int p=6;
do
  
{
    letra=arreglo1[p];
    nombre2 = nombre2 + letra; 
    cout<<"WITH DO WHILE!! -- Your name backwards is: "<<" "<<nombre2<<endl;
    //cout << i << endl;
    if (p == 0) break;
  } while ( p-- );*/


return 0;
}
