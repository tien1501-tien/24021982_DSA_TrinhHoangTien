/// cài đặt ngăn xếp bằng danh sách liên kết

#include <iostream>
using namespace std;

// Khai bao Node
struct Node {
    int data;
    Node* next;
};

// Khai bao Stack
struct Stack {
    Node* top;
};

// Khoi tao Stack
void init(Stack &s) {
    s.top = NULL;
}

// Kiem tra Stack rong
bool isEmpty(Stack s) {
    return s.top == NULL;
}

// Them phan tu vao Stack
void push(Stack &s, int x) {
    Node* p = new Node;
    p->data = x;
    p->next = s.top;
    s.top = p;
}

// Xoa phan tu tren dinh Stack
void pop(Stack &s) {
    if (isEmpty(s)) {
        cout << "Stack rong!" << endl;
        return;
    }

    Node* p = s.top;
    s.top = s.top->next;
    delete p;
}

// Lay gia tri dinh Stack
int peek(Stack s) {
    if (isEmpty(s)) {
        cout << "Stack rong!" << endl;
        return -1;
    }
    return s.top->data;
}

// Hien thi Stack
void display(Stack s) {
    Node* p = s.top;
    while (p != NULL) {
        cout << p->data << " ";
        p = p->next;
    }
    cout << endl;
}

int main() {
    Stack s;
    init(s);

    push(s, 10);
    push(s, 20);
    push(s, 30);

    cout << "Stack: ";
    display(s);

    cout << "Dinh Stack: " << peek(s) << endl;

    pop(s);

    cout << "Sau khi pop: ";
    display(s);

    while (!isEmpty(s)) {
        pop(s);
    }

    return 0;
}
