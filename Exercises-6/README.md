# Exercises-6

> 贪心策略

## 1001-Repair the Wall(2124)

### Problem Description

Long time ago , Kitty lived in a small village. The air was fresh and the scenery was very beautiful. The only thing that troubled her is the typhoon.

When the typhoon came, everything is terrible. It kept blowing and raining for a long time. And what made the situation worse was that all of Kitty's walls were made of wood.

One day, Kitty found that there was a crack in the wall. The shape of the crack is
a rectangle with the size of 1×L (in inch). Luckly Kitty got N blocks and a saw(锯子) from her neighbors.
The shape of the blocks were rectangle too, and the width of all blocks were 1 inch. So, with the help of saw, Kitty could cut down some of the blocks(of course she could use it directly without cutting) and put them in the crack, and the wall may be repaired perfectly, without any gap.

Now, Kitty knew the size of each blocks, and wanted to use as fewer as possible of the blocks to repair the wall, could you help her ?

### Input

The problem contains many test cases, please process to the end of file( EOF ).
Each test case contains two lines.
In the first line, there are two integers L(0<L<1000000000) and N(0<=N<600) which
mentioned above.
In the second line, there are N positive integers. The ith integer Ai(0<Ai<1000000000 ) means that the ith block has the size of 1×Ai (in inch).

### Output

For each test case , print an integer which represents the minimal number of blocks are needed.
If Kitty could not repair the wall, just print "impossible" instead.

### Sample Input

```html
5 3
3 2 1
5 2
2 1
```

### Sample Output

```htnl
2
impossible
```

### Author

linle

### Source

HDU 2007-10 Programming Contest

### Solution

```c++
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
    vector<int> a;
    int l,n,tem,res;
    bool flag;
    while (cin>>l>>n)
    {
        res=0;
        flag=false;
        for (int i = 0; i < n; i++)
        {
            cin>>tem;
            a.push_back(tem);
        }
        sort(a.begin(),a.end());
        for(int j = a.size()-1; j >= 0; j--){
            l-=a[j];
            res++;
            if (l<=0)
            {
                flag=true;
                break;
            }
        }
        if (flag)
        {
            cout<<res<<endl;
        }
        else
        {
            cout<<"impossible"<<endl;
        }
        a.clear();
    }
    return 0;
}
```

## 1002-Go Home(3090)

### Problem Description

There comes the holiday, Partychen set foot on the way home. He takes some ECNU coins to hire bodyguards to prevent from being robbed before he went home. But the bodyguard takes one coin for every kilometer. If Partychen walks without bodyguard , he will be robbed one ECNU coin by every robber on every kilometer . Of course , he can choose where to hire bodyguard or where to be robbed as he like.
For example , there are two roads on his way home and he wants to use 8 ECNU coins to hire bodyguard , the first road takes 4 kilometers with 5 robbers ( per kilometer ) and the second takes 5 kilometers with 6 robbers. He could choose the last 3 kilometers on the first road and the whole kilometers on the second road to hire bodyguard to protect him, and leave the first kilometer on the first road to be robbed by 5 robbers, which he will be robbed 5 ECNU coins.
Now , Partychen want to know how many ECNU coins will be robbed at least.

### Input

It consists of multi-case .
Every case starts with two integers N and M ( 0≦N≦10,000, 0≦M≦1,000,000,000 ) which means that there are N roads and M ECNU coins to hire bodyguard.
The followed N lines contains two integers D and P (1<=D<=10,000 , 0<=P<=10 ) , which means the length of every road and the number of robbers in every kilometer on this road.
End with N=0 and M=0 .

### Output

An integer means the number of ECNU coins to be robbed at least.

### Sample Input

```html
2 8
4 5
5 6
3 1
5 10
5 10
5 10
0 0
```

### Sample Output

```html
5 
140
```

### Source

2009 Multi-University Training Contest 18 - Host by ECNU

## 1003-Doing Homework again(1789)

### Problem Description

Ignatius has just come back school from the 30th ACM/ICPC. Now he has a lot of homework to do. Every teacher gives him a deadline of handing in the homework. If Ignatius hands in the homework after the deadline, the teacher will reduce his score of the final test. And now we assume that doing everyone homework always takes one day. So Ignatius wants you to help him to arrange the order of doing homework to minimize the reduced score.

### Input

The input contains several test cases. The first line of the input is a single integer T that is the number of test cases. T test cases follow.
Each test case start with a positive integer N(1<=N<=1000) which indicate the number of homework.. Then 2 lines follow. The first line contains N integers that indicate the deadlines of the subjects, and the next line contains N integers that indicate the reduced scores.

### Output

For each test case, you should output the smallest total reduced score, one line per test case.

### Sample Input

```
3
3
3 3 3
10 5 1
3
1 3 1
6 2 3
7
1 4 6 4 2 4 3
3 2 1 7 6 5 4
```

### Sample Output

```
0
3
5
```

### Author

lcy

### Source

2007省赛集训队练习赛（10）_以此感谢DOOMIII

## 1004-Hero(4310)

### Problem Description

When playing DotA with god-like rivals and pig-like team members, you have to face an embarrassing situation: All your teammates are killed, and you have to fight 1vN.

There are two key attributes for the heroes in the game, health point (HP) and damage per shot (DPS). Your hero has almost infinite HP, but only 1 DPS.

To simplify the problem, we assume the game is turn-based, but not real-time. In each round, you can choose one enemy hero to attack, and his HP will decrease by 1. While at the same time, all the lived enemy heroes will attack you, and your HP will decrease by the sum of their DPS. If one hero's HP fall equal to (or below) zero, he will die after this round, and cannot attack you in the following rounds.

Although your hero is undefeated, you want to choose best strategy to kill all the enemy heroes with minimum HP loss.

### Input

The first line of each test case contains the number of enemy heroes N (1 <= N <= 20). Then N lines followed, each contains two integers DPSi and HPi, which are the DPS and HP for each hero. (1 <= DPSi, HPi <= 1000)

### Output

Output one line for each test, indicates the minimum HP loss.

### Sample Input

```
1
10 2
2
100 1
1 100
```

### Sample Output

```
20
201
```

### Author

TJU

### Source

2012 Multi-University Training Contest 2

## 1005-Moving Tables(1050)

### Problem Description

The famous ACM (Advanced Computer Maker) Company has rented a floor of a building whose shape is in the following figure.

![img](http://acm.hdu.edu.cn/data/images/1050-1.gif)

The floor has 200 rooms each on the north side and south side along the corridor. Recently the Company made a plan to reform its system. The reform includes moving a lot of tables between rooms. Because the corridor is narrow and all the tables are big, only one table can pass through the corridor. Some plan is needed to make the moving efficient. The manager figured out the following plan: Moving a table from a room to another room can be done within 10 minutes. When moving a table from room i to room j, the part of the corridor between the front of room i and the front of room j is used. So, during each 10 minutes, several moving between two rooms not sharing the same part of the corridor will be done simultaneously. To make it clear the manager illustrated the possible cases and impossible cases of simultaneous moving.

![img](http://acm.hdu.edu.cn/data/images/1050-2.gif)

For each room, at most one table will be either moved in or moved out. Now, the manager seeks out a method to minimize the time to move all the tables. Your job is to write a program to solve the manager’s problem.

### Input

The input consists of T test cases. The number of test cases ) (T is given in the first line of the input. Each test case begins with a line containing an integer N , 1<=N<=200 , that represents the number of tables to move. Each of the following N lines contains two positive integers s and t, representing that a table is to move from room number s to room number t (each room number appears at most once in the N lines). From the N+3-rd line, the remaining test cases are listed in the same manner as above.

### Output

The output should contain the minimum time in minutes to complete the moving, one per line.

### Sample Input

```
3 
4 
10 20 
30 40 
50 60 
70 80 
2 
1 3 
2 200 
3 
10 100 
20 80 
30 50 
```

### Sample Output

```
10
20
30
```

### Source

Asia 2001, Taejon (South Korea)