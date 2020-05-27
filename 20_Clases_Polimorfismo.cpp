#include <iostream>

using namespace std;


class mago
{
	
	public:
	mago(int basePower,int baseHp)
	{
	power = basePower;
	hp = baseHp;
	}

	float damage()
		
	{
		return power; 

	}

	void getDamage(int value)
	{
		hp-=value;
		cout<<"Mi mago ahora tiene de vida: "<<hp<<endl;
	}
        
	void printHp()
	{
	
	cout<<hp<<endl;
	
	
	}	
	
	void pruebaHielo()
	{
	cout<<"Esta vaina es super nice..."<<endl;
	}

protected:
int power,hp;


};

class magoHielo : public mago
{
	public:
	magoHielo(int basePower,int baseHp) : mago(basePower,baseHp)
	
	{
	power = basePower + 1;
	hp = baseHp;
	
	}
};


class magoFuego : public mago
{
	public:
	magoFuego (int basePower,int baseHp) : mago(basePower,baseHp)
	
	{
	power = basePower;
	hp = baseHp + 10;
	
	}
};

int main()
{

mago* punteroMago;
mago* ptrHielo;

magoHielo arnoldo(10,10);
magoFuego gandalf(10,10);

//punteroMago = &gandalf;
//punteroMago -> getDamage(5);
gandalf.getDamage(5);

//ptrHielo = &arnoldo;
//ptrHielo -> getDamage(7);
arnoldo.getDamage(7);

//punteroMago -> printHp();
//ptrHielo -> printHp();
gandalf.printHp();
arnoldo.printHp();

return 0;
}

