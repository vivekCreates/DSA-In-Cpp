#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {1, 2, 2, 2, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int majority = arr[0], freq = 0;

    for (int i = 0; i < n; i++)
    {
        if (freq == 0)
        {
            majority = arr[i];
        }
        if (majority == arr[i])
        {
            freq++;
        }
        else
        {
            freq--;
        }
    }
    cout << "Majority num: " << majority << endl;
}