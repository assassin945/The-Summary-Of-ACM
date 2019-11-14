# 练习13

## 1001-S-Nim

### Problem Description

Arthur and his sister Caroll have been playing a game called Nim for some time now. Nim is played as follows:


  The starting position has a number of heaps, all containing some, not necessarily equal, number of beads.

  The players take turns chosing a heap and removing a positive number of beads from it.

  The first player not able to make a move, loses.


Arthur and Caroll really enjoyed playing this simple game until they recently learned an easy way to always be able to find the best move:


  Xor the number of beads in the heaps in the current position (i.e. if we have 2, 4 and 7 the xor-sum will be 1 as 2 xor 4 xor 7 = 1).

  If the xor-sum is 0, too bad, you will lose.

  Otherwise, move such that the xor-sum becomes 0. This is always possible.


It is quite easy to convince oneself that this works. Consider these facts:

  The player that takes the last bead wins.

  After the winning player's last move the xor-sum will be 0.

  The xor-sum will change after every move.


Which means that if you make sure that the xor-sum always is 0 when you have made your move, your opponent will never be able to win, and, thus, you will win. 

Understandibly it is no fun to play a game when both players know how to play perfectly (ignorance is bliss). Fourtunately, Arthur and Caroll soon came up with a similar game, S-Nim, that seemed to solve this problem. Each player is now only allowed to remove a number of beads in some predefined set S, e.g. if we have S =(2, 5) each player is only allowed to remove 2 or 5 beads. Now it is not always possible to make the xor-sum 0 and, thus, the strategy above is useless. Or is it? 

your job is to write a program that determines if a position of S-Nim is a losing or a winning position. A position is a winning position if there is at least one move to a losing position. A position is a losing position if there are no moves to a losing position. This means, as expected, that a position with no legal moves is a losing position.

### Input

Input consists of a number of test cases. For each test case: The first line contains a number k (0 < k ≤ 100 describing the size of S, followed by k numbers si (0 < si ≤ 10000) describing S. The second line contains a number m (0 < m ≤ 100) describing the number of positions to evaluate. The next m lines each contain a number l (0 < l ≤ 100) describing the number of heaps and l numbers hi (0 ≤ hi ≤ 10000) describing the number of beads in the heaps. The last test case is followed by a 0 on a line of its own.

### Output

For each position: If the described position is a winning position print a 'W'.If the described position is a losing position print an 'L'. Print a newline after each test case.

### Sample Input

```
2 2 5
3
2 5 12
3 2 4 7
4 2 3 7 12
5 1 2 3 4 5
3
2 5 12
3 2 4 7
4 2 3 7 12
0
```

### Sample Output

```
LWW
WWL
```

### Source

Norgesmesterskapet 2004

## 1002-Stone Game

### Problem Description

This game is a two-player game and is played as follows:

\1. There are n boxes; each box has its size. The box can hold up to s stones if the size is s.
\2. At the beginning of the game, there are some stones in these boxes.
\3. The players take turns choosing a box and put a number of stones into the box. The number mustn’t be great than the square of the number of stones before the player adds the stones. For example, the player can add 1 to 9 stones if there are 3 stones in the box. Of course, the total number of stones mustn’t be great than the size of the box.
4.Who can’t add stones any more will loss the game.

Give an Initial state of the game. You are supposed to find whether the first player will win the game if both of the players make the best strategy.

### Input

The input file contains several test cases.
Each test case begins with an integer N, 0 < N ≤ 50, the number of the boxes.
In the next N line there are two integer si, ci (0 ≤ ci ≤ si ≤ 1,000,000) on each line, as the size of the box is si and there are ci stones in the box.
N = 0 indicates the end of input and should not be processed.

### Output

For each test case, output the number of the case on the first line, then output “Yes” (without quotes) on the next line if the first player can win the game, otherwise output “No”.

### Sample Input

```
3
2 0
3 3
6 2
2
6 3
6 3
0
```

### Sample Output

```
Case 1:
Yes
Case 2:
No
```

### Source

“网新恩普杯”杭州电子科技大学程序设计邀请赛

## 1003-Fibonacci again and again

### Problem Description

任何一个大学生对菲波那契数列(Fibonacci numbers)应该都不会陌生，它是这样定义的：
F(1)=1;
F(2)=2;
F(n)=F(n-1)+F(n-2)(n>=3);
所以，1,2,3,5,8,13……就是菲波那契数列。
在HDOJ上有不少相关的题目，比如1005 Fibonacci again就是曾经的浙江省赛题。
今天，又一个关于Fibonacci的题目出现了，它是一个小游戏，定义如下：
1、  这是一个二人游戏;
2、  一共有3堆石子，数量分别是m, n, p个；
3、  两人轮流走;
4、  每走一步可以选择任意一堆石子，然后取走f个；
5、  f只能是菲波那契数列中的元素（即每次只能取1，2，3，5，8…等数量）；
6、  最先取光所有石子的人为胜者；

假设双方都使用最优策略，请判断先手的人会赢还是后手的人会赢。

### Input

输入数据包含多个测试用例，每个测试用例占一行，包含3个整数m,n,p（1<=m,n,p<=1000）。
m=n=p=0则表示输入结束。

### Output

如果先手的人能赢，请输出“Fibo”，否则请输出“Nacci”，每个实例的输出占一行。

### Sample Input

```
1 1 1
1 4 1
0 0 0
```

### Sample Output

```
Fibo
Nacci
```

### Author

lcy

### Source

ACM Short Term Exam_2007/12/13

## 1004-Nim or not Nim?

### Problem Description

Nim is a two-player mathematic game of strategy in which players take turns removing objects from distinct heaps. On each turn, a player must remove at least one object, and may remove any number of objects provided they all come from the same heap.

Nim is usually played as a misere game, in which the player to take the last object loses. Nim can also be played as a normal play game, which means that the person who makes the last move (i.e., who takes the last object) wins. This is called normal play because most games follow this convention, even though Nim usually does not.

Alice and Bob is tired of playing Nim under the standard rule, so they make a difference by also allowing the player to separate one of the heaps into two smaller ones. That is, each turn the player may either remove any number of objects from a heap or separate a heap into two smaller ones, and the one who takes the last object wins.

### Input

Input contains multiple test cases. The first line is an integer 1 ≤ T ≤ 100, the number of test cases. Each case begins with an integer N, indicating the number of the heaps, the next line contains N integers s[0], s[1], ...., s[N-1], representing heaps with s[0], s[1], ..., s[N-1] objects respectively.(1 ≤ N ≤ 10^6, 1 ≤ S[i] ≤ 2^31 - 1)

### Output

For each test case, output a line which contains either "Alice" or "Bob", which is the winner of this game. Alice will play first. You may asume they never make mistakes.

### Sample Input

```
2
3
2 2 3
2
3 3
```

### Sample Output

```
Alice
Bob
```

### Source

2009 Multi-University Training Contest 13 - Host by HIT

























































































































































































































































































































































































































































































































































































































































































































































































































































































