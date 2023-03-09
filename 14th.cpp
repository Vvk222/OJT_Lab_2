#include <iostream>
using namespace std;
class line
{
    double len;

public:
    void setlength(double len);
    double getlength();
    line(double len);
};
line::line(double len)
{
    cout << "length is.." << len;
}
double line::getlength()
{
    return len;
}
void line::setlength(double len)
{
    cout<<"\n New length is..."<<len;
}
int main()
{
    line line(50.2);
    //line.getlength();
    //cout << "\nNew length of line:";
    line.setlength(70);
    line.getlength();
    return 0;
}