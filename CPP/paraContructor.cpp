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
};
int main()
{
    contruct s(10,"Shriram",20.3);
    s.display();
}

