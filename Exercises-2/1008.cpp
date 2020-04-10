#include <iostream>
using namespace std;
int main()
{
	int arr[1002] = { 0,0,2,2 }, n;
	for (int i = 4; i < 1001; i++)
	{
		if (i % 2 == 0)
			arr[i] = arr[i - 1] * 2 + 2;
		else
			arr[i] = arr[i - 1] * 2 - 2;
		arr[i] = arr[i] % 10000;
	}
	while (cin>>n && n != 0)
	{
		cout << arr[n] % 10000 << endl;
	}
}