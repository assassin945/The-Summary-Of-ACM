#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
	string s, str;
	int i, n, k;
	vector<int>vec;
	while (cin >> s)
	{
		str = "";
		vec.clear();
		k = 0;
		for (i = 0; i < s.length(); i++)
		{
			if (s[i] == '5')
			{
				if (str != "")
				{
					n = atoi(str.c_str());//将string转化为int
					vec.push_back(n);
				}
				str = "";//记住每一次传值都要清空一下
			}
			else
			{
				str += s[i];
			}
		}
		if (str != "")
		{
			n = atoi(str.c_str());
			vec.push_back(n);
		}
		sort(vec.begin(), vec.end());
		for (i = 0; i < vec.size(); i++)
		{
			cout << vec[i];
			if (i == vec.size() - 1)
				cout << endl;
			else
				cout << " ";
		}
	}
	return 0;
}