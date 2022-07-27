int count_evens(int num){
  int count = 0;
  for (int i = 1; i <= num; i++){
    if (i % 2 == 0){
      count++;
    }
  }
  return count;
}