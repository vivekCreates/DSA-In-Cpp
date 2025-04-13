#include<iostream>
#include<cstdlib>

using namespace std;

void pairs_of_absolute_difference(int arr[],int size,int target){

    
    cout << "Difference Pairs: ";
    for (int i = 0; i < size; i++)
    {
       for (int j = i+1; j< size; j++)
       {
        if (abs(arr[i]-arr[j]) == target)
        {
           cout << "(" << arr[i] << "," << arr[j] << ")" << " ";
        }
       }
       
    }
    cout << endl;
}

int main(){

    int n;
    cout << "Enter the size of array: ";
    cin>>n;
    int arr[n];
    int size = sizeof(arr)/sizeof(arr[0]);
    for (int i = 0; i < n; i++)
    {
        int elem;
        cout << "Enter elem: ";
        cin>>elem;

        arr[i] = elem;
    }

    int target;
    cout << "Enter target: ";
    cin>>target;

    cout << "Array: ";
    for (int a:arr)
    {
        cout << a << " ";
    }
    cout << endl;

    pairs_of_absolute_difference(arr,size,target);
}