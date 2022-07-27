int max_element(int array[], int n){
  int max = array[1];
  for (int i = 0; i < n; i++){
    if (array[i] >= max){
      max = array[i];
    }
  }
  if (n < 1){
    max = 0;
  }
  return max;
}