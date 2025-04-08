#include<iostream>
using namespace std;

int main(){
    int arr[] =  {1,3,2,4,7,3,2,1,5,7,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    int unique; 
    cout << "array: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    for ( int i = 0; i < size; i++)
    {
       for (int j = i+1; j < size; j++)
       {
            if (arr[i]==arr[j])
            {
               arr[i]=arr[j] = -1;

            }
       }
       
    }
    for (int i = 0; i < size; i++)
    {
        if (arr[i]>0)
        {
          unique = arr[i];
        }
        
    }
    cout << "unique: " << unique << endl;
}