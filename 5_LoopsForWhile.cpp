#include <iostream>

using namespace std;


int main()
{
int cont=0;
//1er loop while
/*while(cont<=100){
cout<< cont << endl;
cont+=1;
}*/


//2do loop Do while
bool isHappy;
char input;

do {

cout << ":D" << endl;
cout << "Are you Happy?? (t/f)" << endl;
cin  >> input; 

if (input == 'f'){
 isHappy= false;
cout<<":("<<endl;
}
 

}while(isHappy==true);


/*for (int i=0;i<100;i++){
//cout << i << endl;

if (i % 2 == 0){
cout <<"Este numero es par.."<<endl;
} else
{

cout <<"Impar.."<<endl;
}
}*/

return 0;
}

