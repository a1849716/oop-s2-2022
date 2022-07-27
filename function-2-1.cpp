int min_element(int array[], int n){
  int min = array[1];
  for (int i = 0; i < n; i++){
    if (array[i] <= min){
      min = array[i];
    }
  }
  if (n < 1){
    min = 0;
  }
  return min;
}