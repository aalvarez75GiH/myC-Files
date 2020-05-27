#include <iostream>

using namespace std;

class cat{
public:
	string name;
        string edad;
	string color;
        string comp;
	
	cat(string name1,string edad2,string color2){

	   	name = name1;
		edad = edad2;
		color = color2;
	}
	
	cat(string name2,string edad3,string color3,string comp1){
		name = name2;
		edad = edad3;
		color= color3;
		comp = comp1;
	       	
	}	
	
void hablar(){

cout<< name <<"  tiene  "<<edad<<"  Y es de color  "<<color<<"  tambien es "<<comp<<endl;
}

void GA(){
cout<<"El Gato raro de nombre  "<<name<<" es de Comportamiento: "<<comp<<endl;

}
};




int main(){


	cat cat1("Ashley","26 anios","catire");//Es como si fuera MyFirstCat = new(cat);s
	cat cat2("Loreli","12 anios","rubio");
	cat cat3("Kris","41 anios","negro");
        cat cat4("Arnoldo","44 anios","Marron","Agresivo");
	cat1.hablar();
	cat2.hablar();
        cat3.hablar();
        cat4.hablar();
        cat4.GA();
	cat1.GA();
return 0;
}











