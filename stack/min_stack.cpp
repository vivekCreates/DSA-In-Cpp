#include<iostream>
#include<vector>
#include<stack>

using namespace std;

class MinStack{
public:
    stack<int> s;
    int minVal = 0;
    MinStack(){}

    void push(int val){
        if(s.empty()){
        s.push(val);
        minVal = val;
      }
       s.push(val);
      if(s.top()<minVal){
        minVal = s.top();
       }
    }

    void pop(){
        s.pop();
    }
    int top(){
        return s.top();
    }
    int getMin(){
        return minVal;
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