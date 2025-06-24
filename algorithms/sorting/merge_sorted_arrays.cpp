#include<iostream>
#include<vector>
using namespace std;

vector<int> mergeSortedArrays(vector<int> &arr1,vector<int> &arr2,int m,int n){
    int i = 0, j = 0;

    if(m==1 and n==0){
        return arr1;
    }
    if(m==0 and n==1){
        return arr1;
    }
    while(i<n+m){
        if(arr2[j]<arr1[i]){
            swap(arr1[i],arr2[j]);
        }else if(arr1[i] == arr2[j]){
            i++;
        }else if(arr1[i] == 0){
           swap(arr1[i],arr2[j]);
           i++,j++;
        }else{
            i++;
        }
    }
    return arr1;
}


int main(){

    vector<int> nums1 = {1,2,3,0,0,0};
    vector<int> nums2 = {2,5,6};

    int m = 3, n = 3;
    
    mergeSortedArrays(nums1,nums2,m,n);

    for (int i = 0; i < m+n; i++){
       cout << nums1[i] << " ";
    }
    cout << endl;

    return 0;
}