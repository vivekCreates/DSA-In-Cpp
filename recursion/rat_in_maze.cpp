#include<iostream>

using namespace std;

int countWays(int sr,int sc,int er,int ec,string s){
    
    if(sr>er || sc>ec) return 0;
    if(sr==er and sc==ec) {
        cout << s  << endl;
        return 1;
    }

    int rightWays = countWays(sr+1,sc,er,ec,s+"R");
    int downWays = countWays(sr,sc+1,er,ec,s+"D");
   
    return rightWays + downWays;
}

int main(){
    int sr = 1,sc=1,er=3,ec=3;
    string s = "";
    int count = countWays(sr,sc,er,ec,s);
    cout << "count: " << count << endl;
}