#include<iostream>

using namespace std;

class Node{
public:
    int data;
    Node* next;

    Node(int value){
        this->data = value;
    }
};

class Stack{
public:
    int arr[5];
    int top;
    Stack(){
        this->top = -1;
    }

    void push(int data){
        if(top >=5 ){
            cout << "Stack overflow ";
            return;
        }else{
            arr[++top] = data;
        }
    }

    void pop(){
        if(top < 0 ){
            cout << "Stack underflow ";
            return;
        }else{
            top--;
        }
    }

    int peek(){
        return arr[top];
    }


};


int main(){
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);

    cout << "peek: " << s.peek() << endl;
    s.pop();
    cout << "peek: " << s.peek() << endl;
    return 0;
}