#include<iostream>
using namespace std;
main()
{
	int p,n ;
	float r,si,amount;
	cout<<"\n Enter the value for p r & n" ;
	cin>>p>>r>>n ;
	si=p*r*n/100 ;
	amount= p+si ;
	cout<<"\n SI ="<<si ;
	cout<<"\n Amount ="<<amount ;
}