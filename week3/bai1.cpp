///// tạo ngăn xếp bằng mảng 

#include <iostream>
using namespace std;

#define MAX 100

struct Stack {
    int a[MAX];
    int top;
};

void init(Stack &s) {
    s.top = -1;
}

bool isEmpty(Stack s) {
    return s.top == -1;
}

// Kiem tra ngan xep day
bool isFull(Stack s) {
    return s.top == MAX - 1;
}

// Them phan tu vao ngan xep
void push(Stack &s, int x) {
    if (isFull(s)) {
        cout << "Stack day!\n";
        return;
    }
    s.a[++s.top] = x;
}


// Lay phan tu ra khoi ngan xep
void pop(Stack &s) {
    if (isEmpty(s)) {
        cout << "Stack rong!\n";
        return;
    }
    s.top--;
}

// Xem phan tu tren cung
int peek(Stack s) {
    if (isEmpty(s)) {
        cout << "Stack rong!\n";
        return -1;
    }
    return s.a[s.top];
}

// Hien thi ngan xep
void display(Stack s) {
    for (int i = s.top; i >= 0; i--) {
        cout << s.a[i] << " ";
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

    cout << "Phan tu tren cung: " << peek(s) << endl;

    pop(s);

    cout << "Sau khi pop: ";
    display(s);

    return 0;
}
