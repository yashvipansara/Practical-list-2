#include<iostream>
using namespace std;
int area(float,float p=3.14);
int main()
{
	float r;
	cout<<"enter the value of radius::";
	cin>>r;
	cout<<"area of the circle::"<<area(r)<<endl;
	
	return 0;
}
int area(float rad,float p1)
{
	return(p1*rad*rad);
}
