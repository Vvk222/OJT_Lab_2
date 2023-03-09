#include <iostream>
using namespace std;
class person
{
public:
    char name[20];
    int age;
    void getdata();
    void display();
};
void person::getdata()
{
    cout << "Enter name:";
    cin >> name;
    cout << "Enter age:";
    cin >> age;
}
void person::display()
{
    cout << "Name is." << name;
    cout << "\nAge is." << age;
}
int main()
{
    person p;
    p.getdata();
    p.display();
    return 0;
}