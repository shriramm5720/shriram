#include<iostream>
using namespace std;
class Time
{
private:
    int H;
    int M;
    int S;
    public:
    void accept()
    {
     cout<<"enter the Hours\n";
     cin>>H;
     cout<<"enter the Min\n";
     cin>>M;
     cout<<"enter the Sec\n";
     cin>>S;
    }
    public:
    void display()
    {
        cout<<"H:M:S"<<endl;
        cout<<H<<":"<<M<<":"<<S<<endl;

    }
};
int main()
{
    class Time s;
    s.accept();
    s.display();
}
