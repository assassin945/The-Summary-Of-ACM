#include <iostream>
using namespace std;
int main()
{
	int m, n, cas, flag, count;
	cin >> cas;
	while (cas--)
	{
		flag = 1;
		while (cin>>n>>m && ( n != 0 || m != 0))
		{
			count = 0;
			for (int a = 1; a < n - 1; a++) {
				for (int b = a + 1; b < n; b++)
				{
					if ((a * a + b * b + m) % (a * b) == 0)
					{
						count++;
					}
				}
			}
			cout << "Case " << flag << ": " << count << endl;
			flag++;
		}
		if (cas != 0)puts("");
	}
}