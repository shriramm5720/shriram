#include<iostream>
using namespace std;
template <class T1,class T2> class number
{
public:
    void add(T1 a,T2 b)
    {
        cout<<"int="<<a<<endl;
        cout<<"str="<<b<<endl;
    }
};
int main()
{
    number<int, string> n1;

    n1.add(10,"dhd");

}

