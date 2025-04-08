#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<string> fruits(3);

    for (string &fruit: fruits)
    {
        cout << "Enter fruit: ";
        cin>> fruit;
    }
    for (string fruit: fruits)
    {
        
        cout << fruit << endl;
    }
    
}