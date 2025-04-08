#include<iostream>

using namespace std;

int main(){

    int size;
    int nums[size];
    cout << "Enter size of array: ";
    cin>>size;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter " << i+1 << " Element: ";
        cin>>nums[i];
    }
    int max = nums[0];

    for (int i = 0; i < size; i++)
    {
        if (nums[i]>max)
           max = nums[i];
    }
    
    cout << "Max: "<<max << endl;
}