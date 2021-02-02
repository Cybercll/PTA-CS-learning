#include <iostream>
#include <string>
using namespace std;
int main()
{
    string input;
    getline(cin,input);//输入一整行
    int before,after;
    int space[80]{0};
    int a=1;
    for (int i = 0; i < input.size(); i++)
    {
        if (input.at(i)==' ')
        {
            space[a]=i;
            a++;
        }
    }
    for (int i = a-1; i >=0; i--)
    {
        if(a==1){cout<<input;}
        else
        {        
            if(i==a-1)
            {
                cout<<input.substr(space[i]+1);
            }
            else if (i==0)
            {
                cout<<" "<<input.substr(space[i],space[i+1]-space[i]);
            }
            
            else
            {
                cout<<input.substr(space[i],space[i+1]-space[i]);
            }
        }
    }
    cin.get();
    return 0;
}
//37分钟 15分 猜测是空格很多情况有问题（或者是很少的情况下）
//20分 是没有考虑当字符串不变化的情况
