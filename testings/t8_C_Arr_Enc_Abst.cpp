#include <iostream>
//Programa para ejemplificar el uso de Clases y variables publicas dentro de la clase.
using namespace std;
int i,j,m,n,r,s;
int resp;
string resp2;
char typeResp;        
string typeMaligno;
string elementoMaligno2;



class mago
{
public:
        
	string e1;
        string e2;
        string e3;
	int age;	
	mago(string eleme1,string eleme2,string eleme3)
        {
		e1 = eleme1;
		e2 = eleme2;
		e3 = eleme3;
		
        } 


void getEvilElement(){

elementoMaligno();

}


private:

string elementoMaligno()
{

        if (resp2 == "yes")
        {
                cout<<"El poder maligno es ..SuperFuego"<<endl;
                typeMaligno = "evil";
		elementoMaligno2 = "fuego Maligno";
		return typeMaligno; 
        }
}



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
}else if (typeMaligno == "evil")
{
	elementoC = "Fuego maligno";

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
                
                for (int i=0;i<m;i++)
                {
                        for(int j=0;j<n;j++)
                        {
                                arregloE[i][j]=elementoA;
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
mago magoType2("arnoldo","100","100");
cout<<"      Choose mage type     "<<endl;
cout<<"---------------------------"<<endl;
cout<<"        1.fire             "<<endl;
cout<<"        2.ice              "<<endl;
cout<<"        3.Villane          "<<endl;
cout<<"        4.hiden Power      "<<endl;
cout<<"        5.Quit             "<<endl;
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

		cout<<"Quieres conceder el poder maligno?? (yes/no)"<<endl;
		cin>>resp2;

		if (resp2 == "yes")
		{
                //resp2 = "yes";
		//type = "SuperFuego";

		magoType2.getEvilElement();
		}
		else
		{
		cout<<"Eres un perdedor..."<<endl;
		
		}
                cout<<"Flag antes de StartApp"<<endl;
		startApp(typeMaligno,elementoMaligno2);
		break;


        case '5':
                cout<<"Quiting the game"<<endl;
                break;

}
}
int main()
{
	string arregloE[m][n];
	cout<<"How many mages do you want to create?? "<<endl;
	cin>>resp;
        menuMage();
	return 0;
}



