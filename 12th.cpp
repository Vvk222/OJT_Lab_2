#include <iostream>
using namespace std;
class person
{
    char name[20];
    int age;

public:
    person();
    void display();
};
person::person()
{
    cout << "Enter your name...";
    cin >> name;
    cout << "Enter Your Age...";
    cin >> age;
}
void person::display()
{
    cout << "Name is..." << name;
    cout << "\nAge is..." << age;
}
int main()
{
    person p;
    p.display();
    return 0;
}