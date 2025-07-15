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
        }else{
            tail->next = newNode;
            tail = newNode;
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

    bool hasCycle(){
        Node* slow = head;
        Node* fast = head;
        while (fast and fast->next){
            slow = slow->next;
            fast = fast->next->next;
            if(slow==fast){
                return true;
            }
        }
        return false;
    }
};


int main(){
    List ll;
    ll.pushBack(1);
    ll.pushBack(2);
    ll.pushBack(3);
    ll.pushBack(4);

    ll.print();

    cout << "HasCycle: "<< ll.hasCycle() << endl;
}

