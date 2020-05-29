#include <iostream>

using namespace std;


bool isPlayerDead(int hp){
if (hp <= 0){
cout<<"esta pasando por hp=0"<<endl;
//dime=false;

return true;

}
else{

return false;
}

}


int main()
{
int vidas;

cout<<"Ingrese numero de vidas: "<<endl;
cin>>vidas;


if(isPlayerDead(vidas)){

cout<<"The Player is Dead "<<endl;
}
else{

cout<<"The Player is Alive "<<endl;
}

return 0;
}

