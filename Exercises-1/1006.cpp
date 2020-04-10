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