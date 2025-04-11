#include <iostream>
#include <vector>

using namespace std;

int calculate_prefix_and_suffix_sum(vector<int> &v)
{
    int prefix_sum = 0;
    int partition;

    for (int i = 0; i < v.size(); i++)
    {
        int suffix_sum = 0;
        prefix_sum += v[i];

        for (int j = i + 1; j < v.size(); j++)
        {
            suffix_sum += v[j];
        }

        if (prefix_sum == suffix_sum)
        {
            partition = i + 1;
            break;
        }
        else
        {
            partition = -1;
        }
    }
    return partition;
}

int main()
{

    vector<int> v;
    int n;
    cout << "Enter the size of array: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int elem;
        cout << "Enter element: ";
        cin >> elem;
        v.push_back(elem);
    }

    cout << "array: ";
    for (int elem : v)
    {
        cout << elem << " ";
    }

    cout << endl;

    int p = calculate_prefix_and_suffix_sum(v);
    if (p < 0)
    {
        cout << "No partition found" << endl;
    }
    else
    {
        cout << "Partition found at: " << p << endl;
    }
}