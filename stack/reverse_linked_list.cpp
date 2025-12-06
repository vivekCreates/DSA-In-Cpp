#include<iostream>

using namespace std;

class Node{
public:
    int data;
    Node* next = NULL;

    Node(int value){
        this->data = value;
    }
};

class Stack{
public:
    Node* head;
    Node* tail;

    Stack(){
        this->head = this->tail = NULL;
    }

    void push(int value){
        Node* newNode = new Node(value);
        if(this->head == NULL){
            this->head = this->tail = newNode;
        }else{
            newNode->next = this->head;
            this->head = newNode;
        }

    }
    void pop(){
        if(this->head == NULL){
            cout << "List is empty! ";
            return;
        }else{
            Node* temp = this->head;
            this->head = temp->next;
            delete temp;
        }
    }
    int peek(){
        if(this->head == NULL){
            cout << "List is empty! ";
        }else{
            Node* temp = this->head;
            return temp->data;
        }
    }

    void print(){
        if(this->head == NULL){
            cout << "List is empty! ";
            return;
        }else{
            Node* temp = this->head;
            while(temp){
                cout << temp->data << " " << endl;
                temp = temp->next;
            }
            cout << endl;
        }
    }
};


int main(){

    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.print();
    cout <<"peek: " << s.peek() << endl;
    s.pop();
     s.print();
    return 0;
}