#include<iostream>
using namespace std;

class number1
{

public:
    int a ;
    int b ;
public:
    void accept1()
    {
        cout<<"enter two number"<<endl;
        cin>>a;
        cin>>b;
    }

    friend void operator +(number1 obj1);
};
class number2
{
5public:

    int a,b;
public:
    void accept2()
    {
        cout<<"enter Two number"<<endl;
        cin>>a;
        cin>>b;
    }

    friend void operator +(number2& obj2);
};
void operator +(number1 &n1,number2 &n2)
{
    int real,imag;
    real=n1.a+n2.a;
    imag=n1.b+n2.b;
    cout<<real<<"+i"<<imag<<endl;
}
 int main()
 {
     number1 n1;
     number2 n2;
     n1.accept1();
     n2.accept2();

     n1+n2;
     return 0;
 }
