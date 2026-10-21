/// cài đặt danh sách liên kết đơn 

#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

struct List {
    Node* head;
    Node* tail;
};

void init(List &l) {
    l.head = l.tail = NULL;
}

Node* createNode(int x) {
    Node* p = new Node;
    p->data = x;
    p->next = NULL;
    return p;
}



// Them dau O(1)
void insertFirst(List &l, int x) {
    Node* p = createNode(x);
    p->next = l.head;
    l.head = p;

    if (l.tail == NULL)
        l.tail = p;
}

// Them cuoi O(1) khi co tail
void insertLast(List &l, int x) {
    Node* p = createNode(x);

    if (l.head == NULL)
        l.head = l.tail = p;
    else {
        l.tail->next = p;
        l.tail = p;
    }
}

// Them tai vi tri k O(n)
void insertAt(List &l, int k, int x) {
    if (k < 0) return;

    if (k == 0) {
        insertFirst(l, x);
        return;
    }

    Node* p = l.head;
    for (int i = 0; i < k - 1 && p != NULL; i++)
        p = p->next;

    if (p == NULL) return;

    Node* q = createNode(x);
    q->next = p->next;
    p->next = q;

    if (q->next == NULL)
        l.tail = q;
}

// Xoa dau O(1)
void deleteFirst(List &l) {
    if (l.head == NULL) return;

    Node* p = l.head;
    l.head = l.head->next;

    if (l.head == NULL)
        l.tail = NULL;

    delete p;
}

// Xoa cuoi O(n)
void deleteLast(List &l) {
    if (l.head == NULL) return;

    if (l.head == l.tail) {
        deleteFirst(l);
        return;
    }

    Node* p = l.head;
    while (p->next != l.tail)
        p = p->next;

    delete l.tail;
    l.tail = p;
    l.tail->next = NULL;
}

// Xoa tai vi tri k O(n)
void deleteAt(List &l, int k) {
    if (k < 0 || l.head == NULL) return;

    if (k == 0) {
        deleteFirst(l);
        return;
    }

    Node* p = l.head;
    for (int i = 0; i < k - 1 && p != NULL; i++)
        p = p->next;

    if (p == NULL || p->next == NULL)
        return;

    Node* q = p->next;
    p->next = q->next;

    if (q == l.tail)
        l.tail = p;

    delete q;
}



int main() {
    List l;
    init(l);

    insertLast(l, 10);
    insertLast(l, 20);
    insertLast(l, 30);

    insertFirst(l, 5);
    insertAt(l, 2, 15);


    deleteFirst(l);
    deleteLast(l);
    deleteAt(l, 1);

    return 0;
}
