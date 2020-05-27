#include <iostream>
#include<fstream>
using namespace std;



int main()
{


	ofstream myFile("gameData.txt");
	if (myFile.is_open()){
	myFile << "Esto es una Prueba"<<endl;

	for (int i=0;i<10;i++){
	myFile << i<<endl;
	}
	
	myFile << "Otra cosa...";
	
	}
myFile.close();


return 0;
}

