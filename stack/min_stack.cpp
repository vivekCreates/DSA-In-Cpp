#include<iostream>
#include<vector>
#include<stack>

using namespace std;

class MinStack{
public:
    stack<pair<int,int>> s;
    MinStack(){}

    void push(int val){
        if(s.empty()){
            s.push({val,val});
        }else{
            int minVal = min(val,s.top().second);
            s.push({val,minVal});
        }
    }

    void pop(){
        s.pop();
    }
    int top(){
        return s.top().first;
    }
    int getMin(){
        return s.top().second;
    }
};

int main(){
    MinStack m;
    m.push(4);
    m.push(1);
    m.push(3);

    cout << m.top() << endl;
    cout << m.getMin() << endl;
}