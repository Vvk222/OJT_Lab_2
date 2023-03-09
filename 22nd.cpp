#include <iostream>
using namespace std;
class demo
{
    int x, y, z;

public:
    void getdata(int a, int b, int c);
    void display();
    void operator-();
};
void demo::getdata(int a, int b, int c)
{
    x = a;
    y = b;
    z = c;
}
void demo::display()
{
    cout << "Value of x = " << x << " y = " << y << " z = " << z << endl;
}
void demo::operator-()
{
    x = -x;
    y = -y;
    z = -z;
}
int main()
{
    demo d;
    d.getdata(10, -20, 30);
    d.operator-();
    d.display();
    return 0;
}