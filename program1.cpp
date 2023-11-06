//Write a C++ program to access global variable using scope resolution operator without using class.
//220130318046
//pansara yashvi
#include<iostream>
using namespace std;

int j=10;  //local varivable
int main()
{
	int j=20;  //global variabal
	
	cout<<"value of j is ::(local variable)"<<j<<endl;
	cout<<"value of j is::(global variable)"<<::j<<endl;  //using scope resolution
	
	return 0;
}
