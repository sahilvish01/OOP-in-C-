#include<iostream>
using namespace std;

int sum(int a, int b)
{
    // cout << "Sum : " << a + b;  : When RT is void 
    
    return (a+b);
}
int main()
{
    int num1,num2;

    cout << "Enter Two numbers : ";
    cin >> num1 >> num2;
    cout << "Sum : "<<  sum(num1, num2);
}