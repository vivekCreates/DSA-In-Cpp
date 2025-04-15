#include <iostream>
using namespace std;


int main()
{

    int row1, col1;

    cout << "Enter row1: ";
    cin >> row1;

    cout << "Enter col1: ";
    cin >> col1;

    int A[row1][col1];

    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col1; j++)
        {
            int elem;
            cout << "Enter (r" << i << ",c" << j << ")" << ": ";
            cin >> elem;
            A[i][j] = elem;
        }
    }

    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col1; j++)
        {
           cout << A[i][j] << " ";
        }
        cout << endl;
    }
   
    cout << endl;
    
    int row2, col2;

    cout << "Enter row2: ";
    cin >> row2;

    cout << "Enter col2: ";
    cin >> col2;

    if (col1!=row2)
    {
       cout << "Multiplication of these matrices is not possible" << endl;
    }else{
    int B[row2][col2];

    for (int i = 0; i < row2; i++)
    {
        for (int j = 0; j < col2; j++)
        {
            int elem;
            cout << "Enter (r" << i << ",c" << j << ")" << ": ";
            cin >> elem;
            B[i][j] = elem;
        }
    }

    for (int i = 0; i < row2; i++)
    {
        for (int j = 0; j < col2; j++)
        {
           cout << B[i][j] << " ";
        }
        cout << endl;
    }

    int C[row1][col2];
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col2; j++)
        {
            for (int k = 0;k < row2; k++)
            {
               
                C[i][j] =  A[i][k] * B[k][j];
            }
            
        }
        
    }
    cout << "AxB: " << endl;

    for (int i = 0; i < row2; i++)
    {
        for (int j = 0; j < col2; j++)
        {
           cout << C[i][j] << " ";
        }
        cout << endl;
    }
}
    
}