int array_min(int integers[], int length){
  int min = integers[0];
  for (int i = 0; i < length; i++) {
    if (integers[i] <= min){
      min = integers[i];
    }
  }
  return min;
}

int array_max(int integers[], int length){
  int max = integers[0];
  for (int i = 0; i < length; i++) {
    if (integers[i] >= max){
      max = integers[i];
    }
  }
  return max;
}

int sum_min_max(int integers[], int length){
  int sum = 0;
  int min = array_min(integers, length);
  int max = array_max(integers, length);
  sum = min + max;
  return sum;
}