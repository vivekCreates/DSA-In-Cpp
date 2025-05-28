#include<iostream>
using namespace std;

void printArrayElements(int arr[],int idx,int size){
    if (idx==size) return;
    
    cout << arr[idx] << " " << endl;
    printArrayElements(arr,idx+1,size);
}

int main(){

    int arr[10] = {10,20,30,40,50,60,70,80,90,100};
    int size = 10;
    printArrayElements(arr,4,size);
}