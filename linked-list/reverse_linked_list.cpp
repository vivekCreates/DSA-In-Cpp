#include<iostream>

using namespace std;

class Node{
public:
    int data;
    Node* next;
    Node(int val){
        data = val;
        next = NULL;
    }
};

class List{
    Node* tail; 
    Node* head;
    
public:
    List(){
        head = tail = NULL;
    }

    void pushBack(int val){
        Node* newNode = new Node(val);
        if(head==NULL){
            head = tail = newNode;
            return;
        }else{
            tail->next = newNode;
            tail = newNode;
        }
    }

    void reverse(){
        Node* prev = NULL;
        Node* current = head;
        Node* next = NULL;

        while(current){
            next = current->next;
            current->next = prev;
            prev = current;
            current = next;
        }
        head = prev;
    }

    void print(){
        Node* temp = head;
        while(temp!= NULL){
            cout << temp->data << " ";
            temp = temp->next;
        }
    }
};


int main(){
    List ll;
    ll.pushBack(1);
    ll.pushBack(2);
    ll.pushBack(3);
    cout << "Original: ";
    ll.print();
    cout << endl;
    cout << "Reverse: ";
    ll.reverse();
    ll.print();
    cout << endl;
}