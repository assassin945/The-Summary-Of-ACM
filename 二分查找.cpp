#include <iostream>
using namespace std;
int indexOf(int arr[], int target, int left, int right){ //arr must be sorted
    if (left >= right)
    {
        return -1;
    }
    int mid = left + (right - left) / 2;
    if (arr[mid] == target)
    {
        return mid;
    }
    else if (target > arr[mid])
    {
        left = mid + 1;
        return indexOf(arr, target, left, right);
    }
    else
    {
        right = mid - 1;
        return indexOf(arr, target, left, right);
    }

}
int main(){
    int a[] = {1,2,3,4,5,6,7,8 };
    int tar;
    cin>>tar;
    cout<<indexOf(a,tar,0,8)<<endl;
}
