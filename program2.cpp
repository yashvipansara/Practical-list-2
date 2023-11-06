//Write a C++ program to access static variable using scope resolution operator with using class.
//220130318046
//pansara yashvi
#include<iostream>
using namespace std;

class student
{
	static int n1;
	public:
		static int n2;
void fun(int n1)
{
	cout<<"the value of the static integer n1::"<<student::n1;
	cout<<"\n the value of the local variable n1::"<<n1;
		}
};

int student ::n1=5;
int student ::n2=10;
int main()
{
	student b;
	int n1=15;
	b.fun(n1);
	cout<<"\n the value of the base :: n2="<<student::n2;
	
	return 0;
}
	

		

