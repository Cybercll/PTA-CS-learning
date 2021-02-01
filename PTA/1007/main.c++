#include <iostream>
using namespace std;
int main(){
    int input=0;
    cin>>input;
    bool numstatus[100000]{1,1,1};
    int count=0;
    for (int i = 2; i <= input; i++)//控制当前判断哪个数
    {
        for (int a = 2; a <= i/2; a++)//判断当前数是不是prime
        {      
            if (i%a==0)
            {
                numstatus[i]=1;
            }
        }
    }
    for (int i = 1; i <= input-2; i++)
    {
        if (numstatus[i]==0&&numstatus[i+2]==0)
        {
            count++;
        }
    }
    cout<<count<<endl;
    cin.get();
    return 0;
}
//完成时间 19'44" 18分
//最大值超时