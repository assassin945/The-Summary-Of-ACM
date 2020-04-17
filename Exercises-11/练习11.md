# 练习11

## 1001 Cable master

### Problem Description

Inhabitants of the Wonderland have decided to hold a regional programming contest. The Judging Committee has volunteered and has promised to organize the most honest contest ever. It was decided to connect computers for the contestants using a "star" topology - i.e. connect them all to a single central hub. To organize a truly honest contest, the Head of the Judging Committee has decreed to place all contestants evenly around the hub on an equal distance from it.

To buy network cables, the Judging Committee has contacted a local network solutions provider with a request to sell for them a specified number of cables with equal lengths. The Judging Committee wants the cables to be as long as possible to sit contestants as far from each other as possible.

The Cable Master of the company was assigned to the task. He knows the length of each cable in the stock up to a centimeter, and he can cut them with a centimeter precision being told the length of the pieces he must cut. However, this time, the length is not known and the Cable Master is completely puzzled.

You are to help the Cable Master, by writing a program that will determine the maximal possible length of a cable piece that can be cut from the cables in the stock, to get the specified number of pieces.

### Input

The input consists of several testcases. The first line of each testcase contains two integer numbers N and K, separated by a space. N (1 ≤ N ≤ 10000) is the number of cables in the stock, and K (1 ≤ K ≤ 10000) is the number of requested pieces. The first line is followed by N lines with one number per line, that specify the length of each cable in the stock in meters. All cables are at least 1 centimeter and at most 100 kilometers in length. All lengths in the input are written with a centimeter precision, with exactly two digits after a decimal point.

The input is ended by line containing two 0's.

### Output

For each testcase write to the output the maximal length (in meters) of the pieces that Cable Master may cut from the cables in the stock to get the requested number of pieces. The number must be written with a centimeter precision, with exactly two digits after a decimal point.

If it is not possible to cut the requested number of pieces each one being at least one centimeter long, then the output must contain the single number "0.00" (without quotes).

### Sample Input

```
4 11
8.02
7.43
4.57
5.39
0 0
```

### Sample Output

```
2.00
```

### Source

2001-2002 ACM Northeastern European Regional Programming Contest

## 1002-The Frog's Games

### Problem Description

The annual Games in frogs' kingdom started again. The most famous game is the Ironfrog Triathlon. One test in the Ironfrog Triathlon is jumping. This project requires the frog athletes to jump over the river. The width of the river is L (1<= L <= 1000000000). There are n (0<= n <= 500000) stones lined up in a straight line from one side to the other side of the river. The frogs can only jump through the river, but they can land on the stones. If they fall into the river, they 
are out. The frogs was asked to jump at most m (1<= m <= n+1) times. Now the frogs want to know if they want to jump across the river, at least what ability should they have. (That is the frog's longest jump distance).

### Input

The input contains several cases. The first line of each case contains three positive integer L, n, and m. 
Then n lines follow. Each stands for the distance from the starting banks to the nth stone, two stone appear in one place is impossible.

### Output

For each case, output a integer standing for the frog's ability at least they should have.

### Sample Input

```
6 1 2
2
25 3 3
11 
2
18
```

### Sample Output

```
4
11
```

### Source

The 36th ACM/ICPC Asia Regional Dalian Site —— Online Contest

## 1003-Pie

### Problem Description

My birthday is coming up and traditionally I'm serving pie. Not just one pie, no, I have a number N of them, of various tastes and of various sizes. F of my friends are coming to my party and each of them gets a piece of pie. This should be one piece of one pie, not several small pieces since that looks messy. This piece can be one whole pie though.

My friends are very annoying and if one of them gets a bigger piece than the others, they start complaining. Therefore all of them should get equally sized (but not necessarily equally shaped) pieces, even if this leads to some pie getting spoiled (which is better than spoiling the party). Of course, I want a piece of pie for myself too, and that piece should also be of the same size. 

What is the largest possible piece size all of us can get? All the pies are cylindrical in shape and they all have the same height 1, but the radii of the pies can be different.

### Input

One line with a positive integer: the number of test cases. Then for each test case:
---One line with two integers N and F with 1 <= N, F <= 10 000: the number of pies and the number of friends.
---One line with N integers ri with 1 <= ri <= 10 000: the radii of the pies.

### Output

For each test case, output one line with the largest possible volume V such that me and my friends can all get a pie piece of size V. The answer should be given as a floating point number with an absolute error of at most 10^(-3).

### Sample Input

```
3
3 3
4 3 3
1 24
5
10 5
1 4 2 3 4 5 6 5 4 2
```

### Sample Output

```
25.1327
3.1416
50.2655
```

### Source

NWERC2006

## 1004-Strange function

### Problem Description

Now, here is a fuction:
  F(x) = 6 * x^7+8*x^6+7*x^3+5*x^2-y*x (0 <= x <=100)
Can you find the minimum value when x is between 0 and 100.

### Input

The first line of the input contains an integer T(1<=T<=100) which means the number of test cases. Then T lines follow, each line has only one real numbers Y.(0 < Y <1e10)

### Output

Just the minimum value (accurate up to 4 decimal places),when x is between 0 and 100.

### Sample Input

```
2
100
200
```

### Sample Output

```
-74.4291
-178.8534
```

### Author

Redow

## 1005-Error Curves

### Problem Description

Josephina is a clever girl and addicted to Machine Learning recently. She
pays much attention to a method called Linear Discriminant Analysis, which
has many interesting properties.
In order to test the algorithm's efficiency, she collects many datasets.
What's more, each data is divided into two parts: training data and test
data. She gets the parameters of the model on training data and test the
model on test data. To her surprise, she finds each dataset's test error curve is just a parabolic curve. A parabolic curve corresponds to a quadratic function. In mathematics, a quadratic function is a polynomial function of the form f(x) = ax2 + bx + c. The quadratic will degrade to linear function if a = 0.

![img](http://acm.hdu.edu.cn/data/images/3714-1.jpg)

It's very easy to calculate the minimal error if there is only one test error curve. However, there are several datasets, which means Josephina will obtain many parabolic curves. Josephina wants to get the tuned parameters that make the best performance on all datasets. So she should take all error curves into account, i.e., she has to deal with many quadric functions and make a new error definition to represent the total error. Now, she focuses on the following new function's minimum which related to multiple quadric functions. The new function F(x) is defined as follows: F(x) = max(Si(x)), i = 1...n. The domain of x is [0, 1000]. Si(x) is a quadric function. Josephina wonders the minimum of F(x). Unfortunately, it's too hard for her to solve this problem. As a super programmer, can you help her?

### Input

The input contains multiple test cases. The first line is the number of cases T (T < 100). Each case begins with a number n (n ≤ 10000). Following n lines, each line contains three integers a (0 ≤ a ≤ 100), b (|b| ≤ 5000), c (|c| ≤ 5000), which mean the corresponding coefficients of a quadratic function.

### Output

For each test case, output the answer in a line. Round to 4 digits after the decimal point.

### Sample Input

```
2
1
2 0 0
2
2 0 0
2 -4 2
```

### Sample Output

```
0.0000
0.5000
```

### Author

LIN, Yue

### Source

2010 Asia Chengdu Regional Contest

