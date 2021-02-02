#include <iostream>
using namespace std;
int main()
{
    bool haveOccured[10000]{1};
    int K;
    cin>>K;
    int numbase[101];
    for (int i = 0; i < K; i++)
    {
        cin>>numbase[i];
    }
    for (int i = 0; i < K; i++)//出现过的字母全部记录下来
    {
        int temp=numbase[i];
        while(temp!=1)
        {
            if (temp%2==1)
            {
                temp=3*temp+1;
                haveOccured[temp]=true;
            }
            temp=temp/2;
            haveOccured[temp]=true;
        }
    }
    bool flag[101]{0};
    for (int i = 0; i < K; i++)
    {
        flag[i]=haveOccured[numbase[i]];
    }
    bool haveBefore=false;
    int result[101]={0};
    for (int i = K-1; i >= 0; i--)
    {
        if (flag[i]==false)
        {   
            result[numbase[i]]=true;
        }
    }
    for (int i = 101; i > 0; i--)
    {
        if (result[i]==true)
        {   
            if (haveBefore)
            {
                cout<<" ";
            }
            cout<<i;
            haveBefore=true;
        }
    }
    cout<<endl;
    cin.get();
    return 0;
}
//     99 97 96 93 90    87 84 81    79 78 75 72 69 66 63 60 57 54 51
//我的结果
// 100 99 97 96 93 90 88 87 84 82 81 79 78 75 72 69 66 63 60 57 54 51
//别人的结果