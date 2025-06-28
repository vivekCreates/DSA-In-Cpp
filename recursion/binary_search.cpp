#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int binarySearch(vector<int> &arr, int target, int start, int end){
    if (start > end){
        return -1;
    }
    int mid = (start + end) / 2;
    if (target == arr[mid]){
        return mid;
    }
    else if (target > arr[mid]){
        return binarySearch(arr, target, mid + 1, end);
    }
    else{
        return binarySearch(arr, target, start, mid - 1);
    }
}

int main()
{

    vector<int> v = {11, 23, 43, 12, 50, 67, 99, 90, 76};
    int target = 23;
    int start = 0;
    sort(v.begin(), v.end());
    int end = v.size() - 1;
    int ans = binarySearch(v, target, start, end);

    cout << "Element found at index: " << ans << endl;
}