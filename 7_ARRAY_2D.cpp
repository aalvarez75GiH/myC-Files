#include <iostream>

using namespace std;

//array y for
int main()
{

//string names[5]={"arnoldo","Kris","Ana","Carlos","Julio"};	
	
int ids[5][5] = {
	
{0, 0, 0, 0, 0},
{0, 0, 0, 0, 0},
{0, 0, 0, 0, 0},
{0, 0, 0, 0, 0},
{0, 0, 0, 0, 0}

};
int x,y;
for (y=0;y<5;y++)
{
	for (x=0;x<5;x++)
	{
	
	cout<<ids[y][x];
	}
cout<<endl;
}


	//cout<<+", "+mensaje2<<endl;
return 0;
}

