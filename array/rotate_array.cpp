#include<iostream>

using namespace std;

int main(){


    int arr[] = {1,2,3,4,5,45,6,7,6,86,87,99,2,1,2,4,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    int rotatedArray[size];
    int k;
    
    cout << "Enter Number of rotations: ";
    cin>>k;
    
    int noOfRotations = k%size;

    cout << "Array: ";
    for (int i = 0; i < size; i++)
    {
       cout << arr[i] << " ";
    }
    cout << endl;


    int j = 0;
    for (int i = size-noOfRotations; i < size; i++)
    {
        rotatedArray[j++] = arr[i];
    }



    int l = noOfRotations;
    for (int i = 0; i < size-noOfRotations; i++)
    {
        rotatedArray[l++] = arr[i];
    }
    
    cout << "Rotated Array: ";
    for (int i = 0; i < size; i++)
    {
       cout << rotatedArray[i] << " ";
    }
     cout << endl;
}