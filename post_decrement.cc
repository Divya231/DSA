#include<iostream>
using namespace std;
int main()
{
    int i=0;
    i=i++ - --i+ ++i - i--;
    cout<<"Value of i : "<<i<<endl;
}