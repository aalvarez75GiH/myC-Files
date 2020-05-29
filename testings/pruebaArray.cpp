#include <iostream>

using namespace std;

//array y for




int main()
{
int coordx;
int coordy;
char gameMap[5][5]={{'A','B','C','D','E'},
	            {'F','G','H','I','J'},
	            {'K','L','M','N','O'},
	            {'P','Q','R','S','T'},
	            {'U','V','W','X','Y'}};
		
		
		  
cout<<"entre coordenada X:"<<endl;
cin>>coordx;
cout<<"entre coordenada Y:"<<endl;
cin>>coordy;
//cout<<"Las coordenadas son: "<<coordx<<" y "<<coordy<<endl;
cout<<gameMap[coordx][coordy]<<endl;
return 0;
}



