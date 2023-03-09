#include <iostream>
using namespace std;
class number
{
    int a, num;

public:
    number()
    {
        a=0;
    }
    number(int num)
    {
        //cout<<"copy constructor is called..."<<endl;
        a = num;
    }
    number(number &obj)
    {
        cout<<"\ncopy constructor is called..."<<endl;
        a = obj.a;
    }
    void display()
    {
        cout << "\nNumber is " << a;
    }
};
int main()
{
    number x(9), y(10), z(8);
    x.display();
    y.display();
    z.display();
    number z1(y);
    z1.display();
    return 0;
}