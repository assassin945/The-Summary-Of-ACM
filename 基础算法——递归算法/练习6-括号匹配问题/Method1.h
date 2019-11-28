#pragma once
#ifndef method1_
#define method1_

#include <iostream>
#include <cstring>
#include <string>

using namespace std;
void method1() {
	int len, top, a[1001],b[1001];
	string s;
	while (getline(cin,s))
	{
		top = 0;
		len = s.size();
		memset(a,0,sizeof(a));
		memset(b,0,sizeof(b));
		for(int i = 0; i < len; i++){
			if (s[i] == '(')
			{
				top++;
				a[top]=i;
				b[i]=1;
			}
			if (s[i] == ')')
			{
				b[i] = 2;
				if (top > 0)
				{
					b[a[top]] = 0;
					b[i] = 0;
					top--;
				}
			}
		}
		for (int j = 0; j < len; j++)
		{
			cout<<s[j];
		}
		cout<<endl;
		for (int k = 0; k < len; k++)
		{
			if (b[k] == 0)
			{
				cout<<" ";
			}
			if (b[k] == 1)
			{
				cout<<"$";
			}
			if (b[k] == 2)
			{
				cout<<"?";
			}
		}
		cout<<endl;
	}
}

#endif // !method1_
