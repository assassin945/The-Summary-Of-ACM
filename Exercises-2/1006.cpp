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