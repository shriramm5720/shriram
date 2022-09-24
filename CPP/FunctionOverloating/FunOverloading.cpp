#include<iostream>
using namespace std;
class number
{

public:
    void display(int a,int b)
    {
        cout<<"int sum="<<a+b<<endl;
    }
    void display(float a,float b)
    {
        cout<<"float sum="<<a+b;
    }
};


int main()
{
   number n;
   n.display(10,52);
   n.display(10.20f,52.3f);

}
