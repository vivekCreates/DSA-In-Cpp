#include<iostream>
using namespace std;


void bubbleSort(int arr[],int n){

    for (int i = 0; i < n-1; i++)
    {
        for(int j = 0; j<n-i-1;j++){
            if(arr[j]>arr[j+1])
            swap(arr[j],arr[j+1]);
        }
    }
    
} 

void printArray(int arr[], int n){
 for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}


int main(){
    int arr[] = {12,34,5,67,8,15};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout << "Before sorting: ";
    printArray(arr,n);
    cout << endl;

    bubbleSort(arr,n);
    
    cout << "After sorting: ";
    printArray(arr,n);
    cout << endl;

    return 0;
}