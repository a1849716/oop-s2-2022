#include<iostream>
using namespace std;

extern int max_sub_sum(int *nums,int length);

int main()
{
    int a[] = {-2, -3, 4, -1, -2, 1, 5, -3};
    int n = sizeof(a)/sizeof(a[0]);
    int max_sum = max_sub_sum(a, n);
    cout << "Maximum contiguous sum is " << max_sum;
    return 0;
}