#include<iostream>
using namespace std;
int print(int a,int b)
{
    if((a<0)||(b<0))
    {
        throw (1);

    }else
    {
        cout<<"add="<<a+b<<endl;
    }
}
int main()
{
    try
    {
        print(20,9);
    }catch(...)
    {
        cout<<"Exception from Print Fun";
    }
}
