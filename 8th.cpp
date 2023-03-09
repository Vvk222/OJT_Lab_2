#include <iostream>
using namespace std;
inline float mul(float x, float y)
{
    return (y * x);
    return (x * y);
}
inline double div(double p, double q)
{
    return (p / q);
}
//we can also use endl to break line
int main()
{
    float a, b;
    cout << "A = ";
    cin >> a;
    cout << "\nB = ";
    cin >> b;
    cout << "Multiplication = "<<mul(a, b);
    cout << "\n";
    cout << "Division = "<<div(a, b);
}