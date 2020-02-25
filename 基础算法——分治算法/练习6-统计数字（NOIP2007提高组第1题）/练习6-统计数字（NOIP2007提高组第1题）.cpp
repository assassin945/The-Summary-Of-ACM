// 练习6-统计数字（NOIP2007提高组第1题）.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;
int a[10001];
void ksort(int, int);
int main()
{
    int n, i, k, s = 1;
    cin >> n;
    for (i = 1; i <= n; i++) {
        cin >> a[i];
    }
    ksort(1, n);
    for (i = 1; i <= n; i++) {
        if (a[i] == a[i+1])
        {
            s++;
        }
        else
        {
            cout << a[i] << " " << s << endl;
            s = 1;
        }
    }
}
void ksort(int l, int r) {
    int i = l, j = r, mid = a[(l + r) / 2];
    while (i<=j)
    {
        while (a[i]<mid)
        {
            i++;
        }
        while (a[j]>mid)
        {
            j--;
        }
        if (i <= j)
        {
            swap(a[i], a[j]);
            i++;
            j--;
        }
    }
    if (l<j)
    {
        ksort(l, j);
    }
    if (i<r)
    {
        ksort(i, r);
    }
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
