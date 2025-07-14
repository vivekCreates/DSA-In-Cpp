#include<iostream>
#include<string>

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
    Node* head;
    Node* tail;
    public:
        List(){
            head = tail = NULL;
        }
        void pushFront(int val){
            Node* newNode = new Node(val);
            if(head==NULL){
                head = tail = newNode;
                return;
            }else{
                newNode->next = head;
                head = newNode;
            }
        }

        void pushBack(int val){
            Node* newNode = new Node(val);
            if(head==NULL){
                head = tail = newNode;
            }
                else{     
                tail->next = newNode;
                tail = newNode;
            }
        }

        void popFront(){
            if(head==NULL){
                cout << "Error: Linked List is empty";
                return;
            }
            Node* temp = head;
            head = temp->next;
            temp->next = NULL;
            delete temp;
        }

        void PopBack(){
            if(head==NULL){
                cout << "Error: Linked List is empty";
                return;
            }

            Node* temp = head;
            while (temp->next!=tail){
               temp = temp->next;
            }
            delete tail;
            tail = temp;
            tail->next = NULL;
         }

        void print(){
            Node* temp = head;
            while(temp!=NULL){
                cout << temp->data << " " << "--> ";
                temp = temp->next;
            }
            cout << "NULL" << endl;
            cout << endl;
        }
};

int main(){
    List ll;
    ll.pushFront(1);
    ll.pushFront(2);
    ll.PopBack();
    ll.print();
}