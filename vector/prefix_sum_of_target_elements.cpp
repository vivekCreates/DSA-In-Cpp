#include<iostream>
#include<vector>

using namespace std;

int prefix_sum_of_targeted_elemets(vector<int> v){

    cout << "array: ";
    for (int elem:v)
    {
        cout << elem << " ";
    }
    cout << endl;
    
    int l,r;
    cout<<"Enter left position:";
    cin>>l;
    cout<<"Enter right postion:";
    cin>>r;

    int sum = 0;

    for (int i = l; i <= r; i++)
    {
        sum+= v[i];
    }
    return sum;
}

int main(){
    int n;
    cout << "Enter size of array: ";
    cin>>n;
    vector<int> v(n+1,0);

    for (int i = 1; i <= n; i++)
    {
        int elem;
        cout << "Enter element: ";
        cin>>elem;
        v[i] = elem;
    }
    
    int query;
    cout << "Enter number of queries: ";
    cin>>query;

    for (int i = 0; i < query; i++)
    {
        int ans = prefix_sum_of_targeted_elemets(v);
        cout << "sum: " << ans << endl;
    }
    
}