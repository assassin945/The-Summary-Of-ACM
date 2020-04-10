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