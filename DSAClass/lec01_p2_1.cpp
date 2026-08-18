//make an array of size of 10 and pass array to another function and store all the values sum into the last element of the array and print the array in the main function.


#include <bits/stdc++.h>
using namespace std;

void printSumofallElements(int arr[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
        cout << arr[i] << " ";
    }
    arr[n - 1] = sum; // Store the sum into the last element
}

int main(){
    int arr[10]={1,2,3,4,5,6,7,8,9,10}; 
    printSumofallElements(arr, 5); // Call the function to calculate the sum and print the array
    return 0;
}