#include<iostream>
#include<algorithm>
#include<vector>


using namespace std;

int binarySearch(vector<int> &v, int target){
    int start = 0;
    int end = v.size();
    while (start<=end){
       int mid = (start+end)/2;

       if(target==v[mid]){
        return mid;
       }else if(target>v[mid]){
            start = mid + 1;
       }else{
            end = mid - 1;
       }
    }
    return -1;
}

int main(){

    vector<int> vec  = {12,45,56,33,67,78,99,23,49};
    sort(vec.begin(),vec.end());
    int ans = binarySearch(vec,67);
    cout << "Element found at index: " << ans << endl;
    return 0;
}