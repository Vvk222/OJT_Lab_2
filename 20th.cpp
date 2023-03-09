#include <iostream>
using namespace std;
class A
{
public:
    int numA;
    void setA()
    {
        numA = 15;
    }
};
class B
{
public:
    int numB;
    void setB()
    {
        numB = 10;
    }
};
int add(A a, B b)
{
    return (a.numA + b.numB);
}
int main()
{
    A a;
    B b;
    a.setA();
    b.setB();
    cout << "Addition is:" << add(a, b);
    return 0;
}