#include <iostream>
#include<fstream>
using namespace std;



int main()
{
        /*string myPlayerName;

	ofstream myFile("gameData.txt");
	if (myFile.is_open()){

	myFile << "Hi platzi..."<<endl;	
	myFile << "Player Name: "<<endl;
	cout<<"Enter Player Name: "<<endl;
	cin>>myPlayerName;
        myFile << myPlayerName<<endl;
	//for (int i=0;i<10;i++){
	//myFile << i<<endl;
	//}
	
	//myFile << "Otra cosa...";
	
	}
myFile.close();*/

string line;
string nameRecovered;
int renglon = 1;	
	
	ifstream myFileRead("gameData.txt");
	if (myFileRead.is_open()){
	while(getline(myFileRead,line)){
	 
		if (renglon == 1){
		nameRecovered = line;
		
		}
		else if(renglon == 2) {
		nameRecovered = line;
		}
		renglon = renglon + 1;
	cout<<"Recovered Name: "<<nameRecovered<<endl;
	}
	}
	else{
	cout<<"No se pudo abrir el archivo"<<endl;
	}

return 0;
}

