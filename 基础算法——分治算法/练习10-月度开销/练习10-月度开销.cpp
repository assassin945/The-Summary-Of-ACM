// 练习10-月度开销.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <cmath>
#include <algorithm>
#include <string>
using namespace std;
int n, m, a[10086], l = 0;
int r;
int pd(int);
int main()
{
    cin >> n >> m;
    r = 1000001;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        l = max(l, a[i]);
    }
    while (l < r-1)
    {
        int Mid = (l + r) / 2;
        if (pd(Mid))
        {
            l = Mid;
        }
        else
        {
            r = Mid;
        }
    }
    if (!pd(l))
    {
        cout << l << endl;
    }
    else
    {
        cout << r << endl;
    }
}
int pd(int X) {
    int money = 0, fajo_month = 1;
    for (int i = 1; i <= n; i++) {
        if (money + a[i] <= X)
        {
            money += a[i];
        }
        else
        {
            money = a[i];
            fajo_month++;
        }
    }
    return (fajo_month > m);
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
