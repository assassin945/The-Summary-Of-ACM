// 练习4-求排列的逆序数.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
// 此题使用常规搜索策略会有超时风险，时间复杂度是O(n^2)
// 采用归并排序方式将打乱的数列重新排序，标记置换次数即可得到逆序数

#include <iostream>
using namespace std;
void mer(long long, long long);
long long a[10001], r[10001], ans = 0;
int main()
{
    long long n, i;
    cin >> n;
    for (i = 1; i <= n; i++) {
        cin >> a[i];
    }
    mer(1, n);
    cout << ans << endl;
    return 0;
}
void mer(long long s, long long t) {
    long long m, i, j, k;
    if (s == t)
    {
        return;
    }
    m = (s + t) / 2;
    mer(s, m);
    mer(m + 1, t);
    i = s;
    j = m + 1;
    k = s;
    while (i <= m && j <= t)
    {
        if (a[i] <= a[j])
        {
            r[k] = a[i];
            i++;
            k++;
        }
        else
        {
            ans = ans + j - k;
            r[k] = a[j];
            j++;
            k++;
        }
    }
    while (i<=m)
    {
        r[k] = a[i];
        i++;
        k++;
    }
    while (j <= t)
    {
        r[k] = a[j];
        j++;
        k++;
    }
    for (i = s; i <= t; i++) {
        a[i] = r[i];
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
