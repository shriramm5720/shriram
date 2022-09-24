#include<iostream>
using namespace std;
class number
{

public:
    void display(int a,int b)
    {
       if(a>b)
        cout<<"a is max"<<endl;
       else
        cout<<"b is max"<<endl;
    }
    void display(float a,float b)
    {
       if(a>b)
        cout<<"a is max";
       else
        cout<<"b is max";
    }
};


int main()
{
   number n;
   n.display(10,52);
   n.display(100.20f,52.3f);

}
