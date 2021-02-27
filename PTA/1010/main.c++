#include <iostream>
using namespace std;
int main(){
    int list[1000];
    int length=0;
    for (int i = 0; i < 1000; i++)
    {
        cin>>list[i];
        if (cin.get()=='\n')
        {
            length=i+1;
            break;
        }
    }
    
    for (int i = 0; i < length/2; i++)
    {
        if (list[2*i+1]>0)
        {
            list[2*i]*=list[2*i+1];
            list[2*i+1]--;
        }
        else
        {
            list[2*i]=0;
        }
        
    }
    for (int i = 0; i < length; i++)
    {
        bool isOutput=(list[i/2*2+1]!=0||list[i/2*2]!=0);
        bool NextisOutput=(list[(i/2+1)*2+1]!=0||list[(i/2+1)*2]!=0);
        if (isOutput)
        {
            cout<<list[i];
            if (NextisOutput||i%2==0)
            {
            cout<<" ";
            }
        }
    }
    cout<<endl;
    cin.get();
    return 0;
}