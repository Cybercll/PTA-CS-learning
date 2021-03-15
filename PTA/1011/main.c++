#include <iostream>
using namespace std;
int main(){
    int count=0;
    struct abc
    {
        long int a;
        long int b;
        long long int c;
    };
    abc test[10];
    cin>>count;

    for (int i = 0; i < count; i++)
    {
        cin>>test[i].a>>test[i].b>>test[i].c;
    }
    for (int i = 0; i < count; i++)
    {
        bool isABbigger=(test[i].c-test[i].b-test[i].a<0);
        cout<<"Case #"<<i+1<<": "<<boolalpha<<isABbigger<<endl;
    }
    
    cin.get();
    return 0;
}