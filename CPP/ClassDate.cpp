#include<iostream>
using namespace std;
class Date
{
private:
    int day;
    int mon;
    int year;
    public:
    void accept()
    {
     cout<<"enter the day\n";
     cin>>day;
     cout<<"enter the month\n";
     cin>>mon;
     cout<<"enter the year\n";
     cin>>year;
    }
    public:
    void display()
    {
        cout<<"DD:MM:YYYY"<<endl;
        cout<<day<<":"<<mon<<":"<<year<<endl;

    }
};
int main()
{
    class Date s;
    s.accept();
    s.display();
}

