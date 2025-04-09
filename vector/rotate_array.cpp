#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){

    vector<int> arr;
    arr.push_back(1);
    arr.push_back(2);
    arr.push_back(3);
    arr.push_back(4);
    arr.push_back(5);

    int size = arr.size();
    int r;
    cout << "Enter rotations: ";
    cin>>r;
    r = r%size;

    cout << "array: ";
    for (int i = 0; i < size; i++)
    {
       cout << arr[i] << " ";
    }
    cout << endl;

    reverse(arr.begin(),arr.end());
    reverse(arr.begin(),arr.begin()+r);
    reverse(arr.begin()+r,arr.end());

    cout << "Rotated Array: ";

    for (int i = 0; i < size; i++)
    {
       cout << arr[i] << " ";
    }
    cout << endl;
}