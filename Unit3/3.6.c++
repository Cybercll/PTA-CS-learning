#include <iostream>
using namespace std;
int v1=10;
int main()
{
    int v1=5;
    //1  variable field
    std::cout << "local variable v1 is "  << v1   << std::endl;
    std::cout << "global variable v1 is " << ::v1 << std::endl;//::为全局作用域符
    //2 Overloading Function 
    //重载函数是在同一个名字空间中存在两个或者多个具有相同名字的函数所构成的语法现象。
    


}

