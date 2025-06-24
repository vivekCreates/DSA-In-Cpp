#include<iostream>

using namespace std;

int main(){
    string language = "Golang";

    int l=0,r=language.length()-1;

    cout << "Before swapping: " << language << endl;

    while(l<=r){
        swap(language[l],language[r]);
        l++,r--;
    }
    cout << "After swapping: " << language << endl;
}