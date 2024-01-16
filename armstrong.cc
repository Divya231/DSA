#include<iostream>
#include<cmath> // Use <cmath> for pow function
using namespace std;

int main()
{
    int n, original;
    cout << "Enter a number: ";
    cin >> n;
    original = n;
    int sum = 0;

    while (n > 0)
    {
        int last_digit = n % 10;
        sum = sum + pow(last_digit, 3);
        n = n / 10;
    }

    if (sum == original)
    {
        cout << original << " is an Armstrong number." << endl;
    }
    else
    {
        cout << original << " is not an Armstrong number." << endl;
    }

    return 0;
}
