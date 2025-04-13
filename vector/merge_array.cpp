#include <iostream>
#include <vector>

using namespace std;

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

void merge_two_array(vector<int> &arr1, vector<int> &arr2, vector<int> &mergedArray)
{
    int size = arr1.size() + arr2.size();
    mergedArray.resize(size);
    for (int i = 0; i < size; i++)
    {
        if (i < arr1.size())
        {
            mergedArray[i] = arr1[i];
        }
        else
        {
            mergedArray[i] = arr2[i - arr1.size()];
        }
    }
}

void print_array(vector<int> &arr)
{

    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
}

void sort_the_array(vector<int> &mergedArray)
{

    for (int i = 0; i < mergedArray.size()-1; i++)
    {
        for (int j = 0; j < mergedArray.size()-1; j++)
        {
            if (mergedArray[j]>mergedArray[j+1])
            {
                swap(mergedArray[j],mergedArray[j+1]);
            }
            
        }
    }
}

int main()
{
    int m, n;
    cout << "Enter the size of array1: ";
    cin >> m;
    vector<int> arr1;
    for (int i = 0; i < m; i++)
    {
        int elem;
        cout << "Enter element: ";
        cin >> elem;
        arr1.push_back(elem);
    }

    cout << "Enter the size of array2: ";
    cin >> n;
    vector<int> arr2;
    for (int i = 0; i < n; i++)
    {
        int elem;
        cout << "Enter element: ";
        cin >> elem;
        arr2.push_back(elem);
    }

    vector<int> mergedArray;

    cout << "array1: ";
    print_array(arr1);
    cout << endl;

    cout << "array2: ";
    print_array(arr2);
    cout << endl;

    merge_two_array(arr1, arr2, mergedArray);
    sort_the_array(mergedArray);

    cout << "Merged Array: ";
    print_array(mergedArray);
    cout << endl;
}