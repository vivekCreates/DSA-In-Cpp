#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool isArraySorted(vector<int> &arr, int n)
{
    if (n == 1 || n == 0)
        return true;
    if (arr[n - 1] >= arr[n - 2])
        return isArraySorted(arr, n - 1);
    else
        return false;
}

int main()
{

    vector<int> v = {1, 2, 3, 4, 5};
    int n = v.size();
    bool isSorted = isArraySorted(v, n);

    cout << "isSorted: " << isSorted << endl;
}