#include<iostream>
using namespace std;
main()
{
	int a=1,n,odd=0,even=0;
	cout<<"\n enter 5 no.";
	while(a<=5)
	{
			cout<<"\n enter no.";
	cin>>n;
	if(n%2==0)
	even=even+n;
	else
	odd=odd+n;
	cout<<"\n even="<<even;
	cout<<"\n odd="<<odd;
	a++;
	}
}