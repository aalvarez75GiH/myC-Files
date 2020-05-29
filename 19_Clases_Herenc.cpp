#include <iostream>

using namespace std;


class mago{

	protected:
         int cantM,vidaM,poderM;

	public:
         //int cantM,vidaM,poderM;
	 mago(int c, int v, int p){
	       cantM = c;
	       vidaM = v;
	       poderM=p;
	 
	 }
	
	void magia(){

	cout<<"Mago 1 tiene una cantidad de magia de: "<<cantM<<endl;
	cout<<"Mago 1 tiene una cantidad de vida de: "<<vidaM<<endl;
	cout<<"Mago 1 tiene una cantidad de poder de: "<<poderM<<endl;

	
	}	
   int setCantM(int newCantM){
      cantM = newCantM;
   } 
   };

class magoHielo: public mago //Aqui heredo la informacion publica de la clase Mago 
{
	public:
	 magoHielo(int c, int v, int p):mago(c,v,p)
	{

               cantM = c + 10;
               vidaM = v + 10;
               poderM= p + 10;
	}


 	void magia()
	{

        cout<<"Mago 2 tiene una cantidad de magia de: "<<cantM<<endl;
        cout<<"Mago 2 tiene una cantidad de vida de: "<<vidaM<<endl;
        cout<<"Mago 2 tiene una cantidad de poder de: "<<poderM<<endl;

}
};


int main()
{

mago mago1(10,10,10);
magoHielo mago2(10,10,10);
mago1.setCantM(90);
mago2.setCantM(90);
mago1.magia();
mago2.magia();



return 0;
}

