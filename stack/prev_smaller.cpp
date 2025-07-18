#include <iostream>
#include <vector>
#include <stack>

using namespace std;

vector<int> prevSmallerElementArray(vector<int> &arr)
{
    int n = arr.size();
    vector<int> ans(n);
    stack<int> st;

    for (int i = 0; i < n; i++)
    {
        while (!st.empty() and arr[i] < st.top())
        {

            st.pop();
        }

        if (st.empty())
        {
            ans[i] = -1;
        }
        else
        {
            ans[i] = st.top();
        }
        st.push(arr[i]);
    }
    return ans;
}

int main()
{
    vector<int> arr = {3,1,0,8,6};
    vector<int> ans = prevSmallerElementArray(arr);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }

}