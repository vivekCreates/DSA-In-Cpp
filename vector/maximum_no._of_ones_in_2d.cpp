#include<iostream>
#include<vector>

using namespace std;

int maximum_no_of_ones_row(vector<vector<int>> &v){
      
    
    int max_ones = 0;
    int max_ones_rows;
    int columns = v[0].size();
    for (int i = 0; i < v.size(); i++)
    {
      for (int j = 0; j < v[i].size(); j++)
      {
        if (v[i][j]==1)
        {
            int numberOfOnes = columns -j ;
           if (max_ones<numberOfOnes)
           {
            max_ones = numberOfOnes;
            max_ones_rows = i+1;
           }
           break;
        }
      }
    }
    return max_ones_rows;
}

int main(){

    int rows,cols;

    cout << "Enter rows: ";
    cin>>rows;
 
    cout << "Enter cols: ";
    cin>>cols;

    vector<vector<int>> vec(rows,vector<int>(cols,0));
    for (int i = 0; i < rows; i++)
    {   
        
        for (int j = 0; j < cols; j++)
        {
            int elem;
            cout << "Enter Only 0 or 1: ";
            cin>> elem;
            vec[i][j] = elem;
        }
    }
    

    

    cout << "Vector: " << endl;
    for (int i = 0; i < rows; i++)
    {
      for (int j = 0; j < cols; j++)
      {
        cout << vec[i][j] << " ";
      }
      cout << endl;
    }

    cout << "Max ones row: " << maximum_no_of_ones_row(vec) <<endl;
   
}