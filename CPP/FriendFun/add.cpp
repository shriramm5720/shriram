#include<iostream>
using namespace std;
class num
{
int a,b;
public:
    void get()
    {
        cin>>a;
        cin>>b;
    }
    friend void add(num &);

};
void add(num &n1)
{
    int c;
    c=n1.a+n1.b;
    cout<<"sum="<<c;
}
int main()
{
    num n;
    n.get();
    add(n);
}
