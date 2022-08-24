int next_match_count(int vals[], int length){
  int curr_num = vals[0];
  int count = 0;
  for (int i = 1; i < length; i++){
    if (curr_num == vals[i]){
      count++;
    }
    curr_num = vals[i];
  }
  return count;
}