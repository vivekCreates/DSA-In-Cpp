#include<iostream>
using namespace std;

int main(){
    int arr[] = {1,9,4,5,9,8,6};
    int size = sizeof(arr)/sizeof(arr[0]);

    int firstMax = arr[0];
    int firstLargestIndex;

    for (int i = 0; i < size; i++)
    {
       if (arr[i]>firstMax)
       {
        firstMax = arr[i];
        firstLargestIndex = i;
       }
       
    }
   //  arr[firstLargestIndex] = -1;

    int secondMax = arr[0];
    for (int i = 0; i < size; i++)
    {
       if (arr[i]>secondMax && arr[i]!=arr[firstLargestIndex])
       {
        secondMax = arr[i];
       }
       
    }
    cout << "Second Largest: " << secondMax << endl;
}