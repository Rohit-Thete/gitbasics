#include<iostream>
using namespace std;
void prime(int n)
{
	if(n<=1)
	return false;
	if (n<=3)
	return true;
	if(n%2==0 || n%3==0)
	return false;
for(i=5;i*i<=n;i+=6)
{
	if(n%i==0 || n%(i+2)==0)
	return false;
	
}
return true;
}
  main()
  {
  	int num;
  	cout<<"\n enter no.";
  	cin>>num;
  	if(prime(num))
  	{
  		cout<<num<<"is prime no."<<endl;
  		
	  }
	  else
	  {
	  
	  	cout<<num<<"is not a prime no."<<endl;
	  }
  		
  }