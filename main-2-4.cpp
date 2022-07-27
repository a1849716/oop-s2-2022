#include<iostream>
using namespace std;

extern bool is_ascending(int[], int);

int main(){
    int arr[5] = {1,2,3,4,5};
    cout << is_ascending(arr, 5);
    cout << endl;
}