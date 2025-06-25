#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<char> chars = {'a', 'a', 'b', 'b','b', 'c', 'c', 'c'};
    int idx = 0;
    for (int i = 0; i < chars.size(); i++){
        char ch = chars[i];
        int count = 0;

        while (i < chars.size() and chars[i] == ch){
            count++;
            i++;
        }
        if (count == 1){
            chars[idx++] = ch;
        }
        else{
            chars[idx++] = ch;
            string str = to_string(count);
            for (char dig : str){
                chars[idx++] = dig;
            }
        }
        i--;
    }
    chars.resize(idx);

    for (int i = 0; i < chars.size(); i++)
    {
        cout << chars[i];
    }
    
}