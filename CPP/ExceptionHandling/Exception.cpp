#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"Enter the number";
    cin>>a;

    try
    {
        cout<<"Try start"<<endl;
        if(a<0)
        {
            throw(1);
        }
        else
        {
            cout<<"a="<<a<<endl;
        }
    }catch(int a)
    {
        cout<<"error"<<endl;
    }
    cout<<"program End";
}
