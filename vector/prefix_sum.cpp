#include<iostream>
#include<vector>

using namespace std;

void prefix_sum(vector <int> &v){
    
    for (int i = 1; i < v.size(); i++)
    {
        v[i] = v[i-1] + v[i];
    }
    

}


int main(){

    vector<int> v;
    int n;
    cout << "Enter the size of array: ";
    cin>>n;

    for (int i = 0; i < n; i++)
    {
        int elem;
        cout << "Enter element: ";
        cin>>elem;
        v.push_back(elem);
    }
    

    cout << "array: ";
    for (int elem:v)
    {
        cout << elem << " ";
    }
    cout << endl;

    prefix_sum(v);

    cout << "prefix sum array: ";
    for (int elem:v)
    {
        cout << elem << " ";
    }
    cout << endl;
}