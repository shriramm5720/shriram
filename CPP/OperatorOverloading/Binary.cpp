#include<iostream>
using namespace std;

class number1
{


    int a ;
public:
    void accept1()
    {
        cout<<"enter the number"<<endl;
        cin>>a;
    }
    void display1()
    {
        cout<<"a="<<a<<endl;
    }
    friend void operator +(number1 obj1);
};
class number2
{
//public:

    int b;
public:
    void accept2()
    {
        cout<<"enter the  number"<<endl;
        cin>>b;
    }
    void display2()
    {
        cout<<"b="<<b<<endl;
    }
    friend void operator +(number2& obj2);
};
void operator +(number1 &n1,number2 &n2)
{
    int c;
    c=n1.a+n2.b;
    cout<<"add="<<c<<endl;
}
 int main()
 {
     number1 n1;
     number2 n2;
     n1.accept1();
     n2.accept2();
     n1.display1();
     n2.display2();
     n1+n2;
     return 0;
 }
