#include<fstream>
#include<iostream>
//#include<ifstream>
using namespace std;
int main()
{
    fstream fp1,fp2;
    char ch;

    fp1.open("a.txt",ios::in);
    fp2.open("b.txt",ios::out);
    while(!fp1.eof())
    {

        fp1>>ch;
        fp2<<ch;





    }
//    cout<<count;
    fp1.close();
    fp2.close();
}

