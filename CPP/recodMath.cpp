#include<iostream>
using namespace std;
class Team{
char cname[10],pname[10];
int mtc;
float batavg,ballavg;

public:
    void accept()
    {
        cout<<"Enter the country name";
        cin>>cname;
        cout<<"Enter the player name";
        cin>>pname;
        cout<<"Enter the matches";
        cin>>mtc;
        cout<<"Enter the bating avg";
        cin>>batavg;
        cout<<"Enter the balling avg";
        cin>>ballavg;
    }
    void display()
    {
        cout<<cname<<"\t"<<pname<<"\t"<<mtc<<"\t"<<batavg<<"\t"<<ballavg<<endl;
    }

};
int main()
{
    int i,n;
    class Team s1[10];
    cout<<"Enter the No of player";
    cin>>n;
    for(i=0;i<n;i++)
    {
        s1[i].accept();
    }
     cout<<"cname"<<"\t"<<"sname"<<"\t"<<"mtc"<<"\t"<<"batavg"<<"\t"<<"ballavg"<<endl;
    for(i=0;i<n;i++)
    {
        s1[i].display();
    }

}
