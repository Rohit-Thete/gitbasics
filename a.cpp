#include<iostream>
using namespace std;
main()
{
	char s[50];
    int len,i;
	cout<<"\n enter the string=";
	gets(s);
	cout<<"\nName="<<s;
	len=strlen(s);
	cout<<"\n length="<<len;
	for(i=0;i<=len;i++)
	{
		cout<<"\nstring["<<i<<"]="<<s[i];
	}
}