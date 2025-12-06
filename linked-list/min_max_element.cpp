#include<iostream>

using namespace std;

class Node{
public:
    int data;
    Node* next;
    Node(int value){
        data = value;
        this->next = NULL;
    }
};


class LinkedList{
public:
    Node* head;
    Node* tail;

    LinkedList(){
        this->head = this->tail = NULL;
    }

    void push(int value){
        Node* newNode = new Node(value);
        if(this->head==NULL){
            this->head = this->tail = newNode;
            return;
        }else{
            newNode->next = this->head;
            this->head = newNode;
        }
    }
    int min(){
        if(this->head==NULL){
            cout << "List is empty! " << endl;
            return -1;
        }else{
           Node* temp = this->head;
           Node* min = this->head;

           while(temp){
            if(temp->data<min->data){
                min = temp;
            }
            temp = temp->next;
           }

           return min->data;
        }
    }
    int max(){
        if(this->head==NULL){
            cout << "List is empty! " << endl;
            return -1;
        }else{
           Node* temp = this->head;
           Node* max = this->head;

           while(temp){
            if(temp->data>max->data){
                max = temp;
            }
            temp = temp->next;
           }
           return max->data;
        }
    }

    void print(){
        Node* temp = this->head;
        while(temp){
            cout << temp->data << "->";
            temp = temp->next;
        }
    }
};


int main(){

    LinkedList ll;
    ll.push(12);
    ll.push(18);
    ll.push(23);
    ll.push(19);
    ll.push(25);
    ll.push(55);
    ll.push(3);
    ll.push(39);

    ll.print();

    cout << "max: " << ll.max() << endl;
    cout << "min: " << ll.min() << endl;

    return 0;
}
 