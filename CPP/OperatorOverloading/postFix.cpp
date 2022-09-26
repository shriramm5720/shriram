


/*In C++, we can make operators work for user-defined classes.
This means C++ has the ability to provide the operators with a special meaning for a data type,
this ability is known as operator overloading.
*/

#include<iostream>
using namespace std;
class number
{
    int n=10;
public:
    void operator +()
    {
        n=-n;
    }
    void display()
    {
        cout<<"No="<<n<<endl;

    }
};
int main()
{
    number n1;
   +n1;
    n1.display();
}
