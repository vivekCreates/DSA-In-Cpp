#include<iostream>

using namespace std;

int main(){
    int size,target;
    cout<< "Enter the size of array: ";
    cin>>size;
    int nums[size];
    for (int i = 0; i < size; i++)
    {
        cout << "Enter " << i+1 << " Element: ";
        cin>>nums[i];
    }

    cout << "Enter the target: ";
    cin>>target;
    int idx = -1;
    for (int i = 0; i < size; i++)
    {
        if (nums[i] == target)
            idx = i;
            break;
            
        
    }
    
    cout << idx<< endl;
}