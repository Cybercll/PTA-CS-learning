#include<iostream>
using namespace std;
using UInt= unsigned int;//类型别名
int main()
{
    //常量与指针
    const int CHANGLINAG=7;
    const char* CHANGLIANGQU="Hello";//不可以少了const 
                                    //Hello 存在于常量区 char*会找到的是常量区的地址 不可转为栈
    #define TURE 1
    
}