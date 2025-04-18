#include<iostream>
#include<vector>

using namespace std;

int fact(int n){
    if (n==0) return 1;
    return n*fact(n-1);
    
}

int combination(int n,int r){
    int ncr = fact(n)/(fact(r)*fact(n-r));
    return ncr;
}

vector<vector<int>> pascalTriangle(int n){

    vector<vector<int>> pascal(n);
    for (int i = 0; i < n; i++)
    {
         pascal[i].resize(i+1);
    }

    for (int i = 0; i < pascal.size(); i++)
    {
        for (int j = 0; j < pascal[i].size(); j++)
        {
           pascal[i][j] = combination(i,j);
        }
        
    }
    return pascal;
    
}

int main(){
    int n;
    cout << "Enter n: ";
    cin>> n;

    vector<vector<int>> triangle;
    triangle = pascalTriangle(n);
    
    for (int i = 0; i < triangle.size();i++)
    {
        for (int j = 0; j < triangle[i].size(); j++)
        {
            cout << triangle[i][j] << " ";
        }
        cout << endl;
    }
    

}