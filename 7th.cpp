#include<iostream>
using namespace std;
int main()
{
    int n,i;
    cout<<"Enter the number for which the table you want...";
    cin>>n;
    for ( i = 1; i < 11; i++)
    {
        cout<<"\n"<<n<<" X "<<i<<" = "<<n*i;
    }
    return 0;
}