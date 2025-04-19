#include <iostream>
#include <vector>

using namespace std;

void print_spiral_matrix(vector<vector<int>> &M)
{
    int top = 0, bottom = M.size() - 1;
    int left = 0, right = M[0].size() - 1;

    int direction = 0;
    while (top <= bottom && left <= right)
    {

        // left -> right
        if (direction == 0)
        {
            for (int col = left; col <= right; col++)
            {
                cout << M[top][col] << " ";
            }
            top++;
        }

        // top -> bottom
        else if (direction == 1)
        {
            for (int row = top; row <= bottom; row++)
            {
                cout << M[row][right] << " ";
            }
            right--;
        }

        // right -> left
        else if (direction == 2)
        {
            for (int col = right; col >= left; col--)
            {
                cout << M[bottom][col] << " ";
            }
            bottom--;
        }

        // bottom -> top
        else
        {
            for (int row = bottom; row >= top; row--)
            {
                cout << M[row][left] << " ";
            }
            left++;
        }
        direction = (direction + 1)%4;
    }
}

int main()
{
    int rows, cols;
    cout << "Enter rows: ";
    cin >> rows;

    cout << "Enter cols: ";
    cin >> cols;

    vector<vector<int>> M(rows, vector<int>(cols));

    cout << "Enter the matrix: " << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            int elem;
            cin >> elem;
            M[i][j] = elem;
        }
    }

    cout << "spiral matrix :";
    print_spiral_matrix(M);
    cout << endl;
    
}