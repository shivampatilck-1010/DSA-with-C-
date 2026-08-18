#include <iostream>
using namespace std;   
void PrintOut(int arr[], int n){ // This function takes an array of integers and its size as parameters. It prints the elements of the array and modifies the second element by adding 10 to it.
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    arr[1]+=10;  // This line modifies the second element of the array by adding 10 to it. Since arrays are passed by reference (decay to pointers), this change will affect the original array in the calling function.
    cout<<endl;
} 

int main(){
    int arr[4];
    int arr1[4]={1, 2, 3, 4}; // This line initializes the array arr with 4 integers: 1, 2, 3, and 4.
    int arr2[4]={1};// This line initializes the first element of the array arr with 1, while the remaining elements are initialized to 0 by default.
    int arr3[4]={1, 2}; // This line initializes the first two elements of the array arr with 1 and 2, while the remaining elements are initialized to 0 by default.
    cout<< sizeof(arr1)<<endl; // sizeof(arr) returns the size of the entire array in bytes. Since arr is an array of 4 integers, and assuming an integer is 4 bytes, sizeof(arr) will return 16 (4 integers * 4 bytes each).
    cout<<sizeof(arr1)/sizeof(arr1[0])<<endl; // This expression calculates the number of elements in the array by dividing the total size of the array by the size of one element. In this case, it will return 4 (16 bytes / 4 bytes per integer).

    cout<<size(arr1)<<endl; // In C++20, you can use the size() function to get the number of elements in the array. This will also return 4 for the given array.
    
    PrintOut(arr1,4);


    
    
    // there are some more to find the size of an array in C++20, but the above method is the most common and straightforward way to determine the size of an array at compile time. here are some more methods to find the size of an array in C++20:
    // - Using std::size() (C++20):
    //   cout << std::size(arr);
    
    return 0;
    
}

// array use pass by refrence for function (by default, arrays decay to pointers when passed to functions, but you can use references to avoid this decay and preserve the array's size information).