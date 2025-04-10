#include<iostream>
#include<vector>

using namespace std;

void sort_zeroes_and_one(vector<int> &a){
    int count_zeroes = 0;
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] == 0)
        {
            count_zeroes++;
        }    
    }
    
    for (int i = 0; i < a.size(); i++)
    {
        if (i<count_zeroes)
        {
            a[i] = 0;
        }else{
            a[i] = 1;
        }
        
    }
    return;
}

int main(){
    int n;
    cout<< "Enter no. of elements: " ;
    cin>>n;
    
    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        int elem;
        cout << "Enter element: ";
        cin>>elem;
        arr.push_back(elem);
    }

    cout << "array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    sort_zeroes_and_one(arr);
    cout << "sorted: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    
}