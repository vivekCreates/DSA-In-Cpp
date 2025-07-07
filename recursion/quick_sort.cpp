#include<iostream>
#include<vector>

using namespace std;

int partitioning(vector<int>& arr, int low, int high){
    int pivot = arr[high];  // Choose the last element as pivot
    int i = low-1;        // Index of smaller element

    for (int j = low; j < high; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]); // Place pivot in the correct position
    return i + 1;
}


void quickSort(vector<int>& arr, int low, int high){
    if (low>=high) return;
    int pi = partitioning(arr,low,high);
    quickSort(arr,low,pi-1);
    quickSort(arr,pi+1,high);
}


int main(){
    vector<int> arr = {8,3,2,7,9,6,4,5};
    quickSort(arr,0,arr.size()-1);

    for (int val:arr){
        cout << val << " "; 
    }
}