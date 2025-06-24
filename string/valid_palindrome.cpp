#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    string str = "A man, a plan, a canal: Panama";
    string result = "";
    bool isPalindrome = true;
    for (char ch : str)
    {
        if (isalnum(ch))
        {
            result += tolower(ch);
        }
    }
    int l = 0,r = result.length()-1;
    while(l<=r){
        if(result[l]!=result[r]){
            isPalindrome = false;
            break;
        }
        l++,r--;
    }
    cout << "isPalindrome: " << isPalindrome << endl;
}