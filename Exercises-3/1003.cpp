#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	int n,len,count;
    char s[10001];
    cin>>n;
    while (n--)
    {
        cin>>s;
        len=strlen(s);
        count = 1;
		for (int i = 1; i <= len; i++)
		{
			if (s[i] == s[i - 1])
				count++;
			else
			{
				if (count == 1)
					cout<<s[i - 1];
				else
				{
					cout<<count<<s[i - 1];
					count = 1;
				}
			}
		}
        cout<<endl;
    }
	return 0;
}