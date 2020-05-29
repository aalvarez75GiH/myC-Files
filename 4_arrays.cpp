#include <iostream>

using namespace std;


int main()
{
/*char corbatas[5]; //Esto es un arreglo de tipo char que contiene 5 celdas
corbatas[0] ='b';
corbatas[1] ='g';
corbatas[2] ='o';
corbatas[3] ='B';
corbatas[4] ='y';

cout<<corbatas[0]<<endl;
cout<<corbatas[1]<<endl;
cout<<corbatas[2]<<endl;
cout<<corbatas[3]<<endl;
cout<<corbatas[4]<<endl;


//iterando en el arreglo
for (int i=0;i<5;i++){
cout<<corbatas[i]<<endl;
}*/


string names[4] = { "Mazinger Z","Zayaka","Bob","Koyi Cabuto"};

int index;
cout<<"Introduzca la posicion del arreglo: "<<endl;
cin>>index;

cout<<names[index]<<endl;






return 0;
}

