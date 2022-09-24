#include<iostream>
using namespace std;
class number
{
  static int a;
public:
     void display(void)
    {
        //a=10;
        cout<<"a="<<a;
    }
};
int number :: a=10;

int main()
{
   number n;
   n.display();

}
