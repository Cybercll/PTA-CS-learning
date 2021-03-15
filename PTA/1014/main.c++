#include<iostream>
#include<string>
using namespace std;
int main()
{
    string a,b,c,d;
    cin>>a>>b>>c>>d;
    char day='A',hour='A';int min=0;
    string showday[7]{"MON","TUE","WED","THU","FRI","SAT","SUN"};
    int foundnum=0;
    for (int i = 0; i < a.length()&&i<b.length(); i++)
    {
        if (foundnum==1&&a.at(i)==b.at(i)&&(a.at(i)>='A'&&a.at(i)<='Z'||a.at(i)>='0'&&a.at(i)<='9'))
        {
            hour=b.at(i);
            foundnum++;
        }
        if (foundnum==0&&a.at(i)==b.at(i)&&a.at(i)>='A'&&a.at(i)<='Z')
        {
            day=a.at(i);
            foundnum++;
        }
    }
    for (int i = 0; i < c.length()&&i<d.length(); i++)
    {
        if (foundnum==2&&c.at(i)==d.at(i)&&c.at(i)>='A'&&c.at(i)<='z')
        {
            min=i;
            foundnum++;
        }
    }
    cout<<showday[day-'A']<<" ";
    if(hour<='Z'&&hour>='A')
    {
        cout<<int(hour-'A'+10);
    }
    else
    {
        cout<<'0'<<hour;
    }
    cout<<':';
    if(min<10)
    {
        cout<<'0'<<min;
    }
    else 
    {
        cout<<min;
    }
    cout<<endl;
    cin.get();
    return 0;
}