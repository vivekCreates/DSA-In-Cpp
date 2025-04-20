#include <iostream>
#include <vector>

using namespace std;

int rectangle_sum(vector<vector<int>> &matrix, int l1, int r1, int l2, int r2)
{
    vector<vector<int>> prefixSumMatrix(matrix.size(), vector<int>(matrix[0].size()));
    int running_sum = 0;
    for (int i = 0; i < matrix.size(); i++)
    {
        for (int j = 0; j < matrix[i].size(); j++)
        {

            running_sum += matrix[i][j];
            prefixSumMatrix[i][j] = running_sum;
        }
        running_sum = 0;
    }

    int sum = 0;

    for (int i = l1; i <= l2; i++)
    {
        if (r1 != 0)
        {

            sum += prefixSumMatrix[i][r2] - prefixSumMatrix[i][r1 - 1];
        }
        else
        {
            sum += prefixSumMatrix[i][r2];
        }
    }
    return sum;
}

int main()
{

    int rows, cols;

    cout << "Enter rows: ";
    cin >> rows;

    cout << "Enter cols: ";
    cin >> cols;

    vector<vector<int>> matrix(rows, vector<int>(cols));

    cout << "Enter matrix elements: " << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            int elem;
            cin >> elem;
            matrix[i][j] = elem;
        }
    }

    int l1, r1, l2, r2;

    cout << "Enter (l1,r1): ";
    cin >> l1 >> r1;
    cout << "Enter (l2,r2): ";
    cin >> l2 >> r2;

    int rect_sum = rectangle_sum(matrix, l1, r1, l2, r2);
    cout << "Reactangle sum: " << rect_sum << endl;
}