#include<iostream>
using namespace std;
int main(){
    int i,n,sum=0;
    cout<<"Enter the numbers : ";
    cin>>n;
    for (i=1;i<=n;i++)
    {
        cout<<i<<endl;
        sum=sum+i;
        cout<<sum<<endl;
    }
    return 0;
}