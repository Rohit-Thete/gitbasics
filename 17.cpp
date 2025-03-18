#include<iostream>
using namespace std;
main()
{
	int n,sum=0;
	cout<<"\n enter the number";
	cin>>n;
	while(n>0)
	{
		sum=sum+n%10;
		n=n/10;
	
	}
          cout<<"\n sum of digits"<<sum;
}