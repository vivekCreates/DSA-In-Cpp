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
    Node* top;
    Stack(){
        this->top = NULL;
    }

    void push(int value){
        Node* newNode = new Node(value);
        if (this->top ==NULL){
            this->top = newNode;
        }else{
            newNode->next = this->top;
            this->top = newNode;
        }
    }

    void pop(){
        if (this->top == NULL){
            cout << "You can't pop on empty list";
        }else{
            Node* temp = this->top;
            this->top = this->top->next;
            delete temp;
        }
    }

    int peek(){
        return this->top->data;
    }
};



int main(){

    Stack s = Stack();
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);

    cout << s.peek() << endl;
    s.pop();
    cout << s.peek() << endl;



    return 0;
}