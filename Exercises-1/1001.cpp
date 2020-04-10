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