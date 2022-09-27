#include<iostream>
using namespace std;
int main()
{
    string s;
    int i;
    cout<<"Enter the String\n";
    cin>>s;

    try
    {
       i=0;
       while(s[i]!='\0')
             {
                    if((s[i]>='0')&&(s[i]<='9'))
                      {
                          throw("fh");
                      }else
                      {
                          cout<<s[i];
                      }
                 i++;
             }
    }catch(...)
    {
        cout<<"\n error"<<endl;
    }
    cout<<"program End";
}

