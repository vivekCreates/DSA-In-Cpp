#include<iostream>
#include<vector>
using namespace std;

void findAllSubset(vector<int>& arr,vector<int>& ans,int i,vector<vector<int>>& allSubsets){
    
    if(i==arr.size()){
        allSubsets.push_back({ans});
        return;
    }
    ans.push_back(arr[i]);
    findAllSubset(arr,ans,i+1,allSubsets);
    ans.pop_back();
    findAllSubset(arr,ans,i+1,allSubsets);
}



int main(){
    vector<int> arr = {1,2,3};
    vector<vector<int>> subsets;
    vector<int> ans;
    findAllSubset(arr,ans,0,subsets);
    cout << "All Subsets: ";
    for (int i = 0; i < subsets.size(); i++){
        cout << "[";
        for (int j = 0; j < subsets[i].size(); j++){
            cout << " " << subsets[i][j] << " ";
        }
         cout << "]";
    }
    cout << endl;
}