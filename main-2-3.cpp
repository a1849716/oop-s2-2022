#include<iostream>
using namespace std;

extern void two_five_nine(int[], int);

int main(){
    int arr[10] = {2,2,5,5,5,5,9,9,9,9};
    two_five_nine(arr, 10);
}