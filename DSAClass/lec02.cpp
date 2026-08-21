// linear search algorithm implementation in C++
#include<iostream>
using namespace std;
int linearSearch(int arr[], int n, int target){
    for(int i=0; i<n; i++){
        if(arr[i]==target){
            return i;
        }
    }
    return -1;
}
int main(){
    int n;      
    cout<<"Enter the size of the array: ";
    cin>> n;
    int arr[n];
    cout<<"Enter the elements of the array: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int target;
    cout<<"Enter the target value: ";
    cin>>target;
    int result = linearSearch(arr, n, target);
    cout<<"Index of the target element: "<<result<<endl;
    return 0;
}