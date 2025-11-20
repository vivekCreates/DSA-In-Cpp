#include<iostream>

using namespace std;

class Stack{
public:
    static const int n = 10;
    char arr[n];
    int top;

    Stack(){
        this->top = -1;
    }

    void push(char letter){
        if (top == n-1){
            cout << "Stack Overflow! ";
            return;
        }
        top++;
        arr[top] = letter;
    }

    char pop() {
        if (top == -1) {
            cout << "Stack Underflow\n";
            return '\0';
        }
        return arr[top--];
    }

};

int main(){
    Stack s;
    s.push('v');
    s.push('i');
    s.push('v');
    s.push('e');
    s.push('k');

    cout << s.pop() << endl;
    cout << s.pop() << endl;
    cout << s.pop() << endl;
    cout << s.pop() << endl;
    cout << s.pop() << endl;
    return 0;
}
