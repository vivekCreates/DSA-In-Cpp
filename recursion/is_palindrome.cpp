#include<iostream>
#include<string>
using namespace std;

bool isPalindrome(string name,int left,int right){
    if(left>=right) return true;
    if(name[left]!=name[right]) return false;
    return isPalindrome(name,left+1,right-1);
}


int main(){
    string name = "nitin";
    int left = 0, right = name.length()-1;
    bool ans = isPalindrome(name,left,right);
    cout << "isPalindrome: " << ans << endl;
}