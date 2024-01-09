#include<iostream>
using namespace std;
int main(){
    int savings;
    cout<<"Enter saving amount"<<endl;
    cin>>savings;
    if (savings>=5000){
        cout<<"Going party with friends";
    }
    else if(savings>=2000)
    {
        cout<<"Going party with sister";
    }
    else
    {
        cout<<"No party";
    }
}