// class to basic type conversion
#include <iostream>
using namespace std;
class sample
{
    float a;

public:
    sample()
    {
        a = 10.25;
    }
    operator int()
    {
        int x;
        x = a;
        return a;
    }
};
int main()
{
    sample s;
    int y = s;
    cout << "\ty = " << y << endl;
    return 0;
}