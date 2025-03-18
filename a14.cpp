#include<iostream>
using namespace std;
void printcubes(int n);
 main()
{
	int i;
	for(i=1;i<=5;i++)
	{
		printcubes(i);
		
	}
}
	
	void printcubes(int n){
		int cube=n*n*n;
		cout<<"\n the cube of "<<n<<" is "<<cube;
	}
