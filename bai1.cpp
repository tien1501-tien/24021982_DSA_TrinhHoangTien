#include <iostream>
using namespace std;

const int SIZE = 10;

// Khai bao Node
struct Node {
    int data;
    Node* next;
};

// Khai bao bang bam
struct HashTable {
    Node* table[SIZE];
};

// Ham bam
int hashFunction(int x) {
    return x  % SIZE;
}

// Khoi tao bang bam
void init(HashTable &h) {
    for (int i = 0; i < SIZE; i++) {
        h.table[i] = NULL;
    }
}

// Them phan tu
void insert(HashTable &h, int x) {
    int index = hashFunction(x);

    Node* p = new Node;
    p->data = x;
    p->next = h.table[index];

    h.table[index] = p;
}

// Tim kiem phan tu
bool search(HashTable &h, int x) {
    int index = hashFunction(x);
    Node* p = h.table[index];

    while (p != NULL) {
        if (p->data == x) {
            return true;
        }
        p = p->next;
    }

    return false;
}

// Xoa phan tu
void remove(HashTable &h, int x) {
    int index = hashFunction(x);

    Node* p = h.table[index];
    Node* prev = NULL;

    while (p != NULL) {
        if (p->data == x) {
            if (prev == NULL) {
                h.table[index] = p->next;
            } else {
                prev->next = p->next;
            }

            delete p;
            cout << "Da xoa " << x << endl;
            return;
        }

        prev = p;
        p = p->next;
    }

    cout << "Khong tim thay phan tu!\n";
}

void display(HashTable &h) {
    for (int i = 0; i < SIZE; i++) {
        cout << "table[" << i << "]: ";

        Node* p = h.table[i];

        while (p != NULL) {
            cout << p->data << " -> ";
            p = p->next;
        }

        cout << "NULL" << endl;
    }
}


