#include<iostream>

using namespace std;


class Node{
public:
    int data;
    Node* next;
    Node* prev;

    Node(int val){
        data = val;
        next = prev = NULL;
    }

};


class DoublyList{
    Node* head;
    Node* tail;
public:
    DoublyList(){
        head = tail = NULL;
    }
 void pushFront(int val){
     Node* newNode = new Node(val);
        if(head == NULL){
            head = tail = newNode;
            return;
        }else{
            newNode->next = head;
            head = newNode;
        }
 }
    void pushBack(int val){
        Node* newNode = new Node(val);
        if(head == NULL){
            head = tail = newNode;
            return;
        }else{
            newNode->prev = tail;
            tail->next = newNode;
            tail = newNode;
        }
    }

    void popFront(){
        if(head == NULL){
            cout << "Error: Doubly linked list is empty!";
            return;
        }else{
            Node* temp = head;
            head->next->prev = NULL;
            head = head->next;
            delete temp;
        }
    }

    void popBack(){
        if(head == NULL){
            cout << "Error: Doubly linked list is empty!";
            return;
        }else{
            Node* temp = tail;
            tail = tail->prev;
            tail->next = NULL;
            delete temp;
        }
    }

    void print(){
        Node* temp = head;
        while(temp){
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main(){
    DoublyList dl;
    dl.pushBack(10);
    dl.pushBack(20);
    dl.pushBack(30);
    dl.pushFront(5);
    dl.popFront();
    dl.popBack();
    dl.print();
}