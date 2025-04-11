#include<iostream>
#include<vector>

using namespace std;


void print(vector<int> &v){
    for (int elem:v){
        cout << elem << " ";
    }
}

void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

void make_square_array(vector<int> &v){
    for (int i = 0; i < v.size(); i++)
    {
        v[i] = v[i] * v[i];
    }
}

void sort_square_array(vector<int> &v){
    int i = 0;
    int j = 1;
    int n = v.size();
   
    
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (v[i]>v[j])
            {
                swap(v[i],v[j]);
            }
        }
        
    }
    
}


int main(){
    int n;
    cout << "Enter no. of elements: ";
    cin>>n;
    vector<int> v;


    for (int i = 0; i < n; i++)
    {
        int elem;
        cout << "Enter element: ";
        cin>>elem;
        v.push_back(elem);
    }

    cout << "array: " ;
    print(v);
    cout << endl;

   
    make_square_array(v);
    cout << "squared array: " ;
    print(v);
    cout << endl;

    sort_square_array(v);
    cout << "sorted array: " ;
    print(v);
    cout << endl;
} 
