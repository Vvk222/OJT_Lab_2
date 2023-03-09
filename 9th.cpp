#include <iostream>
using namespace std;
class set
{
public:
    int m, n, b;
    void input();
    void display();
    void largest();
};
void set::input()
{
    cout << "M = ";
    cin >> m;
    cout << "N = ";
    cin >> n;
}
void set::largest()
{
    if (m > n)
    {
        b = m;
    }
    else
    {
        b = n;
    }
}
void set::display()
{
    cout << b << " is greatest number";
}
int main()
{
    set s;
    s.input();
    s.largest();
    s.display();
    return 0;
}