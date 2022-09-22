#include<iostream>
using namespace std;
class cont
{
int no;
int marks;
int sno;
int smarks;

public:
    cont(int a,int b)
    {
        no=a;
        marks=b;
    }
        cont(class cont &s)
    {
        sno=s.no;
        smarks=s.marks;
    }
    void display()
    {
        cout<<sno<<"\t"<<smarks<<endl;
    }
};
int main()
{
    class cont s(232,30);
    //s.display();
    class cont s1(s);
    s1.display();
}
