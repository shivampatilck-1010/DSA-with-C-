#include <iostream>
using namespace std;

int main(){
    int arr[5]={10,20,24,52,25};
    int n =5;
    int largest = arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]>largest){
            largest = arr[i];
        }

    }

    cout<<"Largest number is "<<largest;
    return 0;
}