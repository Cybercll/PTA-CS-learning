#include<iostream>
using namespace std;
int main()
{
    string a,b;
    int da,db;
    int pa=0,pb=0;
    cin>>a>>da>>b>>db;
    for (int i = 0; i < a.length(); i++)
    {
        if (a.at(i)=='0'+da)
        {
            pa=10*pa+da;
        }
    }
    for (int i = 0; i < b.length(); i++)
    {
        if (b.at(i)=='0'+db)//！重要
        {
            pb=10*pb+db;
        }
    }
    cout<<pa+pb<<endl;
    
}
//二十分钟 15分