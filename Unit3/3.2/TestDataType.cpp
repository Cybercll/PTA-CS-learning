#include <iostream>
using namespace std;
int main()
{
   // int x{1.0};//列表初始化不允许窄化
    cout<<1.0f/2.f<<endl;//加f后缀强制转化为浮点数float
  //  cout<<x<<endl;
    cin.get(); 
    return 0;
}