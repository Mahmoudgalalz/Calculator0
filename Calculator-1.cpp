#include <iostream>
using namespace std;

int main()
{
    int a,b,x,z;
    cout<< "Choose your oprator"<<"\n";
    cout<< "1-Add "<<"\n";
    cout<< "2-Substract "<<"\n";
    cout<< "3-Multiply "<<"\n";
    cout<< "4-divide  "<<"\n";
    cin>>x;
    if (x==1){
        cout<<"Add Now !"<<"\n";
            cout<<"Enter First number"<<"\n";
        cin>>a;
    cout<<"Enter second number"<<"\n";
        cin>>b;
        z=a+b;
        cout << z <<"\n";
    }

        if (x==2){
        cout<<"Substract Now !"<<"\n";
            cout<<"Enter First number"<<"\n";
        cin>>a;
    cout<<"Enter second number"<<"\n";
        cin>>b;
        z=a-b;
        cout << z <<"\n";
    }

        if (x==3){
        cout<<"Multiply Now !"<<"\n";
            cout<<"Enter First number"<<"\n";
        cin>>a;
    cout<<"Enter second number"<<"\n";
        cin>>b;
        z=a*b;
        cout << z <<"\n";
    }

        if (x==4){
        cout<<"divide Now !"<<"\n";
            cout<<"Enter First number"<<"\n";
        cin>>a;
    cout<<"Enter second number"<<"\n";
        cin>>b;
        z=a/b;
        cout << z <<"\n";
    }
    return 0;
}
