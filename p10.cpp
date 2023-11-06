//Write a C++ program to demonstrate use of call by reference.
//220130318046
//pansara yashvi
#include<iostream>
using namespace std;
 void swap(int &,int &);
 int main()
 {
 	int a=10,b=20;
 	
 	cout<<"Before swapping ::"<<a<<"&"<<b<<endl;
 	swap(a,b);
 	cout<<"After swapping::"<<a<<"&"<<b<<endl;
 	
 	return 0;
 }
 void swap(int &p,int &q)
{
 	int temp=p;
 	p=q;
 	q=temp;
}
