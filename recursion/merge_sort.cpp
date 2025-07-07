#include <iostream>
#include <vector>
using namespace std;

void mergeArray(vector<int>& arr, int l, int m, int r) {
    vector<int> temp;
    int i = l;
    int j = m + 1;

    while (i <= m && j <= r) {
        if (arr[i] <= arr[j])
            temp.push_back(arr[i++]);
        else
            temp.push_back(arr[j++]);
    }

    while (i <= m) temp.push_back(arr[i++]);
    while (j <= r) temp.push_back(arr[j++]);

    for (int k = 0; k < temp.size(); ++k) {
        arr[l + k] = temp[k];
    }
}

void mergeSort(vector<int>& arr, int l, int r) {
    if (l >= r) return;

    int m = (l + r) / 2;
    mergeSort(arr, l, m);
    mergeSort(arr, m + 1, r);
    mergeArray(arr, l, m, r);
}

int main() {
    vector<int> arr = {1, 5, 2, 7, 3, 4};
    mergeSort(arr, 0, arr.size() - 1);

    for (int val : arr) {
        cout << val << " ";
    }

    return 0;
}
