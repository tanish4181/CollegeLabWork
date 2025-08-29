#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

class Stack {
private:
    Node* top;
    
public:
    Stack() {
        top = nullptr;
    }
    
    void push(int value) {
        Node* newNode = new Node;
        newNode->data = value;
        newNode->next = top;
        top = newNode;
        cout << "Pushed: " << value << endl;
    }
    
    void pop() {
        if (top == nullptr) {
            cout << "Stack Underflow! Cannot pop from empty stack." << endl;
            return;
        }
        
        Node* temp = top;
        cout << "Popped: " << top->data << endl;
        top = top->next;
        delete temp;
    }
    
    void peek() {
        if (top == nullptr) {
            cout << "Stack is empty!" << endl;
        } else {
            cout << "Top element: " << top->data << endl;
        }
    }
    
    bool isEmpty() {
        return top == nullptr;
    }
    
    void display() {
        if (top == nullptr) {
            cout << "Stack is empty!" << endl;
            return;
        }
        
        cout << "Stack: ";
        Node* current = top;
        while (current != nullptr) {
            cout << current->data << " ";
            current = current->next;
        }
        cout << endl;
    }
};

int main() {
    Stack s;
    
    cout << "=== Simple Stack Operations ===" << endl;
    
    s.peek();
    s.pop();
    
    s.push(10);
    s.push(20);
    s.push(30);
    
    s.display();
    s.peek();
    
    s.pop();
    s.pop();
    s.display();
    
    s.pop();
    s.pop();
    
    return 0;
}