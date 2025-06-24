#include <iostream>
using namespace std;

void selectionSort(int arr[], int n)
{

    for (int i = 0; i < n-1; i++)
    {
        int min = i;
        for (int j = i+1; j < n; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
        }
        swap(arr[i],arr[min]);
    }
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[] = {12, 34, 5, 67, 8, 15};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Before sorting: ";
    printArray(arr, n);
    cout << endl;

    selectionSort(arr, n);

    cout << "After sorting: ";
    printArray(arr, n);
    cout << endl;

    return 0;
}