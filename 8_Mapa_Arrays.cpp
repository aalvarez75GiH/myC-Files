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
int heroPos=4;
char gameMap[5]={'1','1','1','1','1'};
drawMap(heroPos,gameMap);
return 0;
}

