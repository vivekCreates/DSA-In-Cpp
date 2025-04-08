#include<iostream>
#include<vector>

using namespace std;

int main(){

    vector<int> nums = {1,2,3,4,5,6};
    bool is_sorted = false;

    for (int i = 0; i < nums.size(); i++)
    {
       if (nums[i]> nums[i-1] && nums[i]< nums[i+1])
       {
        is_sorted = true;
       }else{
        is_sorted = false;
        break;
       }
       
    }
    string result  = is_sorted  ? "Yes": "No";
    cout << "Sorted: " << result << endl;
}
