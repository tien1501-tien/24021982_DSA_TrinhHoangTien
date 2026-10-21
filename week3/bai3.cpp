/// tạo xài đặt hàng đợi bằng danh sách mảng

#include <iostream>
using namespace std;

#define MAX 100

struct Queue {
    int a[MAX];
    int front;
    int rear;
};

// Khoi tao hang doi
void init(Queue &q) {
    q.front = 0;
    q.rear = -1;
}

// Kiem tra hang doi rong
bool isEmpty(Queue q) {
    return q.front > q.rear;
}

// Kiem tra hang doi day
bool isFull(Queue q) {
    return q.rear == MAX - 1;
}

// Them phan tu vao hang doi
void enqueue(Queue &q, int x) {
    if (isFull(q)) {
        cout << "Queue day!\n";
        return;
    }
    q.a[++q.rear] = x;
}

// Xoa phan tu dau hang doi
void dequeue(Queue &q) {
    if (isEmpty(q)) {
        cout << "Queue rong!\n";
        return;
    }
    q.front++;
}

// Lay phan tu dau hang doi
int peek(Queue q) {
    if (isEmpty(q)) {
        cout << "Queue rong!\n";
        return -1;
    }
    return q.a[q.front];
}

// In hang doi
void display(Queue q) {
    for (int i = q.front; i <= q.rear; i++) {
        cout << q.a[i] << " ";
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

    cout << "Front: " << peek(q);

    return 0;
}
