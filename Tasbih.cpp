//creata by Tasbih on 29
//

#include <iostream>

using namespace std;
                                                                                                                               
class Stack { 
public:
    class Node {
    public:
        int data;
        Node *next = nullptr;

        Node(int item) {
            data = item;
            next = nullptr;
        }
    };

    Node *last = nullptr;
    int size = 0;

    void push(int item) {//  Addition function 
        if (last == nullptr)
            last = new Node(item);
        else {
            Node *newNode = new Node(item);
            newNode->next = last;
            last = newNode;
        }
        size++;

    }

    int pop() {//A higher numerical function
        Node *lastOfTheLast = last->next;
        int item = last->data;
        delete last;
        last = lastOfTheLast;
        return item;
    }

    int isEmpty() const {
        return size == 0;
    }

    int peek() const {
        return last->data;
    }
};

int main() {
    Stack stack;
    stack.push(10);
    stack.push(20);
    stack.push(30);
    cout << "Stack Peek: " << stack.peek() << endl;
    cout << "Stack Pop: " << stack.pop() << endl;
    cout << "Stack Pop: " << stack.size << endl;
    cout << "Stack isEmpty: " << stack.isEmpty() << endl;

return 0;}
