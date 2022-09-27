#include<iostream>
using namespace std;
int main()
{
    int n,d;
    cout<<"Enter the numerator\n";
    cin>>n;
    cout<<"Enter the deno";
    cin>>d;
    try
    {
        cout<<"Try start"<<endl;
        if(d<0)
        {
            throw(1);
        }
        else
        {
            cout<<"Div="<<n/d<<endl;
        }
    }catch(int a)
    {
        cout<<"error"<<endl;
    }
    cout<<"program End";
}
