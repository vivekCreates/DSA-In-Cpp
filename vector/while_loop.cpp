#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<string> fruits(3);
    int i = 0;
    while (i<fruits.size())
    {
        cout << "Enter fruit: ";
        cin >> fruits[i++];

    }
    int j = 0;
    while (j<fruits.size())
    {
        cout << fruits[j++] << endl;

    }

}