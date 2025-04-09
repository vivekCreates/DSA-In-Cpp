#include<iostream>
#include<vector>

using namespace std;

int main(){

    int n;
    cout << "Enter no. of elements:";
    cin>>n;
    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        int elem;
        cout << "Enter element: " ;
        cin>>elem;
        arr[i] = elem;
    }

    cout << "array: ";
    for(int a:arr){
        cout << a << " ";
    }
    cout<< endl;


    int q;
    cout << "Enter no. of queries: ";
    cin>>q;
    for (int i = 0; i < q; i++)
    {
        int query;
        cout << "Enter query: " ;
        cin>>query;
        int occurence=0,num;

       for (int j = 0; j<n; j++)
       {
        if (arr[j] == query)
        {
            num = arr[j];
            occurence++;
            
        }
    }
    cout << num << ": "<< occurence << endl;
       
        
    }
    
}