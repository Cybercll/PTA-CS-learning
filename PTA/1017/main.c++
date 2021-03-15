#include<iostream>
#include<string>
using namespace std;
int main()
{
    string a,q;
    int b,r;
    //ab
    //qr
    cin>>a>>b;
    int temp=0;
    int zero=0;
    for (int i = 0; i < a.length(); i++)
    {
        temp=temp*10+int (a.at(i)-'0');
        if (zero==1&&temp/b==0)
        {
            q=q+'0';
            zero=0;
        }
        else if (zero==1)
        {
            zero=0;
        }
        switch (temp/b)
        {
        case 0:
            break;
        default:
        q=q+char ('0'+temp/b);
        temp=temp%b;
        if (temp==0)
        {
            zero=1;
        }
            break;
        }
    }
    r=temp;
    cout<<q<<' '<<r<<endl;
    cin.get();
    return 0;
}