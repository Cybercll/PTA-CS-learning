#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    char numstring[100]={0};
    int result=0;
    int i = 0;
    string output[10]={"ling","yi","er","san","si","wu","liu","qi","ba","jiu" };
    cin>>numstring;
    while (numstring[i]!='\0')
        {
            for (; i < strlen(numstring); i++)
                {
                    result=result+numstring[i]-'0';
                }
        }
    string nums=to_string(result);
    for (int i = 0; i < nums.length(); i++)
    {
        cout<<output[nums[i]-'0'];
        if (i!=nums.length()-1&&nums[i]!=0)
        {
           cout<<" ";
        }
        if (nums.length()==i+1)
        {
            cout<<endl;
        }
    }
    
    cin.get();
    system("pause");
}