//Write a C++ program to define a function outside the class using scope resolution operator.
//220130318046
//pansara yashvi
#include<iostream>
using namespace std;

class temp
{
    public:
		void fun();
};

int main()
{
	A a;
	a.fun();
	
	return 0;
}
void A::fun()
{
	cout<<"Hello welcome to DSU"<<endl;
	
}
		
