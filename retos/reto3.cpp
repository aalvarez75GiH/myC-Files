#include <iostream>
#include <fstream>
bool stop = true;
using namespace std;
char input;
int heroPosY=0;
int heroPosX=0;
//array y for
char gameMap[40][40]={{'1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1'},
                      {' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
                      {'0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0'},
                      {' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
                      {'1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1'},
                      {' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
                      {'0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0'},
                      {' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
                      {'1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1'},
                      {' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
                      {'0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0'},
                      {' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
                      {'1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1'},
                      {' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
                      {'0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0'},
                      {' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
                      {'1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1'},
                      {' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
                      {'0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0'},
                      {' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
                      {'1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1'},
                      {' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
                      {'0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0'},
                      {' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
                      {'1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1'},
                      {' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
                      {'0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0'},
                      {' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
                      {'1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1'},
                      {' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
                      {'0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0'},
                      {' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
                      {'1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1'},
                      {' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
                      {'0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0'},
                      {' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
                      {'1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1'},
                      {' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
                      {'0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0'},
                      {' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '}};
//-------------------------------------------------------------------------------------------------------
//FUNCION PARA CONSTRUIR (PINTAR) EL MAPA
void drawMap(int dmPosX,int dmPosY,char gameMap[40][40]){


for (int y=0;y<20;y++){
	
	for (int x=0;x<40;x++)
	{
		 if (y != dmPosY){
        	 cout<<gameMap[x][y];
		 }
		  
		 else
		 {
                 	 if (x != dmPosX){
                   	 cout<<gameMap[x][y];
			 }
			 else{
			 cout<<'3';
			 
			 }

		 }
		 
		 
        }

cout<<endl;  
}
}



//FUNCION PARA CARGAR ULTIMA POSICION GUARDADA
void loadGame(){
char resp;
int renglon =0;
cout<<endl;	        
cout<<"Do you wanna load your last saved game?? (y/n) "<<endl;
cin>>resp;
if (resp == 'y'){
	string line;
	string nameRecovered;
	int renglon = 1;

     ifstream myFileRead("gameData.txt");
     if (myFileRead.is_open()){
        
	while(getline(myFileRead,line)){

                if (renglon == 1){
                nameRecovered = line;
		heroPosY = stoi(nameRecovered);
		}
                else if(renglon == 2) {
                nameRecovered = line;
		heroPosX = stoi(nameRecovered);
                }
		renglon = renglon + 1;
             } 
	 cout<<"heroPosY: "<<heroPosY<<endl;
	 cout<<"heroPosX: "<<heroPosX<<endl;
        }
     else{
          cout<<"File could NOT be open..."<<endl;
        }
     }else
    	{
	  cout<<"Loading new Game :)"<<endl;
	}	
				
drawMap(heroPosX,heroPosY,gameMap);
}
//FUNCION PARA GUARDAR EL ULTIMO MOVIMIENTO REALIZADO
void saveGame(){


                ofstream myGameFile("gameData.txt");
                if (myGameFile.is_open()){
                myGameFile << heroPosY <<endl;
                myGameFile << heroPosX <<endl;

                /*for (int i=0;i<10;i++){
                myGameFile << i<<endl;
                }
                myGameFile << "Otra cosa...";*/
                 }
        myGameFile.close();
}


//FUNCION PARA MOVER AL HEROE EN EL MAPA
bool movePositionHero(char mpInput){
char resp;
//cout<<"bandera de mpStop: "<<mpStop<<endl;
//do{
switch(mpInput){


	case 'd':
      		  heroPosY = heroPosY + 0;
		  heroPosX = heroPosX + 2;
      		  cout <<heroPosY<<endl;
		  cout <<heroPosX<<endl;
		  break;

	case 'a':
      		  heroPosY = heroPosY + 0;
		  heroPosX = heroPosX - 2;
      		  cout <<heroPosY<<endl;
		  cout <<heroPosX<<endl;
		  break;

	case 'x':
      		  heroPosY = heroPosY + 1;
		  heroPosX = heroPosX + 0;
      		  cout <<heroPosY<<endl;
		  cout <<heroPosX<<endl;
		  break;

	case 'w':
      		  heroPosY = heroPosY - 1;
		  heroPosX = heroPosX - 0;
      		  cout <<heroPosY<<endl;
		  cout <<heroPosX<<endl;
		  break;

			  
	case 'p': cout<<endl;
		  cout<<"Do you want to save your game (y/n)"<<endl;
		  cin>>resp;
		  if (resp == 'y'){
		  saveGame();
		  }
		  else{
		  cout<<"Game stopped (NOT saved)..."<<endl;
		  }
		  stop = false; 
	       	  //return stop2;
		  break;
}

}

//FUNCION PARA COMENZAR A JUGAR
void Play(){


		while (stop){
		cout<<endl;
		cout<<"(D)Right,(A)Left,(W)Up,(X)Down,(P)ause"<<endl;
		cin>>input;
		movePositionHero(input);
		cout<<"Dimension 1: "<<heroPosY<<" (Columnas) "<<endl;
		cout<<"Dimension 2: "<<heroPosX<<" (Filas) "<<endl;
		drawMap(heroPosX,heroPosY,gameMap);
		}

}
//FUNCION PARA INICIALIZAR POSICION A DEMANDA
void initialPosition(){
char input; 
drawMap(heroPosX,heroPosY,gameMap);
while (stop){
	cout<<endl;
        cout<<"Move your Hero to the Position you want..."<<endl;
	cout<<"(D)Right,(A)Left,(W)Up,(X)Down -- press (S) to set"<<endl;
	cin>>input;
	if (input == 's'){
	cout<<"Your position is already set."<<endl;
	cout<<"Enjoy your Game :)"<<endl;
	Play();
	}
        movePositionHero(input);
        cout<<"Dimension 1: "<<heroPosY<<" (Columnas) "<<endl;
        cout<<"Dimension 2: "<<heroPosX<<" (Filas) "<<endl;
        drawMap(heroPosX,heroPosY,gameMap);
        }


}
int main()
{
char option;
char resp;
system("clear");
cout<<"          Main Menu        "<<endl;
cout<<"---------------------------"<<endl;
cout<<"        1.New Game         "<<endl;
cout<<"        2.Load Game        "<<endl;
cout<<"        3.Quit             "<<endl;
cout<<"-------------------------- "<<endl;
cout<<"************************** "<<endl;
cout<<"-------------------------- "<<endl;
cin>>option;

switch (option){

	case '1':
                cout<<endl;
		cout<<"Do you wanna set Your Initial Position?? (y/n)"<<endl;
		cin>>resp;
			if ( resp == 'y' ){
				initialPosition();
			}else{
        	drawMap(heroPosX,heroPosY,gameMap);
		Play();
			}
		break;
	case '2':
 		loadGame();
		Play();
		break;
	
	case '3':
		cout<<"Quiting the game"<<endl;
		break;
		
}

return 0;
}
