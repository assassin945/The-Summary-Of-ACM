# Exercises-4

> 本次练习主要内容是搜索算法，前面的题目不是很难，
> 最后两个题目是深度优先搜索，有一些难度，需要勤加练习。

## 1001-Doubles(1303)

### Problem Description

As part of an arithmetic competency program, your students will be given randomly generated lists of from 2 to 15 unique positive integers and asked to determine how many items in each list are twice some other item in the same list. You will need a program to help you with the grading. This program should be able to scan the lists and output the correct answer for each one. For example, given the list
1 4 3 2 9 7 18 22

your program should answer 3, as 2 is twice 1, 4 is twice 2, and 18 is twice 9.

### Input

The input file will consist of one or more lists of numbers. There will be one list of numbers per line. Each list will contain from 2 to 15 unique positive integers. No integer will be larger than 99. Each line will be terminated with the integer 0, which is not considered part of the list. A line with the single number -1 will mark the end of the file. The example input below shows 3 separate lists. Some lists may not contain any doubles.

### Output

The output will consist of one line per input list, containing a count of the items that are double some other item.

### Sample Input

```html
1 4 3 2 9 7 18 22 0
2 4 8 10 0
7 5 11 13 1 3 0
-1
```

### Sample Output

```html
3
2
0
```

### Source

Mid-Central USA 2003

HDU-1303

### Solution

```c++
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int temp, res;
    vector<int> a;
    while (true)
    {
        res = 0;
        cin >> temp;
        if (temp == -1)
        {
            break;
        }
        a.push_back(temp);
        while (cin>>temp && temp)
        {
            a.push_back(temp);
        }
        sort(a.begin(), a.end());
        for (int i = 0; i < a.size() - 1; i++)
        {
            for (int j = i; j < a.size(); j++)
            {
                if (a[j] == (2 * a[i]))
                {
                    res++;
                    break;
                }
            }
        }
        cout << res << endl;
        a.clear();
    }
}
```

## 1002-Reverse Number(1266)

### Problem Description

Welcome to 2006'4 computer college programming contest!

Specially, I give my best regards to all freshmen! You are the future of HDU ACM! And now, I must tell you that ACM problems are always not so easy, but, except this one... Ha-Ha!

Give you an integer; your task is to output its reverse number. Here, reverse number is defined as follows:

1. The reverse number of a positive integer ending without 0 is general reverse, for example, reverse (12) = 21;

2. The reverse number of a negative integer is negative, for example, reverse (-12) = -21;

3. The reverse number of an integer ending with 0 is described as example, reverse (1200) = 2100.

### Input

Input file contains multiple test cases. There is a positive integer n (n<100) in the first line, which means the number of test cases, and then n 32-bit integers follow.

### Output

For each test case, you should output its reverse number, one case per line.

### Sample Input

```html
3
12
-12
1200
```

### Sample Output

```html
21
-21
2100
```

### Author

lcy

### Source

HDU 2006-4 Programming Contest

HDU-1266

### Solution

```c++
#include <iostream>
#include <cstring>
using namespace std;
int main(){
    int n;
    int index,len,zero;
    char a[200];
    cin>>n;
    while (n--)
    {
        cin>>a;
        len=strlen(a);
        index=0;
        zero=0;
        for(index=len-1; index>0; index--){
            if (a[index]=='0')
            {
                zero++;
            }
            if (a[index]!='0')
            {
                break;
            }
        }
        if (a[0]=='-')
        {
            cout<<'-';
            for(int i = index; i > 0; i--){
                cout<<a[i];
            }
            for (int j = 0; j < zero; j++)
            {
                cout<<'0';
            }
        }
        else
        {
            for(int i = index; i >= 0; i--){
                cout<<a[i];
            }
            for (int j = 0; j < zero; j++)
            {
                cout<<'0';
            }
        }
        cout<<endl;
    }
    return 0;
}
```

## 1003-Clock(1209)

### Problem Description

There is an analog clock with two hands: an hour hand and a minute hand. The two hands form an angle. The angle is measured as the smallest angle between the two hands. The angle between the two hands has a measure that is greater than or equal to 0 and less than or equal to 180 degrees.

Given a sequence of five distinct times written in the format hh : mm , where hh are two digits representing full hours (00 <= hh <= 23) and mm are two digits representing minutes (00 <= mm <= 59) , you are to write a program that finds the median, that is, the third element of the sorted sequence of times in a nondecreasing order of their associated angles. Ties are broken in such a way that an earlier time precedes a later time.

For example, suppose you are given a sequence (06:05, 07:10, 03:00, 21:00, 12:55) of times. Because the sorted sequence is (12:55, 03:00, 21:00, 06:05, 07:10), you are to report 21:00.

### Input

The input consists of T test cases. The number of test cases (T) is given on the first line of the input file. Each test case is given on a single line, which contains a sequence of five distinct times, where times are given in the format hh : mm and are separated by a single space.

### Output

Print exactly one line for each test case. The line is to contain the median in the format hh : mm of the times given. The following shows sample input and output for three test cases.

### Sample Input

```html
3
00:00 01:00 02:00 03:00 04:00
06:05 07:10 03:00 21:00 12:55
11:05 12:05 13:05 14:05 15:05
```

### Sample Output

```html
02:00
21:00
14:05
```

### Source

Asia 2003（Seoul）

HDU-1209

### Solution

```c++
#include <iostream>
#include <stdio.h>
#include <cmath>
using namespace std;
struct clock
{
    int h;
    int m;
    double a;
}c[6];
int main(){
    int n;
    int th,tm;
    double ta;
    cin>>n;
    while (n--)
    {
        for (int i = 0; i < 5; i++)
        {
            scanf("%d:%d",&c[i].h,&c[i].m);//杭电oj在这个地方对abs的识别有非常大的问题
            double hh=(c[i].h%12)*30+c[i].m*0.5;
            double mm=c[i].m*6;
            c[i].a=abs(hh-mm)>180?(360-abs(hh-mm)):abs(hh-mm);
        }
        //sort
        //对于排序有更优方案
        for (int j = 0; j < 4; j++)
        {
            for (int k = j+1; k < 5; k++)
            {
                if (c[k].a<c[j].a)
                {
                    th=c[k].h;
                    tm=c[k].m;
                    ta=c[k].a;
                    c[k].h=c[j].h;
                    c[k].m=c[j].m;
                    c[k].a=c[j].a;
                    c[j].h=th;
                    c[j].m=tm;
                    c[j].a=ta;
                }
                else if (c[k].a==c[j].a)
                {
                    if (c[k].h<c[j].h)
                    {
                        th=c[k].h;
                        tm=c[k].m;
                        ta=c[k].a;
                        c[k].h=c[j].h;
                        c[k].m=c[j].m;
                        c[k].a=c[j].a;
                        c[j].h=th;
                        c[j].m=tm;
                        c[j].a=ta;
                    }
                }
            }
        }
        //output
        printf("%02d:%02d\n",c[2].h,c[2].m);
    }
    return 0;
}
```

对于上面方法中的排序有更优的方案

```c++
#include <iostream>
#include <algorithm>
#include <stdio.h>
#include <cmath>
using namespace std;
struct clock
{
    int h;
    int m;
    double a;
}c[6];
bool cmp(clock,clock);
int main(){
    int n;
    int th,tm;
    double ta;
    cin>>n;
    while (n--)
    {
        for (int i = 0; i < 5; i++)
        {
            scanf("%d:%d",&c[i].h,&c[i].m);//杭电oj在这个地方对abs的识别有非常大的问题
            double hh=(c[i].h%12)*30+c[i].m*0.5;
            double mm=c[i].m*6;
            c[i].a=abs(hh-mm)>180?(360-abs(hh-mm)):abs(hh-mm);
        }
        //sort
        sort(c,c+5,cmp);
        //output
        printf("%02d:%02d\n",c[2].h,c[2].m);
    }
    return 0;
}
bool cmp(clock x,clock y)
{
    if(x.a!=y.a) return x.a<y.a;
    else if(x.a==y.a&&x.h==y.h) return x.m<y.m;
    else return x.h<y.h;
}
```

## 1004-Ignatius and the Princess II(1027)

### Problem Description

Now our hero finds the door to the BEelzebub feng5166. He opens the door and finds feng5166 is about to kill our pretty Princess. But now the BEelzebub has to beat our hero first. feng5166 says, "I have three question for you, if you can work them out, I will release the Princess, or you will be my dinner, too." Ignatius says confidently, "OK, at last, I will save the Princess."

"Now I will show you the first problem." feng5166 says, "Given a sequence of number 1 to N, we define that 1,2,3...N-1,N is the smallest sequence among all the sequence which can be composed with number 1 to N(each number can be and should be use only once in this problem). So it's easy to see the second smallest sequence is 1,2,3...N,N-1. Now I will give you two numbers, N and M. You should tell me the Mth smallest sequence which is composed with number 1 to N. It's easy, isn't is? Hahahahaha......"
Can you help Ignatius to solve this problem?

### Input

The input contains several test cases. Each test case consists of two numbers, N and M(1<=N<=1000, 1<=M<=10000). You may assume that there is always a sequence satisfied the BEelzebub's demand. The input is terminated by the end of file.

### Output

For each test case, you only have to output the sequence satisfied the BEelzebub's demand. When output a sequence, you should print a space between two numbers, but do not output any spaces after the last number.

### Sample Input

```
6 4
11 8
```

### Sample Output

```
1 2 3 5 6 4
1 2 3 4 5 6 7 9 8 11 10
```

### Author

Ignatius.L

### Solution

```c++
#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int a[1001];
    int n,m;
    while (cin>>n>>m)
    {
        for (int i = 1; i <= n; i++)
        {
            a[i]=i;
        }
        for (int j = 1; j < m; j++) {
            next_permutation(a + 1, a + n + 1);//这个函数用于生成逆序序列
        }
        for (int k = 1; k <= n; k++) {
            printf("%d", a[k]);
            if (k != n)
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}
```

这道题利用内置函数```next_permutation```生成逆序序列，非常简便。

## 1005-Kill the monster(2616)

### Problem Description

There is a mountain near yifenfei’s hometown. On the mountain lived a big monster. As a hero in hometown, yifenfei wants to kill it.
Now we know yifenfei have n spells, and the monster have m HP, when HP <= 0 meaning monster be killed. Yifenfei’s spells have different effect if used in different time. now tell you each spells’s effects , expressed (A ,M). A show the spell can cost A HP to monster in the common time. M show that when the monster’s HP <= M, using this spell can get double effect.

### Input

The input contains multiple test cases.
Each test case include, first two integers n, m (2<n<10, 1<m<10^7), express how many spells yifenfei has.
Next n line , each line express one spell. (Ai, Mi).(0<Ai,Mi<=m).

### Output

For each test case output one integer that how many spells yifenfei should use at least. If yifenfei can not kill the monster output -1.

### Sample Input

```html
3 100
10 20
45 89
5  40

3 100
10 20
45 90
5 40

3 100
10 20
45 84
5 40
```

### Sample Output

```html
3
2
-1
```

### Author

yifenfei

### Source

奋斗的年代

HDU-2616

### Solution

```c++
#include <iostream>
using namespace std;
struct spell
{
    int a;
    int m;
}s[11];
bool vis[11];
int n,ans;
void dfs(int,int);
int main(){
    int hp;
    while (cin>>n>>hp)
    {
        ans=99;
        for (int i = 0; i < n; i++)
        {
            cin>>s[i].a>>s[i].m;
            vis[i]=0;
        }
        dfs(hp,0);
        if (ans==99)
        {
            cout<<"-1"<<endl;
        }
        else
        {
            cout<<ans<<endl;
        }
    }
    return 0;
}
void dfs(int h,int step){
    if (step>=ans)
    {
        return;
    }
    if (h<=0)
    {
        if (step<ans)
        {
            ans=step;
        }
        return;
    }
    for (int i = 0; i < n; i++)
    {
        if (!vis[i])
        {
            vis[i]=1;
            if (h<=s[i].m)
            {
                dfs(h-s[i].a*2,step+1);
            }
            else
            {
                dfs(h-s[i].a,step+1);
            }
            vis[i]=0;
        }
    }
}
```

这道题由于没有明确的“进攻”策略，无法给出具体的方案，这时可以使用DFS（深度优先搜索）。

## 1006-下沙小面的(2)(1572)

### Problem Description

前文再续，书接上一题。话说当上小面的司机的Lele在施行他的那一套拉客法则以后，由于走的路线太长，油费又贵，不久便亏本了。(真可怜～)于是他又想了一个拉客的办法。

对于每一次拉客活动，他一次性把乘客都拉上车(当然也不会超过7个，因为位置只有7个)。然后，Lele计算出一条路线(出于某些目的，Lele只把车上乘客的目的地作为这条路线上的站点），把所有乘客都送到目的地(在这路线上不拉上其他乘客)，并且使总路线长度最短。

不过Lele每次都要花很多时间来想路线，你能写个程序帮他嘛？

### Input

本题目包含多组测试。最后一组测试后有一个0代表结束。
每组测试第一行有一个整数NCity(3<=NCity<=30)表示下沙一共有多少个站点(站点从0开始标号)。
然后给你一个 NCity * NCity 的矩阵，表示站点间的两两距离。即这个矩阵中第 i 行 第 j 列的元素表示站点 i 和站点 j 的距离。(0<=距离<=1000)
再然后有一个整数K(1<=K<=7)，表示Lele拉上车的人数。
接下来的一行里包括 K 个整数，代表上车的人分别要去的站点。(0<站点<NCity)

注意：
对于每组测试，Lele都是在站点0拉上乘客的。

### Output

对于每一组测试，在一行内输出一个整数，表示最短路线的长度。

### Sample Input

```html
3
0 1 2
1 0 3
2 3 0
3
1 1 2
0
```

### Sample Output

```html
4
```

### Author

linle

### Source

HDU 2007-1 Programming Contest

### Solution

```c++
#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;
int n,k,res,counter;
int map[31][31];
int vis[31];
void dfs(int,int,int);
int main(){
    int temp;
    while (cin>>n && n)
    {
        //初始化地图
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin>>map[i][j];
            }
        }
        memset(vis,0,sizeof(vis));
        counter=0;
        res=1001*31;
        //初始化站点
        cin>>k;
        for (int i = 0; i < k; i++)
        {
            cin>>temp;
            if (!vis[temp])//站点出现过就跳过，1表示出现过
            {
                vis[temp]=1;//标记站点
                counter++;//记录一共有几个站点
            }
        }
        //暴力搜索
        dfs(0,0,0);
        cout<<res<<endl;
    }
    return 0;
}
void dfs(int count,int sum,int start){//三个参数分别代表计数器、路程和、起始点
    if (count==counter)//计数器与总站点数一致时函数返回
    {
        res=min(res,sum);//结果取总和与结果两者的最小值
        return;
    }
    for (int i = 0; i < n; i++)
    {
        if (vis[i])//只有标记的站点才会进入路长计数
        {
            vis[i]=0;//将这一站点标记为无效站点，这样能够避免在迭代过程中重复计算
            dfs(count+1,sum+map[start][i],i);//进行迭代
            vis[i]=1;//重新恢复站点标记
        }
    }
}
```

这道题的一个陷阱是贪心算法，也就是每次选择路程最短的路线前进，然而这是一个极大的错误，我们并不能保证路程总和一定最小，这需要仔细思考。

因此，此题只能采取暴力搜索，使用DFS穷尽所有可能情况。类似的算法还需要多加研习。