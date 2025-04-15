#include<iostream>
using namespace std;

int main(){

    int rows,cols;

    cout << "Enter the rows: ";
    cin>>rows;
    
    cout << "Enter the cols: ";
    cin>>cols;

    int A[rows][cols];
    int B[cols][rows];

    for(int i=0;i<rows;i++){
        for (int j = 0; j < cols; j++)
        {
            int elem;
            cout << "Enter the element: ";
            cin>>elem;
            A[i][j] = elem;
        }
        
    }

    cout << "A: " << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << A[i][j] << " ";
        }
        cout << endl;
        
    }
    

   
    for(int i=0;i<cols;i++){
        for (int j = 0; j < rows; j++)
        {
            B[i][j] = A[j][i];
        }
        
    }



    cout << "Transpose of A:" << endl;
    for (int i = 0; i < cols; i++)
    {
        for (int j = 0; j < rows; j++)
        {
            cout << B[i][j] << " ";
        }
        cout << endl;
        
    }
    cout << endl;
}