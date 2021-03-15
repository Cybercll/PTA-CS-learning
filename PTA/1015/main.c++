#include<iostream>
#include<algorithm>
using namespace std;
struct data
{
    long int id;//学号
    int df;//德分
    int cf;//才分
    int sum;//二者之和
};

bool Cmpare(const struct data & a, const struct data & b)            //const必须加，不然会错，目前不懂为啥。当return的是ture时，a先输出，所以示例中是升序
{
    if (a.sum>b.sum)
    {
        return 1;//若前者大于后者 则为true 不进行交换
    }
    else if (a.sum<b.sum)
    {
        return 0;
    }
    else if (a.sum==b.sum)
    {
        if (a.df>b.df)
        {
            return 1;
        }
        else if (a.df<b.df)
        {
            return 0;
        }
        else if (a.df==b.df)
        {
            if (a.id>b.id)
            {
                return 0;
            }
            else
            {
            return 1;
            }
        }
    }
    return 1;
}

void outputdata(struct data a[],int num)
{
    for (int i = 0; i < num; i++)
    {
        cout<<a[i].id<<" "<<a[i].df<<" "<<a[i].cf<<endl;;
    }
    
}
int main()
{
    int N=0,L=0,H=100;
    struct data firstkind[10000];int firstnum=0;
    struct data secondkind[10000];int secondnum=0;
    struct data thirdkind[10000];int thirdnum=0;
    struct data other[10000];int othernum=0;
    cin>>N>>L>>H;
    struct data processing;
    for (int i = 0; i < N; i++)
    {
        cin>>processing.id>>processing.df>>processing.cf;
        processing.sum=processing.df+processing.cf;
        if(processing.df>=L&&processing.cf>=L)//及格线
        {
            if (processing.df>=H&&processing.cf>=H)//德才兼备
            {
                firstkind[firstnum]=processing;
                firstnum++;
            }
            else if (processing.df>=H&&processing.cf<H)//德胜于才
            {
                secondkind[secondnum]=processing;
                secondnum++;
            }
            else if (processing.df<H&&processing.cf<H&&processing.df>processing.cf)//第三类
            {
                thirdkind[thirdnum]=processing;
                thirdnum++;
            }
            else//都不行但是及格了
            {
                other[othernum]=processing;
                othernum++;
            }
        }
    }
    sort(firstkind,firstkind+ firstnum,Cmpare);
    sort(secondkind,secondkind+ secondnum,Cmpare);
    sort(thirdkind,thirdkind+ thirdnum,Cmpare);
    sort(other,other+ othernum,Cmpare);

    cout<<firstnum+secondnum+thirdnum+othernum<<endl;
    outputdata(firstkind,firstnum);
    outputdata(secondkind,secondnum);
    outputdata(thirdkind,thirdnum);
    outputdata(other,othernum);

    cin.get();
    return 0;
}
//搁这考阅读理解呢？
//第一类df&cf>H
//第二类cf<H & df>H
//第三类df&cf<H df>cf
//其他类 df&cf<H df<cf