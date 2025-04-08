#include<iostream>
#include<vector>

using namespace std;

int main(){

    vector<int> nums = {1,2,3,4,5};
    nums.erase(nums.begin()+3);

    for (int num: nums)
    {
        cout << num << " ";
    }
    
}