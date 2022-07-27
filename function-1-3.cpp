int int_count(int array[], int n, int number){
  int count = 0;
  for (int i = 0; i < n; i++){
    if (array[i] == number){
      count++;
    }
  }
  return count;
}