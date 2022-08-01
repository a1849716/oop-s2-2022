int is_identity(int array[10][10]){
  int identity = 1;
  for (int r = 0; r < 10; r++){
    for (int c = 0; c < 10; c++){
      if (r == c && array[r][c] == 1){
        if (r != c && array[r][c] == 0){
          identity = 1;
        }
      }
      if (r == c && array[r][c] != 1){
        identity = 0;
      }
      if (r != c && array[r][c] != 0){
        identity = 0;
      }
    }
    }
  return identity;
}
