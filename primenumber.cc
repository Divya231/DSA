// #include<iostream>
// using namespace std;
// int main()
// {
//     int num,flag=0;
//     cout<<"Enter number to check whether a number is prime or not" ;
//     cin>>num;
//     for (int i=2;i<num;i++)
//     {
//         if(num%i==0)
//         {
//             cout<<"number is non prime"<<num;
//             flag=1;
//             break;
//         }
//     }
//         if(flag==0)
//         {
//             cout<<"Prime Number"<<num<<endl;
//         }
//     }



#include<iostream>
using namespace std;
int main()
{
    int num,i,flag=0;
    cout<<"Enter num"<<endl;
    cin>>num;
    for(i=2;i<num;i++)
    {
        if (num%i==0)
        {
            cout<<"Non-prime";
            flag=1;
            break;
        }
    }
        if(flag==0)
        {
            cout<<"Prime";
        }

}