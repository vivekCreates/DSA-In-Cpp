#include<iostream>

using namespace std;

int main(){
    int size, sum=0;
    int nums[size];
    cout << "Enter size of array: ";
    cin>>size;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter " << i+1 << " Element: ";
        cin>>nums[i];
    }
    

    for (int i = 0; i < size; i++)
    {
       sum+= nums[i];
    }
    cout << "Sum: "<<sum << endl;
}