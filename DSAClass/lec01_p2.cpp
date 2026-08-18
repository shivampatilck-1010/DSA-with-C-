//make an array of size of 10 and pass array to another function and store all the values sum into the last element of the array and print the array in the main function.
#include <bits/stdc++.h>
using namespace std;

void printSumofallElements(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        int sum = 0;
        if (i == n - 1) {
            arr[i] = accumulate(arr, arr + n - 1, 0); // Store the sum of all elements except the last one into the last element
        }
        cout << arr[i] << " "; // Print each element of the array
    }
    cout << endl;
}

int main(){
    int arr[10]={1,2,3,4,5,6,7,8,9,10}; // This line initializes the array arr with 10 integers: 1 to 10.
    printSumofallElements(arr, 10);
    return 0;
}