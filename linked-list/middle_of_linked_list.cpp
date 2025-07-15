#include <iostream>

using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

class List
{
    Node *head;
    Node *tail;

public:
    List()
    {
        head = tail = NULL;
    }

    void pushBack(int val){
        Node *newNode = new Node(val);
        if (head == NULL){
            head = tail = newNode;
        }
        else{
            tail->next = newNode;
            tail = newNode;
        }
    }

    Node* middle(){
      Node* slow = head;
      Node* fast = head;

      while(fast!= NULL and fast->next!= NULL){
        slow = slow->next;
        fast = fast->next->next;
      }
      return slow;
    }
    void print()
    {
        Node *temp = head;
        while (temp)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main()
{

    List ll;
    ll.pushBack(1);
    ll.pushBack(2);
    ll.pushBack(3);
    ll.pushBack(10);
    ll.pushBack(5);
    ll.print();
    cout << "Middle: " << ll.middle()->data <<  endl;
}