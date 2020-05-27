#include <iostream>

using namespace std;

void PrintStory(char resp){

/*switch (resp){
        case 'k':
          cout<<"Your choice was Keys"<<endl;
          break;
        case 'p':
          cout<<"Your choice was Pants"<<endl;
          break;
        case 'w':
          cout<<"Your choice was Wallet"<<endl;
          break;
        case 'd':
          cout<<"Your choice was Door"<<endl;
          break;
        }*/
        

	if (resp == 'k'){

          cout<<"IF Conditional"<<endl;
          cout<<"Your choice was Keys"<<endl;
          }

	  else if(resp == 'p'){
          
	  cout<<"IF Conditional"<<endl;
          cout<<"Your choice was Pants"<<endl;
	  }
	  	else if(resp == 'w'){
          	cout<<"IF Conditional"<<endl;
          	cout<<"Your choice was Wallet"<<endl;
		}
		else if(resp == 'd'){
          
		  cout<<"IF Conditional"<<endl;
          	  cout<<"Your choice was Door"<<endl;
	    }
	}





int main()
{
//contando la historia:
char option;

cout<<"You wake up in the middle of the night and realize that you are not in your apartment. Fuck! Where I am ;(??"<<endl;
cout<<"realize that you you were involved in a huge Party and there are more people surrounding you, they are slept"<<endl;
cout<<"You don't know what to do, you dont know these people, so you have different options..."<<endl;
cout<<"You can see the (K)eys of your car, you can see your (P)ants, your (W)allet with no money and a (D)oor near to you"<<endl;
cout<<"So What do you do first??"<<endl;
cout<<"Grabb your (K)eys??"<<endl;
cout<<"Grabb your (P)ants??"<<endl;
cout<<"Grabb your (W)allet??"<<endl;
cout<<" Use  the  (D)oor??"<<endl;
cin>>option;
	
PrintStory(option);
	

return 0;
}

