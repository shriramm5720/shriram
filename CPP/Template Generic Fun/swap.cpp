#include<iostream>
using namespace std;
template <class T>
void add(T a,T b)
{
    cout<<"add="<<a+b<<endl;

}
int main ()
{
    add(10,12);
    add(10.2,65.4);

}
