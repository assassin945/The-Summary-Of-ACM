// 例7.6-黑白棋子的移动.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;
int n, st, sp;
char c[101];
void print();
void init(int);
void move(int);
void mv(int);
int main()
{
    cin >> n;
    init(n);
    mv(n);
}
void print() {
    cout << "step" << st << ":";
    for (int i = 1; i <= 2*n+2; i++)
    {
        cout << c[i];
    }
    cout << endl;
    st++;
}
void init(int n) {
    st = 0;
    sp = 2 * n + 1;
    for (int i = 1; i <= n; i++)
    {
        c[i] = 'o';
    }
    for (int j = n + 1; j <= 2 * n; j++) {
        c[j] = '*';
    }
    c[2 * n + 1] = '-';
    c[2 * n + 2] = '-';
    print();
}
void move(int k) {
    for (int q = 0; q <= 1; q++) {
        c[sp + q] = c[k + q];
        c[k + q] = '-';
    }
    sp = k;
    print();
}
void mv(int n) {
    if (n == 4)
    {
        move(4);
        move(8);
        move(2);
        move(7);
        move(1);
    }
    else
    {
        move(n);
        move(2 * n - 1);
        mv(n - 1);
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
