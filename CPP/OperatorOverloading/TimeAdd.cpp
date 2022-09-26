#include<iostream>
using namespace std;

class Time1
{

public:
    int H ;
    int M,S ;
public:
    void accept1()
    {
        cout<<"enter the  H1"<<endl;
        cin>>H;
        cout<<"enter the M1"<<endl;
        cin>>M;
        cout<<"enter the S1"<<endl;
        cin>>S;
    }

    friend void operator +(Time1 obj1);
};
class Time2
{
public:

    int H,M,S;
public:
    void accept2()
    {
     cout<<"enter the  H2"<<endl;
        cin>>H;
        cout<<"enter the M2"<<endl;
        cin>>M;
        cout<<"enter the S2"<<endl;
        cin>>S;
    }

    friend void operator +(Time2& obj2);
};
void operator +(Time1 &n1,Time2 &n2)
{
   int hr,mi,sec;
   hr=n1.H+n2.H;
   mi=n1.M+n2.M;
   sec=n1.S+n2.S;


if(sec>=60)
{
    sec=sec-60;
    mi++;
}
 if(mi>=60)
{
    mi=mi-60;
    hr++;
}
cout<<hr<<":"<<mi<<":"<<sec<<endl;
}
 int main()
 {
     Time1 n1;
     Time2 n2;
     n1.accept1();
     n2.accept2();

     n1+n2;
     return 0;
 }
