#include <iostream>

using namespace std;

class gamePlayer
{
        public:
                int x,y;
		gamePlayer()
		{
			x = 1;
			y = 1;
		}

int callInput()
{
char userInput;
cin>>userInput;

switch (userInput)

{
        case 'w':
                y = y + 1;
                cout<<"arriba"<<endl;
                break;
        case 'd':
                x = x + 1;
                cout<<"derecha"<<endl;
                break;
        case 's':
                y = y - 1;
                cout<<"abajo"<<endl;
                break;
        case 'a':
                x = x - 1;
                cout<<"izquierda"<<endl;
                break;
}

cout<<"Coordenadas: "<<x<<" , "<<y<<endl;
}


};

class gameCell
{
        public:
		int id;
                gameCell(){
		}

int gameCellId()
{
        id = 0;
}

	
};

class gameMap
{
        public:
		gameCell cells[15][10];
		gameCell* playerCell;
                gameMap()
		{
			playerCell = NULL;
		}

void drawMap()
{
        for (int i = 0;i < 15;i++)
        {
                for(int j = 0;j<10;j++)
                {

                cout<<cells[i][j].id<<" ";

                }

                cout<<endl;

        }

}

void setPlayerCell(int playerX,int playerY)
{

        if (playerCell != NULL){

                playerCell->id = 0;

        }
	
	playerCell = &cells[playerX][playerY];
	playerCell ->id =  3;
	
}

};


int main()
{
bool isGameOver = false;

	
	gamePlayer jugador1;
	gameMap mapa;
	
	cout<<"Starting the Game..."<<endl;

	while (isGameOver == false){
		//aqui el objeto jugador1 llama a la funcion callInput declarada en gamePlayer
		jugador1.callInput();
		//aqui el objeto mapa llama a la funcion drawMap declarada en gameMap
		mapa.drawMap();
		//aqui el objeto mapa llama a la funcion setPlayerCell declarada en gameMap.h
		mapa.setPlayerCell(jugador1.x,jugador1.y);
	}

	return 0;
}

