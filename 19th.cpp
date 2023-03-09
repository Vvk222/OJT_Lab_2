#include <iostream>
using namespace std;
int count = 0;
class item
{
    int num, a;

public:
    void getdata(int num);
    void getcount();
};
void item::getdata(int num)
{
    a = num;
    count++;
}
void item::getcount()
{
    cout << "Count is.." << count << endl;
}
int main()
{
    item a, b, c;
    a.getcount();
    b.getcount();
    c.getcount();
    cout << "After getting count..\n";
    a.getdata(10);
    b.getdata(19);
    c.getdata(20);
    a.getcount();
    b.getcount();
    c.getcount();
    return 0;
}