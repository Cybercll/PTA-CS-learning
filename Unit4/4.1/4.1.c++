#include <iostream>
using namespace std;
class Circle //创建一个类
    {
    public://public表示公有的 若不加这一行 下方函数将无法访问到
        double radius;
        Circle()//无参函数定义一个默认值
        {
            radius=1;
        }
        Circle(double newRadius)//函数重载
        {
            radius = newRadius;
        }
        double getArea()
        {
            return 3.14*radius*radius;
        }
    }; //类声明结尾要加;
int main ()
{
    Circle circle1;
    Circle circle2{5.5};
    cout<<circle1.getArea()<<endl<<circle2.getArea();
    cin.get();
    return 0;
}