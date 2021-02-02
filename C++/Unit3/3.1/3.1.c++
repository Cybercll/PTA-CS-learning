#include <iostream>
using namespace std;
int main()
{
    int a;
    int* b{nullptr};
    int* p=new int[10]; //申请一个类型为int的，共10个int的大小的内存 把首字符地址存入p
    char* q=new char('a'); //将q表示的内存空间初始化为a q为其地址
    delete p;//释放内存
    delete []q;
    cout<<*p<<endl;
    cin.get();//cin.get()进行暂停
    return 0;
}