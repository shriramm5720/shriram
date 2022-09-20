#include<iostream>
using namespace std;
void display(int &a)
{
    cout<<"a="<<a<<endl;
    a=55;

}
int main()
{
    int x=10;
    cout<<"x="<<x<<endl;
    display(x);
    cout<<"x="<<x<<endl;
}
