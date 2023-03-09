#include <iostream>
using namespace std;
class person
{
    char name[20];
    int age;

public:
    person()
    {
        cout << "Enter name:";
        cin >> name;
        cout << "Enter age:";
        cin >> age;
    }
    void display();
};
void person::display()
{
    cout << "name is.." << name;
    cout << "\nAge is.." << age;
}
int main()
{
    person p;
    p.display();
    return 0;
}