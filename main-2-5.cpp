#include<iostream>
using namespace std;

extern bool is_descending(int[], int);

int main(){
    int arr[5] = {12,3,4,5,6};
    cout << is_descending(arr, 5);
    cout << endl;
}