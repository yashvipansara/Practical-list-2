//.Write a C++ program to calculate cube of a given number using inline function.
//220130318046
//pansara yashvi
#include<iostream>
using namespace std;
inline int cub (int);
int main()
{
    int a;
    cout<<"Enter the number ::";
    cin>>a;
    cout<<"Cube is :: "<<cub(a);
    cub(a);
    return 0;
}
inline int cub (int a)
{
    return a*a*a;
}
