#include <iostream>
using namespace std;
int main()
{
    int input;
    string result;
    string bai,shi,ge;//三位的string
    cin>>input;
    for (int i = 0; i < input/100; i++)
    {
        bai=bai+"B";
    }
    for (int i = 0; i < input/10-(input/100)*10; i++)
    {
        shi=shi+"S";
    }
    for (int i = 0; i < (input%10); i++)
    {
        ge=ge+to_string(1+i);
        cout<<ge<<endl;
    }
    cout<<bai+shi+ge<<endl;
}