#include <iostream>
using namespace std;
int main()
{
    int i=0;//计数器
    int A;
    cin>>A;
    while(A!=1)
    {
        if (A%2==1)
        {
            A=3*A+1;
        }
        A=A/2;
        i=i+1;
    }
    cout<<i<<endl;
    system("pause");
    return 0;
}