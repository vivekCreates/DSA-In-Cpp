#include<iostream>

using namespace std;


class Node{
public:
    int data;
    Node* left;
    Node* right;

    Node(int value){
        data = value;
        this->left = this->right = nullptr;
    }
};


void print(Node* root){
    if (root == NULL) return;

    cout << root->data << " -> ";

    if(root->left)  cout << root->left->data << " , ";
    else            cout << "n , ";

    if(root->right) cout << root->right->data;
    else            cout << "n";

    cout << endl;

    print(root->left);
    print(root->right);
}



int main(){
    Node* root = new Node(1);
    Node* one = new Node(2);
    Node* two = new Node(3);
    Node* four = new Node(4);
    Node* five = new Node(5);

    root->left = one;
    root->right = two;
    one->left = four;
    two->right = five;

    print(root);
    return 0;
}