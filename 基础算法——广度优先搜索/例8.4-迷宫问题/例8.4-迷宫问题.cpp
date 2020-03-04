// 例8.4-迷宫问题.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;
int u[5] = { 0,0,1,0,-1 };
int w[5] = { 0,1,0,-1,0 };
int n, m, desx, desy, soux, souy, head, tail, x, y, a[51], b[51], pre[51], map[51][51];
bool f;
void print(int);
void bfs();
int main()
{
    int i, j;
    cin >> n >> m;
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= m; j++) {
            cin >> map[i][j];
        }
    }
    cout << "Input the enter:";
    cin >> soux >> souy;
    cout << "Input the exit:";
    cin >> desx >> desy;
    bfs();
}
void bfs() {
    head = 0;
    tail = 1;
    f = 0;
    map[soux][souy] = -1;
    a[tail] = soux;
    b[tail] = souy;
    pre[tail] = 0;
    while (head!=tail)
    {
        head++;
        for (int i = 1; i <= 4; i++) {
            x = a[head] + u[i];
            y = b[head] + w[i];
            if ((x>0) && (x<=n) && (y>0) && (y<=m) && (map[x][y]==0))
            {
                tail++;
                a[tail] = x;
                b[tail] = y;
                pre[tail] = head;
                map[x][y] = -1;
                if ((x==desx) && (y=desy))
                {
                    f = 1;
                    print(tail);
                    break;
                }
            }
        }
        if (f)
        {
            break; 
        }
    }
    if (!f)
    {
        cout << "no" << endl;
    }
}
void print(int d) {
    if (pre[d] != 0)
    {
        print(pre[d]);
    }
    cout << a[d] << "," << b[d] << endl;
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
