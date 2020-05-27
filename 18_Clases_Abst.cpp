#include <iostream>

using namespace std;


class human{


	public:
	
        int age;
	human(int spawnAge){
	   
	   age = spawnAge;
	 
      	}
	
	void think(){
	
	cout<<getThinkMessage()<<endl;
	
	}
	
	
	private:

	int socialLevel = 0;
	int inteligence = 20;
	int luck = 0;

	string getThinkMessage(){
	
	if (socialLevel + luck > 100){
		//cout<<"Estoy teniendo pensamientos felices :D"<<endl;
		return  "Estoy teniendo pensamientos felices :D";
	}	
	
	if (luck > inteligence) {
		return "Soy un suertudo :)";
		//cout<<"Soy un suertudo :D"<<endl;
	} 
	
	if (age >18){
	
	 	return "Soy Mayor de edad...";
		//cout<<"Estoy teniendo pensamientos felices :D"<<endl;
	}

	}
    
};


int main()
{

    human arnoldo(44);
    arnoldo.think();






return 0;
}

