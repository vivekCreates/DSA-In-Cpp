#include<iostream>
#include<vector>
using namespace std;
int main(){

    vector<int> nums = {1,2,3,4,1,2,4,5,2,8,7,6,2,6,4,9,3};

    cout << "array: ";
    for (int num: nums)
    {
       cout << num << " ";
    }
    cout << endl;
    int target,count=0;
    cout << "Enter the target: ";
    cin>>target;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] == target)
        {
            count++;
        }
        
    }
    cout << "count: " <<count << endl;
}