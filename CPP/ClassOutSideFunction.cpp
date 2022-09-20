#include<iostream>
using namespace std;
class stud
{
private:
    int sno;
    char sname[10];
    float per;
    public:
        void accept();
        void display();
};
  void stud:: accept()
    {
     cout<<"enter the stud no\n";
     cin>>sno;
     cout<<"enter the stud name\n";
     cin>>sname;
     cout<<"enter the stud per\n";
     cin>>per;
    }

    void stud ::display()
    {
        cout<<"No="<<sno<<endl;
        cout<<"Name="<<sname<<endl;
        cout<<"per="<<per<<endl;
    }

int main()
{
    class stud s;
    s.accept();
    s.display();
}

