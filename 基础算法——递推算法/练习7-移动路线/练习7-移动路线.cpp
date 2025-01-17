﻿// 练习7-移动路线.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;
int main()
{
    int x,y;
    int m[21][21];
	cin >> x >> y;
	memset(m, 0, sizeof(m));
	/*
    for(int i = 1; i <= x; i++){
        m[i][1] = 1;
    }
    for(int j = 1; j <= y; j++){
        m[1][j] = 1;
    }
    for(int p = 2; p <= x; p++){
        for(int q = 2; q <= y; q++){
            m[p][q] = m[p][q-1]+m[p-1][q];
        }
    }
    cout<<m[x][y]<<endl;*/
    m[1][1] = 1;
    for(int i = 1; i <= x; ++i){
        for(int j = 1; j <= y; ++j){
            if (i != 1 || j != 1)
            {
                m[i][j] = m[i - 1][j]+m[i][j - 1];
            }
            
        }
    }
    cout<<m[x][y]<<endl;
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
