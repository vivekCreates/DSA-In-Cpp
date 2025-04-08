#include<iostream>
#include<vector>

using namespace std;

int main(){
    int target;
    vector<int> nums = { 1,2,34,4,2,4,6,5,9,1,2};
    cout<<"array: ";
    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << " ";
    }
    cout << endl;
    cout<<"Enter target: ";
    cin>>target;
    int idx =-1;
    // for (int i = 0; i < nums.size(); i++)
    // {
    //     if (nums[i] == target)
    //     {
    //         idx = i;
    //     }
    // }
    //  Optimize code
     for (int i = nums.size()-1; i >=0 ; i--)
     {
         if (nums[i] == target)
         {
            idx = i;
            break;
         }
    }
    cout << "Last occurence: " << idx << endl;
}