#include<iostream>
using namespace std;
class Area
{
    public:
    float length;
    float breadth;
    float ar;

    void getdata();
    void display();
};
void Area::getdata()
{
    cout<<"Enter length = ";
    cin>>length;
    cout<<"Enter  breadth = ";
    cin>>breadth;
    ar=length*breadth;
}
void Area::display()
{
    cout<<"Area = "<<ar;

}
int main()
{
    Area A;
    A.getdata();
    A.display();
    return 0;
}