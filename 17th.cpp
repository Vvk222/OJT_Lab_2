#include <iostream>
using namespace std;
int count = 0;
class Num
{

public:
    Num()
    {
        count++;
        cout << "\nConstructor is called:" << count << endl;
    }
    ~Num()
    {
        cout << "\nDestructor is called:" << count << endl;
        --count;
    }
};
int main()
{
    Num n1, n2, n3;
    /*cout << "\nInside main";
    cout << "\ncreating objects:";
    Num n1;
    {
        cout << "\ncreating two objects:";
        Num n2, n3;
    }
    cout << "\nback to main";*/
    return 0;
}