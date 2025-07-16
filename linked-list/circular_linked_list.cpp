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

class CircularList{
    Node* head;
    Node* tail;
public:
    CircularList(){
        head = tail = NULL;
    }

    void pushFront(int val){
         Node* newNode = new Node(val);
        if(head == NULL){
            head = tail = newNode;
            return;
        }else{
            newNode->next = head;
            tail->next = newNode;
            head = newNode;
        }
    }

    void pushBack(int val){
        Node* newNode = new Node(val);
        if(head == NULL){
            head = tail = newNode;
            return;
        }else{
            tail->next = newNode;
            newNode->next = head;
            tail = newNode;
        }
    }

    void popFront(){
        if(head==NULL){
            cout << "Error: Circular Linked list is empty!";
            return;
        }else{
            Node* temp = head;
            head = temp->next;
            temp->next = NULL;
            delete temp;
            if(tail==head){
                tail->next = NULL;
            }else{
                tail->next = head;
            }

        }
    }
    void popBack(){
        if(head==NULL){
            cout << "Error: Circular Linked list is empty!";
            return;
        }else{
            Node* temp = head;
            while(temp->next->next!=head){
                temp = temp->next;
            }
            if(tail==head){
                tail->next = NULL;
            }else{
            Node* last = temp->next;
            temp->next = head;
            delete last;
            }
           
        }
    }

    void print(){
        Node* temp = head;
        do{
            cout << temp->data << " ";
            temp = temp->next;
        }while (temp != head);
        cout << endl;
    }
};

int main(){
    CircularList cl;
    cl.pushFront(1);
    cl.pushFront(3);
    cl.pushBack(5);
    cl.pushBack(7);
    cl.popFront();
    cl.popBack();
    cl.print();
}