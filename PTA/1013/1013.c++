#include<iostream>
#include <cmath>
using namespace std;
bool isPrime(int);
int main()
{
    bool notfirst=false;
    int numbegin=0,numend=1;//开始结束点
    cin>>numbegin>>numend;
    int nownum=0;//当前处理中的素数的下标
    int elenum=0;//输出了的素数个数
    for (int i = 2; nownum<numend; i++)//如果现在的素数下标小于给定的结束下标则循环
    {
        if (isPrime(i))
        {
            nownum++;
            if (nownum>=numbegin)//如果当前素数下标给定起始下标开始输出
            {
                elenum++;
                if (notfirst)//如果输出元素不是本行第一个则先输出一个空格
                {
                    cout<<" ";
                }
                cout<<i;
                notfirst=true;
                if (elenum%10==0)//每输出10个回车一下
                {
                    cout<<endl;
                    notfirst=false;//回车后为本行第一个
                }
            }
        }
    }
    if (notfirst)
    {
        cout<<endl;
    }
    cin.get();
    cin.get();
    return 0;
}
bool isPrime(int a)
{
    if (a%2==0&&a!=2)
    {
        return false;
    }
    
    for (int i = 2; i <= sqrt(a); i++)
    {
        if (a%i==0)
        {
            return false;
        }
    }
    return true;
}