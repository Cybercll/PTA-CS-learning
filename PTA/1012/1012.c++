#include<iostream>
#include<iomanip>
using namespace std;
bool isNull[5]{1,1,1,1,1};
class print
{
    public:
        void output(int data,int i)
        {
        if (i!=0)
        {
            cout<<" ";
        }
        if (::isNull[i]==0)
        {
            cout<<data;
        }
        else
        {
            cout<<"N";
        }
        }
    void output(double data,int i)
    {
        if (i!=0)
        {
            cout<<" ";
        }
        if (::isNull[i]==0)
        {
            cout<<setiosflags(ios::fixed)<<setprecision(1)<<data;
        }
        else
        {
            cout<<"N";
        }
    }
};
int main()
{
    int a1=0,a2=0,a3=0,a5=0;
    double a4=0;
    int signa2=1;
    int counta4=0;
    int count;
    print p;
    cin>>count;
    for (int i = 0; i < count; i++)
    {
        int processing;
        cin>>processing;
        switch(processing%5)
        {
        case 0:
            if (processing%2==0)
            {
                a1+=processing;
                isNull[0]=0;
            }
            break;
        case 1:
            a2+=processing*signa2;
            signa2*=-1;
            isNull[1]=0;
            break;
        case 2:
            a3++;
            isNull[2]=0;
            break;
        case 3:
            a4+=processing;
            counta4++;
            isNull[3]=0;
            break;
        case 4:
            if (processing>a5)
            {
                isNull[4]=0;
                a5=processing;
            }
            break;
        }
    }
    a4=a4/counta4;
    p.output(a1,0);
    p.output(a2,1);
    p.output(a3,2);
    p.output(a4,3);
    p.output(a5,4);
    cout<<endl;
    return 0;
}
