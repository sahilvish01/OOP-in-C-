#include<iostream>
using namespace std;

int main()
{
    int num;

    cout << "Enter a number : ";
    cin >> num;

    if(num > 0)
    {
        cout << "Positve";
    }
    else if(num < 0)
    {
        cout << "Negative";
    }
    else
    {
        cout << "Zero";
    }
}
