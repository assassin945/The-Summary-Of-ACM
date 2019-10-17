# 练习10

## 1001-Recursive sequence

### Problem Description

Farmer John likes to play mathematics games with his N cows. Recently, they are attracted by recursive sequences. In each turn, the cows would stand in a line, while John writes two positive numbers a and b on a blackboard. And then, the cows would say their identity number one by one. The first cow says the first number a and the second says the second number b. After that, the i-th cow says the sum of twice the (i-2)-th number, the (i-1)-th number, and i4. Now, you need to write a program to calculate the number of the N-th cow in order to check if John’s cows can make it right. 

### Input

The first line of input contains an integer t, the number of test cases. t test cases follow.
Each case contains only one line with three numbers N, a and b where N,a,b < 231 as described above.

### Output

For each test case, output the number of the N-th cow. This number might be very large, so you need to output it modulo 2147493647.

### Sample Input

```
2
3 1 2
4 1 10
```

### Sample Output

```
85
369
```

### Hint

In the first case, the third number is 85 = 2*1十2十3^4.
In the second case, the third number is 93 = 2*1十1*10十3^4 and the fourth number is 369 = 2 * 10 十 93 十 4^4.

### Source

2016ACM/ICPC亚洲区沈阳站-重现赛（感谢东北大学）

## 1002-sort

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

## 1003-Who's in the Middle

### Problem Description

FJ is surveying his herd to find the most average cow. He wants to know how much milk this 'median' cow gives: half of the cows give as much or more than the median; half give as much or less. 

Given an odd number of cows N (1 <= N < 10,000) and their milk output (1..1,000,000), find the median amount of milk given such that at least half the cows give the same amount of milk or more and at least half give the same or less.

### Input

\* Line 1: A single integer N 

\* Lines 2..N+1: Each line contains a single integer that is the milk output of one cow.

### Output

\* Line 1: A single integer that is the median milk output.

### Sample Input

```
5
2
4
1
3
5
```

### Sample Output

```
3

<div style='font-family:Times New Roman;font-size:14px;background-color:F4FBFF;border:#B7CBFF 1px dashed;padding:6px'><div style='font-family:Arial;font-weight:bold;color:#7CA9ED;border-bottom:#B7CBFF 1px dashed'><i>Hint</i></div> 
INPUT DETAILS: 

Five cows with milk outputs of 1..5 

OUTPUT DETAILS: 

1 and 2 are below 3; 4 and 5 are above 3.
</div>
```

### Source

USACO 2004 November

## 1004-Swaps and Inversions

### Problem Description

Long long ago, there was an integer sequence a.
Tonyfang think this sequence is messy, so he will count the number of inversions in this sequence. Because he is angry, you will have to pay x yuan for every inversion in the sequence.
You don't want to pay too much, so you can try to play some tricks before he sees this sequence. You can pay y yuan to swap any two adjacent elements.
What is the minimum amount of money you need to spend?
The definition of inversion in this problem is pair (i,j) which 1≤i<j≤n and ai>aj.

### Input

There are multiple test cases, please read till the end of input file.
For each test, in the first line, three integers, n,x,y, n represents the length of the sequence.
In the second line, n integers separated by spaces, representing the orginal sequence a.
1≤n,x,y≤100000, numbers in the sequence are in [−109,109]. There're 10 test cases.

### Output

For every test case, a single integer representing minimum money to pay.

### Sample Input

```
3 233 666
1 2 3
3 1 666
3 2 1
```

### Sample Output

```
0
3
```

### Source

2018 Multi-University Training Contest 2

## 1005-Inversion

### Problem Description

bobo has a sequence a1,a2,…,an. He is allowed to swap two **adjacent** numbers for no more than k times.

Find the minimum number of inversions after his swaps.

Note: The number of inversions is the number of pair (i,j) where 1≤i<j≤n and ai>aj.

### Input

The input consists of several tests. For each tests:

The first line contains 2 integers n,k (1≤n≤105,0≤k≤109). The second line contains n integers a1,a2,…,an (0≤ai≤109).

### Output

For each tests:

A single integer denotes the minimum number of inversions.

### Sample Input

```
3 1
2 2 1
3 0
2 2 1
```

### Sample Output

```
1
2
```

### Author

Xiaoxu Guo (ftiasch)

### Source

2014 Multi-University Training Contest 5

