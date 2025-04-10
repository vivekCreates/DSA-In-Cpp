#include <iostream>
#include <vector>
using namespace std;

void swap(int &a,int &b){
    int temp = a;
    a = b;
    b = temp;
}


void sort_nums_even_in_beginning(vector<int> &v)
{
    int l = 0;
    int r = v.size() - 1;

    while (l < r)
    {
        // odd - odd
        if (v[l] % 2 != 0 && v[r] % 2 != 0)
        {
            r--;
        }
        //even - odd
        else if (v[l] % 2 == 0 && v[r] % 2 != 0)
        {
            l++;
            r--;
        }
        //odd - even
        else if (v[l] % 2 != 0 && v[r] % 2 == 0)
        {
            swap(v[l],v[r]);
            l++;
            r--;
        }

        //even - even
        else
        {
            l++;
        }
        
        
    }
    return;
}

int main()
{
    int n;
    cout << "Enter the size of array: ";
    cin >> n;

    vector<int> v;

    for (int i = 0; i < n; i++)
    {
        int e;
        cout << "Enter element: ";
        cin >> e;
        v.push_back(e);
    }

    cout << "array: ";
    for (int elem : v)
    {
        cout << elem << " ";
    }

    cout << endl;

    sort_nums_even_in_beginning(v);

    cout << "sorted: ";
    for (int elem : v)
    {
        cout << elem << " ";
    }

    cout << endl;
}