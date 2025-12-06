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

class Queue{
public:
    Node* front;
    Node* rear;

    Queue(){
        this->front = this->rear = NULL;
    }


    void enqueue(int value){
        Node* newNode = new Node(value);
        if(front == NULL){
            this->front = this->rear = newNode;
            return;
        }else{
            this->rear->next = newNode;
            this->rear = newNode;
        }
    }

    void dequeue(){
        if(front == NULL){
            cout << "List is empty";
            return;
        }else{
            Node* temp = this->front;
            cout << "pop: " << temp->data << endl;
            this->front = front->next;
            delete temp;
        }
    }


};


int main(){

    Queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    q.dequeue();
    q.dequeue();
    q.dequeue();

    return 0;
}