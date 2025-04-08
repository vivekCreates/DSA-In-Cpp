#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> arr = {3,43,55,15,33,22,77,64,23,19,17};
    int sum_of_even=0,sum_of_odd=0,diff;

    for (int i = 0; i < arr.size(); i++)
    {
       if (i%2==0)
       {
        sum_of_even+= arr[i];
       }else{
        sum_of_odd+=arr[i];
       } 
    }
    diff = sum_of_even - sum_of_odd;
    cout << "Sum of elements of even indices: " << sum_of_even << endl;
    cout << "Sum of elements of odd indices: " << sum_of_odd << endl;
    cout << "Difference: " << diff << endl;
}