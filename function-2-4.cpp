bool is_ascending(int array[], int n){
    bool ascending = true;
    int curr_num = array[0];
    for (int i = 0; i < n; i++){
        if (array[i] >= curr_num){
            ascending = true;
            curr_num = array[i];
        }
        else{
            ascending = false;
            break;
        }
    }
    if (n < 1){
        ascending = false;
    }
    return ascending;
}