#include<iostream>
using namespace std;
class number
{
//public:
     //static int a=10;
   static int a=10;
public:

    static void display(void)
    {
        cout<<"a="<<a;
    }
};


int main()
{
   number n1;
   n1.display();


}
