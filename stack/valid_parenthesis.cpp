#include <iostream>
#include <stack>
#include <string>

using namespace std;

bool isValid(string str)
{
    stack<char> st;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == '(' or str[i] == '[' or str[i] == '{')
        {
            st.push(str[i]);
        }
        else
        {
            if (st.size() == 0)
            {
                return false;
            }
            if (
                st.top() == '(' and str[i] == ')' or
                st.top() == '[' and str[i] == ']' or
                st.top() == '{' and str[i] == '}')
            {
                st.pop();
            }
            else
            {
                return false;
            }
        }
    }

    return st.size() == 0;
}

int main()
{
    bool ans1 = isValid("({})");
    bool ans2 = isValid("({)}");

    cout << "ans1: " << ans1 << endl;
    cout << "ans2: " << ans2 << endl;
}