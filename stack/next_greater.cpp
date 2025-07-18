#include <iostream>
#include <vector>
#include <stack>

using namespace std;

vector<int> giveNextGreaterElementArray(vector<int> &arr)
{
    int n = arr.size();
    stack<int> st;
    vector<int> ans(n);
   


    for (int i = n-1; i >= 0; i--){
        while(!st.empty() and st.top()<arr[i]){
            st.pop();
        }

        if(st.empty()){
            ans[i] = -1;
        }else{
            ans[i] = st.top();
        }
        st.push(arr[i]);
    }
    return ans;
}

int main()
{
    vector<int> arr = {6, 8, 0, 1, 3};
    vector<int> ans = giveNextGreaterElementArray(arr);

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
}