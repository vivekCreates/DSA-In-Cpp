#include <iostream>
#include<algorithm>
using namespace std;

int main()
{
    string sentence = "  hello world  ";
    int n = sentence.length();
    string ans = "";
    reverse(sentence.begin(),sentence.end());
    int spaces = 0;
    for (int i = 0; i < n; i++)
    {
        string word = "";
        while (i < n and sentence[i] != ' '){
            word += sentence[i];
            i++;
        }
        reverse(word.begin(),word.end());
        ans += " " + word;
    }
    int i = 0;
   while (ans[i]==' ')
   {
    spaces++;
    i++;
   }
   
    
    cout << spaces << endl;
    cout << ans.substr(spaces);
}
