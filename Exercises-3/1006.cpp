#include <iostream>
using namespace std;
int main(){
    int n,pages,sheets,left,right;
    int sheet[100][5];
    while (cin>>n && n!=0)
    {
        sheets=(n-1)/4+1;
        pages=4*sheets;
        left=1;
        right=pages;
        for (int i = 1; i <= sheets; i++)
        {
            sheet[i][1]=right--;
            sheet[i][2]=left++;
            sheet[i][3]=left++;
            sheet[i][4]=right--;
        }
        printf("Printing order for %d pages:\n", n);
        for (int j = 1; j <= sheets; j++)
        {
            if (!(sheet[j][1]>n && sheet[j][2]>n))
            {
                printf("Sheet %d, front:", j);
				if (sheet[j][1] > n) printf(" Blank, ");
				else printf(" %d, ", sheet[j][1]);
				if (sheet[j][2] > n) printf("Blank\n");
				else printf("%d\n", sheet[j][2]);
            }
            if (!(sheet[j][3]>n && sheet[j][4]>n))
            {
                printf("Sheet %d, back :", j);
				if (sheet[j][3] > n) printf(" Blank, ");
				else printf(" %d, ", sheet[j][3]);
				if (sheet[j][4] > n) printf("Blank\n");
				else printf("%d\n", sheet[j][4]);
            }
        }
    }
    return 0;
}