#include<iostream>
using namespace std;

class student
{
    private :

    char name[20];
    int roll;
    int age;
    float per;

    public : 

    void getstudent()
    {
        cout << "Enter the info. of student : ";
        cin >> name >> roll >> age >> per;
    }

    void display()
    {
        cout << "Name : " << name << endl;
        cout << "Roll No. : " << roll << endl;
        cout << "Age : " << age << endl;
        cout << "Percentage : " << per << endl;
    }
};

int main()
{
    student s;

    s.getstudent();
    s.display();

}