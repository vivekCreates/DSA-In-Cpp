#include<iostream>
using namespace std;


void sortArray(int arr[],int n){

    int zeros=0,ones=0,twos=0;
    for (int i = 0; i < n; i++){
        if (arr[i]==0) zeros++;
        if (arr[i]==1) ones++;
        if (arr[i]==2) twos++;
    }

    int idx = 0;
    
   for (int i = 0; i < zeros; i++){
    arr[idx++] = 0;
   }

   for (int i = 0; i < ones; i++){
    arr[idx++] = 1;
   }

   for (int i = 0; i < twos; i++){
    arr[idx++] = 2;
   }
} 

void printArray(int arr[], int n){
 for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}


int main(){
    int arr[] = {1,2,0,0,1,1,2,2,1,0,2,0,1,2};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout << "Before sorting: ";
    printArray(arr,n);
    cout << endl;

    sortArray(arr,n);
    
    cout << "After sorting: ";
    printArray(arr,n);
    cout << endl;

    return 0;
}