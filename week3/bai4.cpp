/// tạo cài đặt hàng đợi bằng danh sách liên kết

#include <iostream>
using namespace std;

// Khai bao Node
struct Node {
    int data;
    Node* next;
};

// Khai bao Queue
struct Queue {
    Node* front;
    Node* rear;
};

// Khoi tao Queue
void init(Queue &q) {
    q.front = NULL;
    q.rear = NULL;
}

// Kiem tra Queue rong
bool isEmpty(Queue q) {
    return q.front == NULL;
}

// Them phan tu vao cuoi Queue
void enqueue(Queue &q, int x) {
    Node* p = new Node;
    p->data = x;
    p->next = NULL;

    if (isEmpty(q)) {
        q.front = p;
        q.rear = p;
    } else {
        q.rear->next = p;
        q.rear = p;
    }
}

// Xoa phan tu dau Queue
void dequeue(Queue &q) {
    if (isEmpty(q)) {
        cout << "Queue rong!" << endl;
        return;
    }

    Node* p = q.front;
    q.front = q.front->next;

    if (q.front == NULL) {
        q.rear = NULL;
    }

    delete p;
}

// Lay phan tu dau Queue
int peek(Queue q) {
    if (isEmpty(q)) {
        cout << "Queue rong!" << endl;
        return -1;
    }
    return q.front->data;
}

// In Queue
void display(Queue q) {
    Node* p = q.front;
    while (p != NULL) {
        cout << p->data << " ";
        p = p->next;
    }
    cout << endl;
}

int main() {
    Queue q;
    init(q);

    enqueue(q, 10);
    enqueue(q, 20);
    enqueue(q, 30);

    display(q);

    dequeue(q);

    display(q);

    cout << "Front: " << peek(q) << endl;

    return 0;
}

