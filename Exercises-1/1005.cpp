#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
	int N, count = 1, max = 1;
	string s, smax;
	while (cin >> N && N != 0)
	{
		vector<string> str;
		for (int i = 0; i < N; i++)
		{
			cin >> s;
			str.push_back(s);
		}
		smax = str[0];
		for (auto& c1 : str)
		{
			count = 1;
			for (auto& c2 : str)
			{
				if (c1 == c2)
				{
					count++;
				}
			}
			if (count > max)
			{
				max = count;
				smax = c1;
			}
		}
		if (N)
			cout << smax << endl;
	}
	return 0;
}