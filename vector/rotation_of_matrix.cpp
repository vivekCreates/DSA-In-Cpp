#include <iostream>
#include <vector>

using namespace std;

void transpose(vector<vector<int>> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        for (int j = 0; j < i; j++)
        {
           swap(v[i][j],v[j][i]);
        }
    }
}

void print_matrix(vector<vector<int>> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        for (int j = 0; j < v[i].size(); j++)
        {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
}

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

void reverse_the_row(vector<vector<int>> &v)
{

    for (int i = 0; i < v.size(); i++)
    {
        int col_size = v.size();
        int start= 0,end = col_size-1;
        int steps = col_size/2;
        for (int j = 0; j < steps; j++)
        {
            swap(v[i][start++], v[i][end--]);
        }
    }
}


int main()
{

    int rows;
    cout << "Enter rows: ";
    cin >> rows;

    int cols;
    cout << "Enter cols: ";
    cin >> cols;

    vector<vector<int>> vec(rows, vector<int>(cols, 0));

    cout << "Enter elements of matrix: " << endl;
    for (int i = 0; i < vec.size(); i++)
    {
        for (int j = 0; j < vec[i].size(); j++)
        {
            int e;
            cin >> e;
            vec[i][j] = e;
        }
    }

    transpose(vec);
    cout << "Transposed Matrix: " << endl;
    print_matrix(vec);
    reverse_the_row(vec);
    cout << "Rotated Matrix: " << endl;
    print_matrix(vec);
}