#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str;
    cout<<"Enter string";
    getline(cin,str);
    for (int i = str.length()-1;i >=0; i=i-1)
    {
        cout<<str[i];
    }
    return 0;

}