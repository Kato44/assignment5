#include <iostream>
// creatd by Tasbih 
using namespace std;

class Queue {

public:
    class Node {
    public:
        int data;
        Node *next = nullptr;
        Node *previous = nullptr;

        Node(int item) {
            data = item;
        }
    };

    Node *head = nullptr;
    Node *last = nullptr;
    int size = 0;

    void enqueue(int item) {
        if (head == nullptr) {
            head = new Node(item);
            last = head;
        } else {
            Node *newNode = new Node(item);
            newNode->previous = head;
            head->next = newNode;
            last = newNode;
        }
        size++;
    }

    int dequeue() {
        int item = head->data;
        Node *newHead = head->next;
        delete head;
        head = newHead;

        return item;
    }

    int front() {
        return head->data;
    }

    int rear() {
        return last->data;
    }
};

int main() {
    Queue queue;
    queue.enqueue(10);
    queue.enqueue(20);
    cout << queue.dequeue() << endl;
    cout << queue.front() << endl;
    cout << queue.rear() << endl;
return 0;}
