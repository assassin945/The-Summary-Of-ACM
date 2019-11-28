﻿// 练习2-全排列.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
// 此题也可算作回溯法

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;
bool used[101];
char s[7],ans[7];
int len;
void dfs(int);

int main()
{
    scanf("%s",s);
    len = strlen(s);
    dfs(0);
}

void dfs(int i){
    for (int j = 0; j < len; j++)
    {
        if (!used[s[j]])
        {
            used[s[j]]=1;
            ans[i]=s[j];
            if (i == len- 1)
            {
                printf("%s\n",ans);
            }
            else
            {
                dfs(i + 1);
            }
            used[s[j]] = 0;
        }
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
