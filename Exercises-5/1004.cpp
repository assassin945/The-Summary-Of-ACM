#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
int lena, lenb, lenc;
char a1[501], b1[501], origin[1001], symbol;
int a[501], b[501], c[25001];
void init();
void add();
void sub();
void mul();
void printAdd_Sub();
int main() {
    int t;
    cin >> t;
    while (t--)
    {
        //初始化
        cin >> origin;
        init();
        if (symbol == '+')
        {
            add();
            printAdd_Sub();
        }
        else if (symbol == '-')
        {
            sub();
            printAdd_Sub();
        }

    }
    return 0;
}

void init() {
    int len = strlen(origin);
    lena = 0;
    lenb = 0;
    for (int i = 0; ; i++) {
        if (origin[i] < 48)
        {
            symbol = origin[i];
            break;
        }
        a1[i] = origin[i];
        lena++;
    }
    for (int j = lena + 1; j < len; j++) {
        b1[j - lena - 1] = origin[j];
        lenb++;
    }

    memset(a, 0, sizeof(a));
    memset(b, 0, sizeof(b));
    memset(c, 0, sizeof(c));

    for (int i = 0; i <= lena - 1; i++)
    {
        a[lena - i] = a1[i] - 48;
    }
    for (int j = 0; j <= lenb - 1; j++) {
        b[lenb - j] = b1[j] - 48;
    }
}
void add() {
    int x = 0;
    lenc = 1;
    while (lenc <= lena || lenc <= lenb)
    {
        c[lenc] = a[lenc] + b[lenc] + x;
        x = c[lenc] / 10;
        c[lenc] %= 10;
        lenc++;
    }
    c[lenc] = x;
    if (c[lenc] == 0)
    {
        lenc--;
    }
}
void sub() {
    //题目描述减法中被减数永远比减数大，
    //所以不会出现结果为负数的情况
    int k = 1;
    while (k <= lena || k < lenb)
    {
        if (a[k] < b[k])
        {
            a[k] += 10;
            a[k + 1]--;
        }
        c[k] = a[k] - b[k];
        k++;
    }
    lenc = k;
    while (c[lenc] == 0 && lenc > 1)
    {
        lenc--;
    }
}
void printAdd_Sub() {
    int mmax;
    mmax = max(lena, lenb + 1);
    mmax = max(mmax, lenc);
    for (int i = 0; i < mmax - lena; i++)
    {
        cout << " ";
    }
    for (int i = 0; i < lena; i++)
    {
        cout << a1[i];
    }
    cout << endl;
    for (int i = 0; i < mmax - lenb - 1; i++)
    {
        cout << " ";
    }
    cout << symbol;
    for (int i = 0; i < lenb; i++)
    {
        cout << b1[i];
    }
    cout << endl;
    for (int i = 0; i < mmax; i++)
    {
        cout << "-";
    }
    cout << endl;
    for (int i = 0; i < mmax - lenc; i++)
    {
        cout << " ";
    }
    for (int i = lenc; i > 0; i--) {
        cout << c[i];
    }
    cout << "\n\n";
}