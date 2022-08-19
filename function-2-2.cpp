#include <climits>
#include <iostream>
using namespace std;

int max_sub_sum(int *nums, int length) {
  int curr_max = INT_MIN, max_from_here = 0;

  for (int i = 0; i < length; i++) {
    max_from_here = max_from_here + nums[i];
    if (curr_max < max_from_here) curr_max = max_from_here;

    if (max_from_here < 0) max_from_here = 0;
  }
  if (length < 1){
    return 0;
  }
  else if(curr_max < 1){
    return 0;
  }
  return curr_max;
}