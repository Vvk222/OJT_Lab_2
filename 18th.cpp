#include <iostream>
using namespace std;
class static_Demo
{
public:
    static int count;
};
int static_Demo::count = 50;
int main()
{
    cout << "Value of count is:" << static_Demo::count;
    return 0;
}