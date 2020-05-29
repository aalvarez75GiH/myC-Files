#include <iostream>
//Programa para ejemplificar el uso de Clases y variables publicas dentro de la clase.
using namespace std;
int i,j,m,n,r,s;
int resp;
char typeResp;        

class mago
{
public:
        
        string e2;
        string e3;

	mago(string elementoD,string elementoE,string elementoF)
        {
		e1 = elementoD;
                e2 = elementoE;
                e3 = elementoF;
        } //constructor

string getName(){
return e1;
}

private:

        string e1;



};


void startApp(string type,string elementoC){

string elementoA;
string elementoB;


if(type == "hielo"){

elementoC = "hielo seco";

}
else if(type == "fuego")
{
       elementoC = "fuego";
} 
	
if (resp == 1)
	{
                m = 1;
                n = 3;
                string arregloE[m][n];
                cout<<"Enter mage name: ";
		cin>>elementoA;

                cout<<"Enter mage power: ";
		cin>>elementoB;

		mago magoType(elementoA,elementoB,elementoC);
		//magoType.e1 = "David";
		cout<<magoType.getName()<<endl;
		for (int i=0;i<m;i++)
                {
			for(int j=0;j<n;j++)
			{
				arregloE[i][j]=magoType.getName();
				j++;
				arregloE[i][j]=elementoB;
				j++;
				arregloE[i][j]=elementoC;
				j++;
			}
			for (int i=0;i<m;i++)
			{
				for (int j=0;j<n;j++)
				{
					cout<<"["<<i<<"]["<<j<<"]="<< arregloE[i][j] <<" ";
				}
				cout<<endl;
			}
		}
}
		else if(resp > 1)
			{
				cout<<"vamos bien..."<<endl;
				m = resp;
				n = 3;
				string arregloE[m][n];
				for (r=0;r<m;r++)
				{
					for (s=0;s<n-2;s++)
					{
						cout<<"Enter mage name: ";
						cin>>elementoA;
						cout<<"Enter mage power: ";
						cin>>elementoB;
						mago magoType(elementoA,elementoB,elementoC);
						arregloE[i][j]=elementoA;
						j++;
						arregloE[i][j]=elementoB;
						j++;
						arregloE[i][j]=elementoC;
						j++;
				       	}
				}
				cout<<"impresion"<<endl;
				for (int i=0;i<m;i++)
				{
					for (int j=0;j<n;j++)
					{
						cout<<"["<<i<<"]["<<j<<"]="<< arregloE[i][j] <<" ";
					}
					cout<<endl;
				}
			}

}

void menuMage()
{
char option;
string type;
string elementoC;
system("clear");
cout<<"      Choose mage type     "<<endl;
cout<<"---------------------------"<<endl;
cout<<"        1.fire             "<<endl;
cout<<"        2.ice              "<<endl;
cout<<"        3.Villane          "<<endl;
cout<<"        4.Quit             "<<endl;
cout<<"-------------------------- "<<endl;
cout<<"************************** "<<endl;
cout<<"-------------------------- "<<endl;
cin>>option;

switch (option){

        case '1':
                type = "fuego";
                elementoC = "fuego";
                startApp(type,elementoC);
                break;
        case '2':
                type = "ice";
                elementoC = "ice";
                startApp(type,elementoC);
                break;

        case '3':
                cout<<"aun no esta programado"<<endl;

                break;


        case '4':
                cout<<"Quiting the game"<<endl;
                break;

}
}//void
int main()
{
	string arregloE[m][n];
	cout<<"How many mages do you want to create?? "<<endl;
	cin>>resp;
        menuMage();
	//startApp(type,elementoC);
	return 0;
}



