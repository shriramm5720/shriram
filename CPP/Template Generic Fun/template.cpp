#include<iostream>
using namespace std;
template <typename G>
void display(G a)
{
    cout<<"output="<<a<<endl;

}
int main ()
{
    display(10);
    display(10.2);
    display('t');
}
