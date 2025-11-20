#include<iostream>
#include<vector>

using namespace std;

// using static arrays

class Queue{
public:
    int size;
    int* arr;
    int front;
    int rear;

    Queue(int size){
        arr = new int[size];
        this->size = size;
        front = rear = -1;
    }

    void enqueue(int val){
        if(rear==size-1){
            cout << "Queue is overflow";
            return;
        }

        if(front==-1){
            front = 0;
        }
        rear++;
        arr[rear] = val;
    }
    void dequeue(){
        if(front==-1 or front>rear){
            cout << "Queue is underflow";
        }else{
            cout << "popped: " << arr[front] << endl;;
            front++;
        }
    }
    void print(){
        for (int i = front; i <= rear; i++){
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};


int main(){
    Queue q(100);
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);

    q.print();
    q.dequeue();
    q.print();
}