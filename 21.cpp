#include<iostream>
using namespace std;
main()
{
	int i,j,n;
	cout<<"\n enter the limit";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
		
		cout<<" * ";
	}

	cout<<"\n";
}
	for(i=n-1;i>=1;i--)
	{
		for(j=1;j<=i;j++)
		{
		
		cout<<" * ";
	}

	cout<<"\n";
}
}