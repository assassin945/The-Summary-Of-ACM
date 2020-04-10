#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
	int n;
	int m;
	int temp;
	vector<int> a;
	cin >> n;
	for(int p = 0; p < n; p++)
	{
		while (cin>>m)
		{
			temp = 0;
			for (int i = 0; i < m; i++)
			{
				cin >> temp;
				a.push_back(temp);
			}
			sort(a.begin(), a.end());
			for (int j = 0; j < (m - 1); j++)
			{
				cout << a[j] << " ";
			}
			cout << a[m - 1] << endl;
			a.clear();
		}
	}
}