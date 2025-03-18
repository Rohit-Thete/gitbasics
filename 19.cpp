#include<iostream>
using namespace std;
main()
{
	int a,fact=1,n;
	cout<<"enter the no.";
	cin>>n;
	for(a=1;a<=n;a++)
	{
		fact=fact*a;
		
	}
	cout<<"\n factorial"<<fact;
	for (a=1;a<=n;a--)
	{
		fact=fact*a;	
	}
	cout<<"\n factorial"<<fact;
	
}