# Exercises-1

> 本次练习的主要方向是熟悉输入输出模式。

## 1001-Elevator(1008)

### Problem Description

The highest building in our city has only one elevator. A request list is made up with N positive numbers. The numbers denote at which floors the elevator will stop, in specified order. It costs 6 seconds to move the elevator up one floor, and 4 seconds to move down one floor. The elevator will stay for 5 seconds at each stop.

For a given request list, you are to compute the total time spent to fulfill the requests on the list. The elevator is on the 0th floor at the beginning and does not have to return to the ground floor when the requests are fulfilled.

### Input

There are multiple test cases. Each case contains a positive integer N, followed by N positive numbers. All the numbers in the input are less than 100. A test case with N = 0 denotes the end of input. This test case is not to be processed.

### Output

Print the total time on a single line for each test case.

### Sample Input

```
1 2
3 2 3 1
0
```

### Sample Output

```
17
41
```

### Author

ZHENG, Jianqiang

### Source

ZJCPC2004

### Solution

```c++
#include <iostream>
using namespace std;
int main()
{
	int n;
	int time;
	int start;
	int now;
	while (cin>>n && n != 0)
	{
		start = 0;
		time = 0;
		for (int i = 0; i < n; i++)
		{
			cin >> now;
			if (now > start)
			{
				time += (now - start) * 6;
			}
			else
			{
				time += (start - now) * 4;
			}
			time += 5;
			start = now;
		}
		cout << time << endl;
	}
}
```

## 1002-18岁生日(1201)

### Problem Description

Gardon的18岁生日就要到了，他当然很开心，可是他突然想到一个问题，是不是每个人从出生开始，到达18岁生日时所经过的天数都是一样的呢？似乎并不全都是这样，所以他想请你帮忙计算一下他和他的几个朋友从出生到达18岁生日所经过的总天数，让他好来比较一下。

### Input

一个数T，后面T行每行有一个日期，格式是YYYY-MM-DD。如我的生日是1988-03-07。

### Output

T行，每行一个数，表示此人从出生到18岁生日所经过的天数。如果这个人没有18岁生日，就输出-1。

### Sample Input

```
1
1988-03-07
```

### Sample Output

```
6574
```

### Author

Gardon

### Source

Gardon-DYGG Contest 2

### Solution

```c++
#include <iostream>
using namespace std;
int main()
{
	int n;
	int year;
	int month;
	int day;
	int sumday;
	cin >> n;
	while (n--)
	{
		sumday = 0;
		scanf("%d-%d-%d", &year, &month, &day);
		if (month == 2 && day == 29)
		{
			cout << -1 << endl;
			continue;
		}
		if ((month == 2 && day <= 28)||month==1)
		{
			for (int i = year; i < year + 18; i++) {
				if (i % 400 == 0 || (i % 4 == 0 && i % 100 != 0))
					sumday += 366;
				else
					sumday += 365;
			}
		}
		if (month > 2)
		{
			for (int i = year + 1; i <= year + 18; i++)
			{
				if (i % 400 == 0 || (i % 4 == 0 && i % 100 != 0))
					sumday += 366;
				else
					sumday += 365;
			}
		}
		cout << sumday << endl;
	}
}
```

## 1003-As Easy As A+B(1040)

### Problem Description

These days, I am thinking about a question, how can I get a problem as easy as A+B? It is fairly difficulty to do such a thing. Of course, I got it after many waking nights.
Give you some integers, your task is to sort these number ascending (升序).
You should know how easy the problem is now!
Good luck!

### Input

Input contains multiple test cases. The first line of the input is a single integer T which is the number of test cases. T test cases follow. Each test case contains an integer N (1<=N<=1000 the number of integers to be sorted) and then N integers follow in the same line.
It is guarantied that all integers are in the range of 32-int.

### Output

For each case, print the sorting result, and one line one case.

### Sample Input

```
2
3 2 1 3
9 1 4 7 2 5 8 3 6 9
```

### Sample Output

```
1 2 3
1 2 3 4 5 6 7 8 9
```

### Author

lcy

### Solution

```c++
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
	int n;
	int m;
	int temp;
	vector<int> a;
	cin >> n;
	for(int p = 0; p < n; p++)
	{
		while (cin>>m)
		{
			temp = 0;
			for (int i = 0; i < m; i++)
			{
				cin >> temp;
				a.push_back(temp);
			}
			sort(a.begin(), a.end());
			for (int j = 0; j < (m - 1); j++)
			{
				cout << a[j] << " ";
			}
			cout << a[m - 1] << endl;
			a.clear();
		}
	}
}
```

## 1004-排序(1106)

### Problem Description

输入一行数字，如果我们把这行数字中的‘5’都看成空格，那么就得到一行用空格分割的若干非负整数（可能有些整数以‘0’开头，这些头部的‘0’应该被忽略掉，除非这个整数就是由若干个‘0’组成的，这时这个整数就是0）。

你的任务是：对这些分割得到的整数，依从小到大的顺序排序输出。



### Input

输入包含多组测试用例，每组输入数据只有一行数字（数字之间没有空格），这行数字的长度不大于1000。  

输入数据保证：分割得到的非负整数不会大于100000000；输入数据不可能全由‘5’组成。

### Output

对于每个测试用例，输出分割得到的整数排序的结果，相邻的两个整数之间用一个空格分开，每组输出占一行。

### Sample Input

```
0051231232050775
```

### Sample Output

```
0 77 12312320
```

### Source

POJ

### Solution

```c++
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
	string s, str;
	int i, n, k;
	vector<int>vec;
	while (cin >> s)
	{
		str = "";
		vec.clear();
		k = 0;
		for (i = 0; i < s.length(); i++)
		{
			if (s[i] == '5')
			{
				if (str != "")
				{
					n = atoi(str.c_str());//将string转化为int
					vec.push_back(n);
				}
				str = "";//记住每一次传值都要清空一下
			}
			else
			{
				str += s[i];
			}
		}
		if (str != "")
		{
			n = atoi(str.c_str());
			vec.push_back(n);
		}
		sort(vec.begin(), vec.end());
		for (i = 0; i < vec.size(); i++)
		{
			cout << vec[i];
			if (i == vec.size() - 1)
				cout << endl;
			else
				cout << " ";
		}
	}
	return 0;
}
```

## 1005-Let the Balloon Rise(1004)

### Problem Description

Contest time again! How excited it is to see balloons floating around. But to tell you a secret, the judges' favorite time is guessing the most popular problem. When the contest is over, they will count the balloons of each color and find the result.

This year, they decide to leave this lovely job to you.

### Input

Input contains multiple test cases. Each test case starts with a number N (0 < N <= 1000) -- the total number of balloons distributed. The next N lines contain one color each. The color of a balloon is a string of up to 15 lower-case letters.

A test case with N = 0 terminates the input and this test case is not to be processed.

### Output

For each case, print the color of balloon for the most popular problem on a single line. It is guaranteed that there is a unique solution for each test case.

### Sample Input

```
5
green
red
blue
red
red
3
pink
orange
pink
0
```

### Sample Output

```
red
pink
```

### Author

WU, Jiazhi

### Source

ZJCPC2004

### Solution

```c++
#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
	int N, count = 1, max = 1;
	string s, smax;
	while (cin >> N && N != 0)
	{
		vector<string> str;
		for (int i = 0; i < N; i++)
		{
			cin >> s;
			str.push_back(s);
		}
		smax = str[0];
		for (auto& c1 : str)
		{
			count = 1;
			for (auto& c2 : str)
			{
				if (c1 == c2)
				{
					count++;
				}
			}
			if (count > max)
			{
				max = count;
				smax = c1;
			}
		}
		if (N)
			cout << smax << endl;
	}
	return 0;
}
```

## 1006-sort(1425)

### Problem Description

给你n个整数，请按从大到小的顺序输出其中前m大的数。

### Input

每组测试数据有两行，第一行有两个数n,m(0<n,m<1000000)，第二行包含n个各不相同，且都处于区间[-500000,500000]的整数。

### Output

对每组测试数据按从大到小的顺序输出前m大的数。

### Sample Input

```
5 3
3 -35 92 213 -644
```

### Sample Output

```
213 92 3
```

### Hint

请用VC/VC++提交

### Author

LL

### Source

ACM暑期集训队练习赛（三）

### Solution

```c++
#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

int num[1000005];
int main()
{
	int m, n;
	while (scanf("%d%d", &m, &n) != EOF)
	{
		for (int i = 0; i < m; i++)
		{
			scanf("%d", &num[i]);
		}
		sort(num, num + m);
		for (int j = m - 1; j >= m - n; j--)
			(j != m - n) ? printf("%d ", num[j]) : printf("%d\n", num[j]);
	}
	return 0;
}
```

## 1007-A+B(1228)

### Problem Description

读入两个小于100的正整数A和B,计算A+B.
需要注意的是:A和B的每一位数字由对应的英文单词给出.

### Input

测试输入包含若干测试用例,每个测试用例占一行,格式为"A + B =",相邻两字符串有一个空格间隔.当A和B同时为0时输入结束,相应的结果不要输出.

### Output

对每个测试用例输出1行,即A+B的值.

### Sample Input

```
one + two =
three four + five six =
zero seven + eight nine =
zero + zero =
```

### Sample Output

```
3
90
96
```

### Source

浙大计算机研究生复试上机考试-2005年

### Solution

```c++
#include<iostream>
#include<map>
#include<cstring>
using namespace std;

map<string, int>m;

int main()
{
	m["zero"] = 0;
	m["one"] = 1;
	m["two"] = 2;
	m["three"] = 3;
	m["four"] = 4;
	m["five"] = 5;
	m["six"] = 6;
	m["seven"] = 7;
	m["eight"] = 8;
	m["nine"] = 9;
	m["+"] = 10;
	m["="] = 11;
	int cnt[2] = { 0 };
	char a[20];
	int k = 0; int z = 0;
	int sum[2] = { 0 };
	while (cin >> a)
	{
		int d = m[a];
		if (d < 10) cnt[k++] = d;
		if (d == 10)
		{
			if (k == 1) sum[0] = cnt[0];
			else if (k == 2) sum[0] = 10 * cnt[0] + cnt[1];
			k = 0;
		}
		if (d == 11)
		{
			if (k == 1) sum[1] = cnt[0];
			else if (k == 2) sum[1] = 10 * cnt[0] + cnt[1];
			k = 0;
			if (sum[0] + sum[1] == 0) break;
			else cout << sum[0] + sum[1] << endl;
		}
	}
	return 0;
}
```