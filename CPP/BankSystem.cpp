#include<iostream>
using namespace std;
class Bank
{
    string name,atype;
    int amt;
    int acno;
    float bal;

    public:
     Bank(string a,string b,int c,float d)
    {
        name=a;
        atype=b;
        acno=c;
        bal=d;
    }
    void Deposite()
    {
        cout<<"Enter the Deposite Amount\n";
        cin>>amt;
        bal=bal+amt;

    }
    void Wamt()
    {

        cout<<"Enter the withdrawal  Amount\n";
        cin>>amt;
        if(bal>=amt)
        {
            bal=bal-amt;
        }else
        {
            cout<<"Insufficient Balance";
        }

    }
    void Bal()
    {
        cout<<"balance amout="<<bal<<endl;
    }
};
int main()
{
    int n;
    Bank s("shriram","saving",120,1500);

    cout<<"1: Deposite Amount\n";
    cout<<"2: Withdrawal Amount\n";
    cout<<"3: Bal Amount\n";
    cin>>n;
    switch(n)
    {
        case 1:
            s.Deposite();
            s.Bal();
            ; break;
        case 2:s.Wamt(); s.Bal(); break;
        case 3:s.Bal(); break;
        default:cout<<"Wrong Option";
    }
