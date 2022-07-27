bool is_descending(int array[], int n){
    bool descending = true;
    int curr_num = array[0];
    for (int i = 0; i < n; i++){
        if (array[i] <= curr_num){
            descending = true;
            curr_num = array[i];
        }
        else{
            descending = false;
            break;
        }
    }
    if (n < 1){
        descending = false;
    }
    return descending;
}