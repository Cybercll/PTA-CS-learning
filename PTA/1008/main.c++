#include <iostream>
using namespace std;
int main(){
    int A[101];
    int m,n;
    cin>>m>>n;
    n=n%m;//让n为m取n的余数
    for (int i = 0; i < m; i++)
    {
        cin>>A[i];
    }
    for (int i = 0; i < m; i++)
    {
        if(i<n)
        {
        cout<<A[m-n+i];
        }
        else
        {
            cout<<A[i-n];
        }
        if(i!=m-1)
        {
            cout<<" ";
        }
        else
        {
            cout<<endl;
        }
        
    }
    cin.get();
    return 0;
}
//14分 两错点 猜测是未考虑n>m
//20分 猜测正确