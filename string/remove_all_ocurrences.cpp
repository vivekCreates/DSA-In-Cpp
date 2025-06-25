#include<iostream>

using namespace std;

int main(){
    string s = "eemckxmckx";
    string part = "emckx";
     size_t pos;
    while ((pos = s.find(part)) != string::npos) {
        s.erase(pos, part.length());
    }
    
    cout << s;
}