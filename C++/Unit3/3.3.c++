#include <iostream>
using namespace std;
auto a() {return 'G';}//自动给a一个类型
int main()
{
    auto b=6.0;
    decltype(a()) c=a();//decltype 将a的类型作为一种类型初始化c
    int const x = 3;
    auto y { x };
    auto& z { x };
    cout<<typeid(x).name()<<endl
        <<typeid(y).name()<<endl
        <<typeid(z).name()<<endl;
    cin.get();
    return 0;
}