#include <iostream>
using namespace std;

int main()
{
    char op;
    int x,y;
    cout << "Enter operator either + or - or * or /: ";
    cin>>op;
    cout << "Enter two operands: ";
    cin>>x>>y;

    if(op=='+')
    {
        cout<< x+y <<"\n";
    }
        if(op=='-')
    {
        cout<< x-y <<"\n";
    }
        if(op=='*')
    {
        cout<< x*y <<"\n";
    }
        if(op=='/')
    {
        cout<< x/y <<"\n";
    }
    return 0;
}
