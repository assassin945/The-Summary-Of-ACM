#include <iostream>
#include <cstring>
#include <stack>
using namespace std;
int main()
{
	double a,b,res;
    char c;
    stack<double> s;
    while (cin>>a)
    {
        while (!s.empty())//清空上一次的计算结果
        {
            s.pop();
        }
        c=getchar();//这一步获取的要么是空格，要么是回车
        if (c=='\n' && a==0)
        {
            break;
        }
        s.push(a);
        scanf("%s",&c);//获取运算符
        while (cin>>b)
        {
            if (c=='*')//判断运算优先级
            {
                a=s.top();
                s.pop();
                s.push(a*b);
            }
            else if (c=='/')
            {
                a=s.top();
                s.pop();
                s.push(a/b);
            }
            else if (c=='+')//加减法优先级最低，先不计算，入栈
            {
                s.push(b);
            }
            else if(c=='-')//减法换成被减数加上减数的相反数
            {
                s.push(-b);
            }
            c=getchar();
            if (c=='\n')
            {
                break;
            }
            scanf("%s",&c);
            getchar();
        }
        res=0;
        while (!s.empty())//取出栈内的全部元素进行加法运算
        {
            res+=s.top();
            s.pop();
        }
        printf("%.2lf\n", res);
    }
    return 0;
}