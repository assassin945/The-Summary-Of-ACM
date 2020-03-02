// 练习9-网线主管.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;
double a[1001];
int main()
{
    int n, i, k, z, x = 10000000, y = 0, mid;
    double w = 0;
    cin >> n >> k;
    for (i = 1; i <= n; i++) {
        cin >> a[i];
        a[i] *= 100;
    }
    while (x>=y)
    {
        z = 0;
        mid = (x + y) / 2;
        for (i = 1; i <= n; i++) {
            z += a[i] / mid;
        }
        if (z<k)
        {
            x = mid - 1;
        }
        else
        {
            y = mid + 1;
            if (mid > w)
            {
                w = mid;
            }
        }
    }
    cout.precision(2);
    cout << fixed << w / 100 << endl;
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
