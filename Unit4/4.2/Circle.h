_Pragma("once")

class Circle //Circle类
    {
        double radius;
    public://public表示公有的 若不加这一行 下方函数将无法访问到
        Circle();
        Circle(double radius__);
        double getArea();
    }; //类声明结尾要加;