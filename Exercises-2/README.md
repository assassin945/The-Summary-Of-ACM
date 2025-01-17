# Exercises-2(1001)

> 本次练习的主要方向是递推公式，只要能找到规律，那么解题就变得容易了。

## 1001-Sum Problem

### Problem Description

Hey, welcome to HDOJ(Hangzhou Dianzi University Online Judge).

In this problem, your task is to calculate SUM(n) = 1 + 2 + 3 + ... + n.

### Input

The input will consist of a series of integers n, one integer per line.

### Output

For each case, output SUM(n) in one line, followed by a blank line. You may assume the result will be in the range of 32-bit signed integer.

### Sample Input

```
1
100
```

### Sample Output

```
1

5050
```

### Author

DOOM III

HDU-1001

### Solution

```c++
#include <iostream>
using namespace std;
int main()
{
    int sum, a, i;
    while (cin>>a)
    {
        sum = 0;
        for (i = 1; i <= a; i++)
        {
            sum = sum + i;
        }
        cout << sum << endl << endl;
    }
    return 0;
}
```

## 1002-Tiling_easy version(2501)

### Problem Description

有一个大小是 2 x n 的网格，现在需要用2种规格的骨牌铺满，骨牌规格分别是 2 x 1 和 2 x 2，请计算一共有多少种铺设的方法。

### Input

输入的第一行包含一个正整数T（T<=20），表示一共有 T组数据，接着是T行数据，每行包含一个正整数N（N<=30），表示网格的大小是2行N列。

### Output

输出一共有多少种铺设的方法，每组数据的输出占一行。

### Sample Input

```
3
2
8
12
```

### Sample Output

```
3
171
2731
```

### Source

《ACM程序设计》短学期考试_软件工程及其他专业 

HDU-2501

### Solution

```c++
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int a, b, c;
    vector<int> fibonacci;
    a = 1;
    b = 3;
    fibonacci.push_back(a);
    fibonacci.push_back(b);
    for (int i = 1; i < 30; i++)
    {
        c = 2 * fibonacci[i - 1] + fibonacci[i];
        fibonacci.push_back(c);
    }
    int n,m;
    cin >> n;
    while (n--)
    {
        cin >> m;
        cout << fibonacci[m - 1] << endl;
    }
}
```

## 1003-三角形(1249)

### Problem Description

用N个三角形最多可以把平面分成几个区域?

### Input

输入数据的第一行是一个正整数T(1<=T<=10000),表示测试数据的数量.然后是T组测试数据,每组测试数据只包含一个正整数N(1<=N<=10000).

### Output

对于每组测试数据,请输出题目中要求的结果.

### Sample Input

```
2
1
2
```

### Sample Output

```
2
8
```

### Author

Ignatius.L

HDU-1249

### Solution

```c++
#include <iostream>
using namespace std;
int main()
{
	int m, n;
	cin >> n;
	while (n--)
	{
		cin >> m;
		cout << (3 * m * (m - 1) + 2) << endl;
	}
}
```

## 1004-Tri Tiling(1143)

### Problem Description

In how many ways can you tile a 3xn rectangle with 2x1 dominoes? Here is a sample tiling of a 3x12 rectangle.

![img](http://acm.hdu.edu.cn/data/images/1143-1.jpg)

### Input

Input consists of several test cases followed by a line containing -1. Each test case is a line containing an integer 0 ≤ n ≤ 30.

### Output

For each test case, output one integer number giving the number of possible tilings.

### Sample Input

```
2
8
12
-1
```

### Sample Output

```
3
153
2131
```

### Source

University of Waterloo Local Contest 2005.09.24

HDU-1143

### Solution

```c++
#include <iostream>
using namespace std;
int main()
{
	int a[31] = { 1,0,3,0 };
	for (int i = 4; i < 31; i++)
	{
		a[i] = 4 * a[i - 2] - a[i - 4];
	}
	int n;
	while (cin>>n && n >= 0)
	{
		cout << a[n] << endl;
	}
}
```

## 1005-Number Sequence(1005)

### Problem Description

A number sequence is defined as follows:

f(1) = 1, f(2) = 1, f(n) = (A * f(n - 1) + B * f(n - 2)) mod 7.

Given A, B, and n, you are to calculate the value of f(n).

### Input

The input consists of multiple test cases. Each test case contains 3 integers A, B and n on a single line (1 <= A, B <= 1000, 1 <= n <= 100,000,000). Three zeros signal the end of input and this test case is not to be processed.

### Output

For each test case, print the value of f(n) on a single line.

### Sample Input

```
1 1 3
1 2 10
0 0 0
```

### Sample Output

```
2
5
```

### Author

CHEN, Shunbao

### Source

ZJCPC2004

HDU-1005

### Solution

```c++
#include <iostream>
using namespace std;
int main()
{
	int a, b, n;
	int f[50];
	while (cin>>a>>b>>n && (a != 0 || b != 0 || n != 0))
	{
		if (n == 1 || n == 2)
		{
			cout << 1 << endl;
			continue;
		}
		f[1] = f[2] = 1;
		for (int i = 3; i <= n % 49; i++)
		{
			f[i] = (a * f[i - 1] + b * f[i - 2]) % 7;

		}
		cout << f[n % 49] << endl;
	}
}
```

## 1006-钱币兑换问题(1284)

### Problem Description

在一个国家仅有1分，2分，3分硬币，将钱N兑换成硬币有很多种兑法。请你编程序计算出共有多少种兑法。

### Input

每行只有一个正整数N，N小于32768。

### Output

对应每个输入，输出兑换方法数。

### Sample Input

```
2934
12553
```

### Sample Output

```
718831
13137761
```

### Author

SmallBeer(CML)

### Source

杭电ACM集训队训练赛（VII）

HDU-1284

### Solution

```c++
#include <iostream>
#include <cstdio>
using namespace std;
__int64 num[38000] = { 0, 1, 2, 3 };
int main()
{
	int n;
	for (int i = 4; i < 38000; i++)
		num[i] = 1 + i / 2 + num[i - 3];
	while (cin >> n)
		cout << num[n] << endl;
	return 0;
}
```

## 1007-汉诺塔Ⅱ(1207)

### Problem Description

经典的汉诺塔问题经常作为一个递归的经典例题存在。可能有人并不知道汉诺塔问题的典故。汉诺塔来源于印度传说的一个故事，上帝创造世界时作了三根金刚石柱子，在一根柱子上从下往上按大小顺序摞着64片黄金圆盘。上帝命令婆罗门把圆盘从下面开始按大小顺序重新摆放在另一根柱子上。并且规定，在小圆盘上不能放大圆盘，在三根柱子之间一回只能移动一个圆盘。有预言说，这件事完成时宇宙会在一瞬间闪电式毁灭。也有人相信婆罗门至今仍在一刻不停地搬动着圆盘。恩，当然这个传说并不可信，如今汉诺塔更多的是作为一个玩具存在。Gardon就收到了一个汉诺塔玩具作为生日礼物。
　　Gardon是个怕麻烦的人（恩，就是爱偷懒的人），很显然将64个圆盘逐一搬动直到所有的盘子都到达第三个柱子上很困难，所以Gardon决定作个小弊，他又找来了一根一模一样的柱子，通过这个柱子来更快的把所有的盘子移到第三个柱子上。下面的问题就是：当Gardon在一次游戏中使用了N个盘子时，他需要多少次移动才能把他们都移到第三个柱子上？很显然，在没有第四个柱子时，问题的解是2^N-1，但现在有了这个柱子的帮助，又该是多少呢？

### Input

包含多组数据，每个数据一行，是盘子的数目N(1<=N<=64)。

### Output

对于每组数据，输出一个数，到达目标需要的最少的移动数。

### Sample Input

```
1
3
12
```

### Sample Output

```
1
5
81
```

### Author

Gardon

### Source

Gardon-DYGG Contest 2

HDU-1207

### Solution

```c++
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	long long f[65], min;
	int i, j, n;
	f[1] = 1;
	f[2] = 3;
	for (i = 3; i < 65; i++)
	{
		min = 0x7FFFFFFFFFFFFFFF;
		for (j = 1; j < i; j++){
			if (2 * f[j] + pow(2.0, i - j) - 1 < min){
				min = 2 * f[j] + pow(2.0, i - j) - 1;
			}
		}
		f[i] = min;
	}
	while (cin>>n)
	{
		cout << f[n] << endl;
	}
}
```

## 1008-跳舞毯(2154)

### Problem Description

由于长期缺乏运动，小黑发现自己的身材臃肿了许多，于是他想健身，更准确地说是减肥。
小黑买来一块圆形的毯子，把它们分成三等分，分别标上A,B,C，称之为“跳舞毯”，他的运动方式是每次都从A开始跳，每次都可以任意跳到其他块，但最后必须跳回A，且不能原地跳.为达到减肥效果，小黑每天都会坚持跳n次，有天他突然想知道当他跳n次时共几种跳法，结果想了好几天没想出来－_－
现在就请你帮帮他，算出总共有多少跳法。
![img](http://acm.hdu.edu.cn/data/images/C119-1002-1.JPG)

### Input

测试输入包含若干测试用例。每个测试用例占一行，表示n的值(1<=n<=1000)。
当n为0时输入结束。

### Output

每个测试用例的输出占一行，由于跳法非常多，输出其对10000取模的结果.

### Sample Input

```
2
3
4
0
```

### Sample Output

```
2
2
6
```

### Author

葱头

### Source

2008信息工程学院集训队——选拔赛

HDU-2154

### Solution

```c++
#include <iostream>
using namespace std;
int main()
{
	int arr[1002] = { 0,0,2,2 }, n;
	for (int i = 4; i < 1001; i++)
	{
		if (i % 2 == 0)
			arr[i] = arr[i - 1] * 2 + 2;
		else
			arr[i] = arr[i - 1] * 2 - 2;
		arr[i] = arr[i] % 10000;
	}
	while (cin>>n && n != 0)
	{
		cout << arr[n] % 10000 << endl;
	}
}
```

## 1009-母猪的故事(2160)

### Problem Description

话说现在猪肉价格这么贵，著名的ACBoy 0068 也开始了养猪生活。说来也奇怪，他养的猪一出生第二天开始就能每天中午生一只小猪，而且生下来的竟然都是母猪。
不过光生小猪也不行，0068采用了一个很奇特的办法来管理他的养猪场：
对于每头刚出生的小猪，在他生下第二头小猪后立马被杀掉，卖到超市里。
假设在创业的第一天，0068只买了一头刚出生的小猪，请问，在第N天晚上，0068的养猪场里还存有多少头猪？

### Input

测试数据的第一行包含有一个正整数T，代表测试数据的个数。接下来有T组测试，每组测试数据占一行，分别有一个正整数N代表0068创业的第N天。(0<N<20)

### Output

对于每组数据，请在一行里输出第N天晚上养猪场里猪的数目。

### Sample Input

```
2
2
3
```

### Sample Output

```
2
3
```

### Author

linle

### Source

2008信息工程学院集训队——选拔赛

HDU-2160

### Solution

```c++
#include <iostream>
using namespace std;
int main()
{
	int a[21] = { 0,1,2,3 };
	for (int i = 4; i < 21; i++)
	{
		a[i] = a[i - 1] + a[i - 2];
	}
	int n,m;
	cin >> n;
	while (n--)
	{
		cin >> m;
		cout << a[m] << endl;
	}
}
```

## 1010-彼岸(2569)

### Problem Description

突破蝙蝠的包围，yifenfei来到一处悬崖面前，悬崖彼岸就是前进的方向，好在现在的yifenfei已经学过御剑术，可御剑轻松飞过悬崖。
现在的问题是：悬崖中间飞着很多红，黄，蓝三种颜色的珠子，假设我们把悬崖看成一条长度为n的线段，线段上的每一单位长度空间都可能飞过红，黄，蓝三种珠子，而yifenfei必定会在该空间上碰到一种颜色的珠子。如果在连续3段单位空间碰到的珠子颜色都不一样，则yifenfei就会坠落。
比如经过长度为3的悬崖，碰到的珠子先后为 “红黄蓝”，或者 “蓝红黄” 等类似情况就会坠落，而如果是 “红黄红” 或者 “红黄黄”等情况则可以安全到达。
现在请问：yifenfei安然抵达彼岸的方法有多少种？
![img](http://acm.hdu.edu.cn/data/images/C164-1003-1.jpg)
![img](http://acm.hdu.edu.cn/data/images/C164-1003-2.jpg)

### Input

输入数据首先给出一个整数C，表示测试组数。
然后是C组数据，每组包含一个正整数n (n<40)。

### Output

对应每组输入数据，请输出一个整数，表示yifenfei安然抵达彼岸的方法数。
每组输出占一行。

### Sample Input

```
2
2
3
```

### Sample Output

```
9
21
```

### Author

yifenfei

### Source

ACM程序设计期末考试081230

HDU-2569

### Solution

```c++
#include <iostream>
using namespace std;
int main()
{
	int m, n;
	int arr[41] = { 0,3,9 };
	for (int i = 3; i < 41; i++)
	{
		arr[i] = arr[i - 1] * 2 + arr[i - 2];
	}
	cin >> n;
	while (n--)
	{
		cin >> m;
		cout << arr[m] << endl;
	}
}
```

## 1011-Sumsets(2709)

### Problem Description

Farmer John commanded his cows to search for different sets of numbers that sum to a given number. The cows use only numbers that are an integer power of 2. Here are the possible sets of numbers that sum to 7:

1) 1+1+1+1+1+1+1
2) 1+1+1+1+1+2
3) 1+1+1+2+2
4) 1+1+1+4
5) 1+2+2+2
6) 1+2+4

Help FJ count all possible representations for a given integer N (1 <= N <= 1,000,000).

### Input

A single line with a single integer, N.

### Output

The number of ways to represent N as the indicated sum. Due to the potential huge size of this number, print only last 9 digits (in base 10 representation).

### Sample Input

```
7
```

### Sample Output

```
6
```

### Source

USACO 2005 January Silver

HDU-2709

### Solution

```c++
//代码好像有问题
#include <iostream>
using namespace std;
int main()
{
	int a[1000001] = { 0,1,2,2 };
	for (int i = 4; i <= 1000000; i++)
	{
		a[i] = (a[i / 2] + a[i - 2]) % 1000000000;
	}
	int n;
	while (cin>>n)
	{
		cout << a[n] << endl;
	}
}
```

## 1012-统计问题(2563)

### Problem Description

在一无限大的二维平面中，我们做如下假设：
1、  每次只能移动一格；
2、  不能向后走（假设你的目的地是“向上”，那么你可以向左走，可以向右走，也可以向上走，但是不可以向下走）；
3、  走过的格子立即塌陷无法再走第二次；

求走n步不同的方案数（2种走法只要有一步不一样，即被认为是不同的方案）。

### Input

首先给出一个正整数C，表示有C组测试数据
接下来的C行，每行包含一个整数n (n<=20)，表示要走n步。

### Output

请编程输出走n步的不同方案总数；
每组的输出占一行。

### Sample Input

```
2
1
2
```

### Sample Output

```
3
7
```

### Author

yifenfei

### Source

绍兴托普信息技术职业技术学院——第二届电脑文化节程序设计竞赛

HDU-2563

### Solution

```c++
//代码好像有问题
#include <iostream>
using namespace std;
int main()
{
	int a[1000001] = { 0,1,2,2 };
	for (int i = 4; i <= 1000000; i++)
	{
		a[i] = (a[i / 2] + a[i - 2]) % 1000000000;
	}
	int n;
	while (cin>>n)
	{
		cout << a[n] << endl;
	}
}
```