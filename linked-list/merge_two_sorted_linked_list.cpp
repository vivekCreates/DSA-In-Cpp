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

Node* mergeTwoSortedList(Node* l1, Node* l2){
    if(l1==NULL or l2==NULL){
        return l1==NULL ? l2:l1;
    }

    if(l1->data<=l2->data){
        l1->next = mergeTwoSortedList(l1->next,l2);
        return l1;
    }else{
        l2->next = mergeTwoSortedList(l1,l2->next);
        return l2;
    }

}

 void printLists(Node* list){
    Node* temp = list;
        while(temp){
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }

class List{
public:
    Node* head;
    Node* tail;
    List(){
        tail = head = NULL;
    }

    void pushBack(int val){
        Node* newNode = new Node(val);
        if(head == NULL){
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

   
};

int main(){
    List l1;
    l1.pushBack(1);
    l1.pushBack(3);
    l1.pushBack(5);

    List l2;
    l2.pushBack(2);
    l2.pushBack(4);
    l2.pushBack(6);

    Node* mergedList = mergeTwoSortedList(l1.head,l2.head);
    printLists(mergedList);

}