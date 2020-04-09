#include <iostream>
#include <cstring>
using namespace std;
int Rule1(char subChar[], int length) {
	int rule = 0;
	for (int i = 0; i < length; i++)
	{
		if (subChar[i] == 'a' || subChar[i] == 'e' || subChar[i] == 'i' || subChar[i] == 'o' || subChar[i] == 'u')
		{
			rule++;
		}
	}
	return rule;
}

int Rule2(char ch[], int length) {
	char temp[3];
	int rule = 1;
	for (int i = 2; i < length; i++)
	{
		temp[0] = ch[i - 2];
		temp[1] = ch[i - 1];
		temp[2] = ch[i];
		if (Rule1(temp, 3) == 3 || Rule1(temp, 3) < 1)
		{
			rule = 0;
			break;
		}
	}
	return rule;
}

int Rule3(char ch[], int length) {
	int rule = 1;
	for (int i = 1; i < length; i++)
	{
		if (ch[i] == ch[i - 1])
		{
			if (ch[i] == 'e' || ch[i] == 'o')
			{
				continue;
			}
			else
			{
				rule = 0;
				break;
			}
		}
	}
	return rule;
}

void print(char ch[], int length) {
	for (int i = 0; i < length; i++)
	{
		cout << ch[i];
	}
}

int main()
{
	char password[21];
	int length;
	int rule1, rule2, rule3;
	while (cin>>password)
	{
		if (password[0] == 'e' && password[1] == 'n' && password[2] == 'd')
		{
			break;
		}
		length = strlen(password);
		rule1 = Rule1(password, length);
		rule2 = Rule2(password, length);
		rule3 = Rule3(password, length);
		if (rule1 >= 1 && rule2 == 1 && rule3 == 1)
		{
			cout << "<";
			print(password, length);
			cout << ">" << " is acceptable." << endl;
		}
		else
		{
			cout << "<";
			print(password, length);
			cout << ">" << " is not acceptable." << endl;
		}
	}
}