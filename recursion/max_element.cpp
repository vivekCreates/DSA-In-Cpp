#include<iostream>

using namespace std;

int findMaxElement(int arr[],int idx,int size){
    if(idx==size-1){ 
        return arr[idx];
    }
    return max(arr[idx],findMaxElement(arr,idx+1,size));
}

int main(){

    int arr[5] = {3,10,3,2,5};
    int size = 5;
    int max = findMaxElement(arr,0,size);
    cout << "max:" << max << endl;

}