#include <iostream>
using namespace std;
int main()
{
	int m, n;
	int arr[41] = { 0,3,9 };
	for (int i = 3; i < 41; i++)
	{
		arr[i] = arr[i - 1] * 2 + arr[i - 2];
	}
	cin >> n;
	while (n--)
	{
		cin >> m;
		cout << arr[m] << endl;
	}
}