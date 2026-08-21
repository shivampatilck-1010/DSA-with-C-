// binary search is a more efficient algorithm than linear search
// it requires the array to be sorted
// the algorithm works by repeatedly dividing the search interval in half

#include <bits/stdc++.h>
using namespace std;


int binarySearch(int arr[], int n, int target){
    int low = 0;
    int high = n - 1;
    while(low <= high){
        int mid = (low + high) / 2;
        if(arr[mid] == target){
            return mid;
        }
        else if(arr[mid] < target){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }
    return -1;
}

int main(){
    
    int n;      
    cout<<"Enter the size of the array: ";
    cin>> n;
    int arr[n];
    cout<<"Enter the elements of the array in sorted order: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int target;
    cout<<"Enter the target value: ";
    cin>>target;
    int result = binarySearch(arr, n, target);
    cout<<"Index of the target element: "<<result<<endl;
    return 0;
}