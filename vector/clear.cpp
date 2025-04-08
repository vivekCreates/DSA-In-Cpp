#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int> nums = {1,2,3,4,5};
    cout << "array: ";
    for(int num:nums){
        cout << num << " ";
    }
    cout << endl;
    nums.clear();
    cout << "array: ";
    for(int num:nums){
        cout << num << " ";
    }
    cout << endl;
}