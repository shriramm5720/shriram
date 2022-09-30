#include<fstream>
#include<iostream>
//#include<ifstream>
using namespace std;
int main()
{
    fstream fp;
    char ch;
    int count=0;
    fp.open("a.txt",ios::in);
    while(!fp.eof())
    {

        fp>>ch;
        if((ch=='a')||(ch=='e')||(ch=='i')||(ch=='o')||(ch=='u'))
        {
            count++;
        }


    }
    cout<<count;
    fp.close();
}

