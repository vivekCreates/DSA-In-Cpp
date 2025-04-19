#include<iostream>
#include<vector>

using namespace std;
void make_spiral_order_matrix(vector<vector<int>> &M){
    int size = M.size();
    int limit = 1;
    
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
                 M[top][col] = limit++;
            }
            top++;
        }

        // top -> bottom
        else if (direction == 1)
        {
            for (int row = top; row <= bottom; row++)
            {
               M[row][right] =  limit++;
            }
            right--;
        }

        // right -> left
        else if (direction == 2)
        {
            for (int col = right; col >= left; col--)
            {
                M[bottom][col]  = limit++;
            }
            bottom--;
        }

        // bottom -> top
        else
        {
            for (int row = bottom; row >= top; row--)
            {
                M[row][left] = limit++;
            }
            left++;
        }
        direction = (direction + 1)%4;
    }
}

int main(){

    int n;

    cout << "Enter n: ";
    cin>>n;

    vector<vector<int>> matrix(n,vector<int>(n));

    make_spiral_order_matrix(matrix);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
           cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}