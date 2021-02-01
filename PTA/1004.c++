#include <iostream>

using namespace std;
int main()
{
    struct student//定义student结构
    {
        string name;
        string number;
        int score;

    };
    int shuliang;
    cin>>shuliang;
    student chengjishuju[101];
    for (int i = 0; i < shuliang; i++)
    {
        cin>>chengjishuju[i].name
            >>chengjishuju[i].number
            >>chengjishuju[i].score;
    }
    for (int i = 0; i < shuliang; i++)//求最大
    {
        for (int a = 0; a < shuliang-i-1; a++)
        {
            if (chengjishuju[a].score>chengjishuju[a+1].score)//sort 小的得到小的排号
            {
                student temp;
                temp=chengjishuju[a];
                chengjishuju[a]=chengjishuju[a+1];
                chengjishuju[a+1]=temp;
            }
        }
    }

    cout<<chengjishuju[shuliang-1].name+" "<<chengjishuju[shuliang-1].number<<endl;
    cout<<chengjishuju[0].name+" "<<chengjishuju[0].number<<endl;
 cin.clear();

  cin.sync();

  cin.get();
}