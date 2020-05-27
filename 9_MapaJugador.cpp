#include <iostream>

using namespace std;

//array y for

void drawMap(int heroPos,char gameMap[5]){


for (int i=0;i<5;i++){
	if (i != heroPos){
	
	cout<<gameMap[i];
	
	} else{
	
	cout<<'H';
	
	}

}


cout<<endl;

}



int main()
{
char input = ' ';
int heroPos=1;
char gameMap[5]={'1','1','1','1','1'};
bool isGameOver = false;
drawMap(heroPos,gameMap);

while (isGameOver == false){

cout<<"(r)ight,(l)eft,(q)uit"<<endl;
cin>>input;

if (input == 'r'){
      heroPos = heroPos + 1;
}
else if (input == 'l'){
        heroPos = heroPos - 1;
} else if (input == 'q'){
       isGameOver = true;
}
      else{
      cout<<"No se reconoce Movimiento..."<<endl;
      }

drawMap(heroPos,gameMap);







}
return 0;

}



