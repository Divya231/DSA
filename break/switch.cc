#include<iostream>
using namespace  std;
int main()
{
    int num1,num2,sum;
    char op;
    cout<<"Enter number1 : "<<endl;
    cin>>num1;
    cout<<"Enter number2: "<<endl;
    cin>>num2;
    cout<<"Enter operator:  "<<endl;
    cin>>op;
    switch (op)
    {
    case '+':
       sum=num1+num2;
       cout<<sum<<endl;
        break;
    case '-':
       sum=num1-num2;
       cout<<sum<<endl;
       break;
    case '*':
       sum=num1*num2;
       cout<<sum<<endl;
    case '/':
        sum=num2/num1;
        cout<<sum<<endl;
       break;
    default:
        break;
    }

    return 0;
}