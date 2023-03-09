// class to class type conversion
#include <iostream>
using namespace std;
class Alpha
{
    int a;

public:
    Alpha(int x)
    {
        a = x;
    }
    int getvalue()
    {
        return a;
    }
};
class Beta
{
    int b;

public:
    Beta(int x)
    {
        b = x;
    }
    Beta(Alpha temp)
    {
        b = temp.getvalue();
    }
    operator Alpha()
    {
        return Alpha(b);
    }
};
int main()
{
    Alpha objA(10);
    Beta objB(objA);
    Beta objB1(20);
    objA = objB;
    cout << objA.getvalue();
    return 0;
}