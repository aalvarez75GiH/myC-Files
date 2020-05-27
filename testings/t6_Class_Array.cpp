#include <iostream>
//Programa para ejemplificar el uso de Clases y variables publicas dentro de la clase.
using namespace std;
int i,j,m,n,r,s;
int resp;
        

class mago
{
public:
        string e1;
        string e2;
        string e3;
        
	mago(string elementoD, string elementoE,string elementoF)
        {
		e1 = elementoD;
                e2 = elementoE;
                e3 = elementoF;
        } //constructor
       

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
                //cout<<"Enter the Mage name: ";
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
					//cout<<arregloE[i][j]<<" ";
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
						//cout<<arregloE[i][j]<<" ";
						cout<<"["<<i<<"]["<<j<<"]="<< arregloE[i][j] <<" ";
					}
					cout<<endl;
				}
			}

}


int main()
{
	string type;
	string elementoC;
	string arregloE[m][n];
	cout<<"How many mages do you want to create?? "<<endl;
	cin>>resp;
	cout<<"What type pf mage?? "<<endl;
	cin>>type;
	if (type == "fuego"){
	elementoC = "fuego";
	startApp(type,elementoC);
	}else if(type == "hielo")
	{
	elementoC = "hielo";
	startApp(type,elementoC);
	}
	else
	{
	cout<<"Magia no existe..."<<endl;
	}
	return 0;
}



