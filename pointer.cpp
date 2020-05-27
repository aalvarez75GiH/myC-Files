#include <iostream>

using namespace std;
int main()
{
int a;
int*  ptr;

a = 30605;
ptr = &a;
*ptr = 30606;
cout<<"Direccion fisica:  "<<ptr<<endl;
cout<<"Valor numerico: "<<*ptr<<endl;


return 0;
}

