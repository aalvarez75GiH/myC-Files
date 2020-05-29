#include <iostream>

using namespace std;


class dog{


	public:

	
	string mName;
	string mBark;
	
	dog(string name,string BarkType){
	
	 mName = name;
	 mBark = BarkType;
	
	}


string getName(){

return mName;


}

string setName(string newName){

       	mName = newName;
	//return newName;

}

void getBark(){

cout<<" tiene este ladrido: "<<mBark<<endl;

}

string setBark(string newBark){

       	mBark = newBark;
	//return newName;
}



	private:
	/*string mName;
	string mBark;*/

};


int main()
{

	dog dog1("Toty","guau");
	//dog dog2("firulai","woof");
	dog1.mName = "El Perro";
	//dog1.setBark("wiiiii");
	cout<<" El Perro "<<""<<dog1.mName<<"";dog1.mBark;
        //dog2.setName("Sarah");	
        //dog2.setBark("wooooffff");	
	//cout<<" El Perro "<<""<<dog2.getName()<<"";dog2.getBark();
    

return 0;
}

