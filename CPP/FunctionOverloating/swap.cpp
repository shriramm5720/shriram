#include<iostream>
using namespace std;
class number
{

public:
    void swap(int a,int b)
    {
      int temp;
      temp=a;
      a=b;
      b=temp;
      cout<<"a="<<a<<"b="<<b;
    }
    void display(float a,float b)
    {
       float temp;
      temp=a;
      a=b;
      b=temp;
      cout<<"a="<<a<<"b="<<b;
    }
};


int main()
{
   number n;
   n.display(10,52);
   n.display(100.20f,52.3f);

}
