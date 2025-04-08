#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<string> fruits(3);

    for (int i = 0; i < fruits.size(); i++)
    {
        cout << "Enter fruit: ";
        cin>> fruits[i];
    }
    for (int i = 0; i < fruits.size(); i++)
    {
        
        cout << fruits[i] << endl;
    }
    
}