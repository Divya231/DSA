#include<iostream>
using namespace std;
int main()
{
    // pre increment and post increment
    int a=10, b;
    cout<<"Value of a : "<<a<<endl;
    b=++a;
    
    cout<<"Preincremnt: "<<"Value of a:" <<a<<endl<<"Value of b: " <<b<<endl;
    int c=30,d;
    d=c++;
    cout<<"Post increment:"<<"Value of c: "<<c<<endl<<"Value of d: "<<d<<endl;
    int num=1;
    //1 -->2 --->3--->4

    //Check from left to right
    num=num++ + ++num;
    cout<<"addition of num : "<<num<<endl;

    int m,n,l;
    m=1,n=2;
    l=m+n+m++ + n++ + ++m + ++n;
    cout<<"Value of l : "<<l<<endl;
    return 0;
}
