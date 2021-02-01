#include <iostream>
#include <string>
using namespace std;
int main()
{
    string input[10];//最多输入10个字符串
    bool result[10]{1,1,1,1,1,1,1,1,1,1};//判断有无判否的情况
    int quantity=0;//quantity表示字符串数量
    cin>>quantity;
    for (int i = 0; i < quantity ; i++)//依次输入字符串
    {
        cin>>input[i];
    }
    for (int i = 0; i < quantity; i++)//一个字符串计数
    {
        for (int a = 0; a < input[i].length(); a++)//字母计数 检测次数为字符串的字符数
        {
            cout<<input[i].at(a)<<" is input[i].at(a)"<<endl;
            if (input[i].find("P")!=string::npos||input[i].find("A")!=string::npos||input[i].find("T")!=string::npos)//依次判断是否有其他字符
            {
                char check=input[i].at(a);
                bool checkb=(check=80);
                result[i]=false;
            }
            if (input[i][a]=='P')//判断P到T之间有几个A
            {
                if (input[i][a+1]=='A')
                {
                    if (input[i][a+2]=='T')
                    {
                        if (result[i]!=false)
                        {
                            result[i]=true;
                        }
                    }
                    else if (input[i][a+2]=='A')
                    {
                        if (input[i][a+3]=='T')
                        {
                            if (result[i]!=false)
                            {
                                result[i]=true;
                            }
                        }
                    }
                }
            }
        }
    }
    for (int i = 0; i < quantity; i++)
    {   
        if (result[i]==true)
        {
            cout<<"YES"<<endl;
        }
        else 
        {
            cout<<"NO"<<endl;
        }
    }
}