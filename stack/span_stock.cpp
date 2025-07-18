#include<iostream>
#include<vector>
#include<stack>

using namespace std;

vector<int> spanStock(vector<int>& prices){
    stack<int> st;
    vector<int> ans;
    ans.push_back(1);
    st.push(0);

    for (int i = 1; i < prices.size(); i++){
        if(prices[i] < prices[st.top()]){
            ans.push_back(1);
            st.push(i);
        }else{
            if(prices[i]>prices[st.top()]){
                st.pop();
                ans.push_back(i-st.top());
            }else{
                ans.push_back(i-st.top());
            }
        }
    }
    return ans;
}

int main(){
    vector<int> prices = {100,80,60,70,60,75,85};
    vector<int> ans = spanStock(prices);
   
    cout << "stock: ";
    for (int i = 0; i < ans.size(); i++){
        cout << ans[i] << " ";
    }
    cout << endl;

}