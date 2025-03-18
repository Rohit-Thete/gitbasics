#include<iostream>
using namespace std;
main()
{
	int a,b,choice;
	cout<<"Enter 2 no.";
	cin>>a>>b;
	cout<<"1. addition \n2.substraction \n3.multiplcaion \n4.division ";
	 cout<<"enter the choice";
	 
	 switch(choice)
	 {
	 	case 1:
	 		cout<<"\n Addition"<<a+b;
	 		break;
	 		case 2:
	 		cout<<"\n Substraction"<<a-b;
	 		break;
	 		case 3:
	 		cout<<"\n Multiplication"<<a*b;
	 		break;
	 		case 4:
	 		cout<<"\n Division"<<a/b;
	 		break;
	 		default;
	 	
	 }
}