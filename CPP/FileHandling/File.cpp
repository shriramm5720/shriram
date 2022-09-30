#include<fstream>
#include<iostream>
//#include<ifstream>
using namespace std;
int main()
{
    fstream fp;
    char ch;
    fp.open("a.txt",ios::in);
    while(!fp.eof())
    {

        fp>>ch;
        cout<<ch;

    }
    fp.close();
}

