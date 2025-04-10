#include <iostream>
#include <vector>

using namespace std;

void sort_zeros_and_one(vector<int> &arr)
{
    int l = 0;
    int r = arr.size() - 1;

    while (l <= r)
    {
        if (arr[l] == 1 && arr[r] == 0)
        {
            arr[l++] = 0;
            arr[r--] = 1;
        }

        if (arr[l] == 0)
        {
            l++;
        }
        if (arr[r] == 1)
        {
            r--;
        }
    }
    return;
}

int main()
{
    int n;
    cout << "Enter no. of elements: ";
    cin>>n;
    vector<int> v;

    for (int i = 0; i < n; i++)
    {
        int elem;
        cout << "Enter element: ";
        cin>>elem;
        v.push_back(elem);
    }
    

    cout << "array: ";
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    sort_zeros_and_one(v);

    cout << "sorted: ";
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}