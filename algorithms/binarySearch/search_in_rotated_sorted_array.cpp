#include <iostream>
#include <vector>

using namespace std;

int searchInRoatedArray(vector<int> &arr, int target){
    int start = 0, end = arr.size();

    while (start <= end){
        int mid = (start + end) / 2;
        if (target == arr[mid]){
            return mid;
        }
        if (arr[start] <= arr[mid]){
            if (arr[start] <= target and target <= arr[mid]){
                end = mid - 1;
            }
            else{
                start = mid + 1;
            }
        }else{
            if (arr[mid] <= target and target <= arr[end]){
                    start = mid + 1;
            }
            else{
                end = mid - 1;
            }
        }
    }
    return -1;
}

int main()
{

    vector<int> arr = {4, 5, 6, 7, 0, 1, 2};
    int target = 0;
    int ans = searchInRoatedArray(arr, target);
    cout << "Element found at index: " << ans << endl;
    return 0;
}