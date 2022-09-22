#include<iostream>
using namespace std;
class contruct
{
    int sno;
    string sname;
    float per;
    public:
    contruct(int a,string b,float c)
    {
        sno=a;
        sname=b;
        per=c;
    }
    void display()
    {
        cout<<sno<<"\t"<<sname<<"\t"<<per;
    }
        void di()
    {
        cout<<sno<<"\t"<<sname<<"\t"<<per;
    }
    ~contruct()
    {
        cout<<"CleaR ALL meMORY";
    }
};
int main()
{
    contruct s(10,"Shriram",20.3);
    s.display();
    s.di();
}

