#include <iostream>
#include <bits/stdc++.h>
//Programa para ejemplificar el uso de Clases y variables publicas dentro de la clase.
using namespace std;
int i,j,m,n,r,s;
	//string arregloElementos[3][3];
        //string comp;
class magoFuego{
public:
	string e;
        int pos1,pos2;
	magoFuego(string elemento2,int i,int j){
		e = elemento2;
		pos1 = i;
	        pos2 = j;	
		
	}
	/*magoHielo(string name1,string edad2,string color2){
		name = name1;
		age = edad2;
		color = color2;
	}
	magoAire(string name1,string edad2,string color2){
		name = name1;
		age = edad2;
		color = color2;
	}*/
	
	       	
	
void hablar(){
bool flag;
string arregloE[m][n];

cout<<"  El elemento es : "<<e<<endl;
cout<<" Esto es: "<<endl;
cout<<pos1<<pos2<<endl;
arregloE[pos1][pos2]=e;

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
};


int main(){

string elemento;
cout<<"Enter Array Dimensions: "<<endl;
cin>>m>>n;


for (r=0;r<m;r++)
{
                
		
		for (s=0;s<n;s++)
                {
                cout<<"Enter the "<<r<<s<<" element: ";
                cin>>elemento;
		magoFuego magoFuego1(elemento,r,s);
		magoFuego1.hablar();
		}
}

return 0;

}




