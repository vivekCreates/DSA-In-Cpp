#include<iostream>
using namespace std;

int main(){
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int size = sizeof(arr)/sizeof(arr[0]);
    int target;
    cout << "Enter target: ";
    cin>>target;

    cout << "Pairs: ";
    for (int i = 0; i < size; i++)
    {
        for (int j = i+1 ; j < size; j++)
        {
            for (int k = i+2;  k< size; k++)
            { 
                if (arr[i]+arr[j]+arr[k] == target)
                {
                    cout << "("<<arr[i]<<","<<arr[j]<<","<<arr[k]<<")";
                }
                
            }
            
        }
        
    }
    cout << endl;
}