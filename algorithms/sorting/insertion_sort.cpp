#include <iostream>
using namespace std;

void insertionSort(int arr[], int n)
{

    for (int i = 1; i < n; i++)
    {
        int j = i;
        while (j > 0 && arr[j] < arr[j - 1])
        {
            if (arr[j] < arr[j - 1])
            {
                swap(arr[j], arr[j - 1]);
            }
            j--;
        }
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

    insertionSort(arr, n);

    cout << "After sorting: ";
    printArray(arr, n);
    cout << endl;

    return 0;
}