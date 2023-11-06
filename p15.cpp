//.Write a C++ program to calculate square of a given number using inline function.
//220130318046
//pansara yashvi
#include<iostream>
using namespace std;
inline int square (int);
int main()
{
    int a;
    cout<<"Enter the number ::";
    cin>>a;
    cout<<"Cube is :: "<<square(a);
    square(a);
    return 0;
}
inline int square (int a)
{
    return a*a;
}
