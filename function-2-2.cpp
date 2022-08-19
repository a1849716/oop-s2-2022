#include<iostream>
#include<climits>
using namespace std;
  
int maxSubArraySum(int a[], int size)
{
    int curr_max = INT_MIN, max_from_here = 0;
  
    for (int i = 0; i < size; i++)
    {
        max_ending_here = max_from_here + a[i];
        if (curr_max < max_from_here)
            curr_max = max_from_here;
  
        if (max_from_here < 0)
            max_from_here = 0;
    }
    return curr_max;
}