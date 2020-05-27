#include <iostream>

using namespace std;
int main()
{

int m,n;

cout<<"Enter the size of the Array: "<<endl;
cin>>m>>n;

char array[m][n];
int i,j;
cout<<"Enter the Array Element: "<<endl;
for(i=0;i<m;i++)
{
	for (j=0;j<n;j++)
	{
	
	cout<<" Enter the "<<i<<j<<" Element ";
	cin>>array[i][j];
	
	}

}

for(i=0;i<m;i++)
{
	for (j=0;j<n;j++)
	{
	
	cout<<array[i][j]<<" ";
	}

	cout<<endl;
}

return 0;
}

