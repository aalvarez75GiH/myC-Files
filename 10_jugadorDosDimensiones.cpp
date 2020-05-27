#include <iostream>

using namespace std;

//array y for

void drawMap(int heroPosX,int heroPosY,char gameMap[5][5]){


for (int i=0;i<5;i++){
	
	for (int p=0;p<5;p++)
	{
		 if (i != heroPosY){
        	 cout<<gameMap[p][i];
        	} 
		 else
		 {
                 	 if (p != heroPosX){
                 	cout<<gameMap[p][i];
                 
			 }
			 else{
			 cout<<'H';
			 
			 }

		 }
		 
		 
        }

cout<<endl;  
}
  

}




int main()
{
char input = ' ';
int heroPosX=0;
int heroPosY=0;

char gameMap[5][5]={{'1','1','1','1','1'},
	            {'1','1','1','1','1'},
		    {'1','1','1','1','1'},
		    {'1','1','1','1','1'},
		    {'1','1','1','1','1'}};
//----------------------------------------------------
bool isGameOver = false;
drawMap(heroPosX,heroPosY,gameMap);

while (isGameOver == false){

cout<<"(r)ight,(l)eft,(u)p,(d)own,(q)uit"<<endl;
cin>>input;

if (input == 'r'){
      heroPosX = heroPosX + 1;
      //heroPosY = heroPosY + 0;
}
else if (input == 'l'){
        heroPosX = heroPosX - 1;
	//heroPosY = heroPosY - 0;
}else if (input == 'd'){
        //heroPosX = heroPosX + 0;
	heroPosY = heroPosY + 1;
}else if (input == 'u'){
        //heroPosX = heroPosX + 0;
	heroPosY = heroPosY - 1;
} else if (input == 'q'){
       isGameOver = true;
}
      else{
      cout<<"No se reconoce Movimiento..."<<endl;
      }

drawMap(heroPosX,heroPosY,gameMap);

}
return 0;

}



