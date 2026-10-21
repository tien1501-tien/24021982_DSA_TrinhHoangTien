/// Cài đặt List bằng mảng

#include <iostream>
using namespace std;

const int MAX = 100;

struct List {
    int a[MAX];
    int n;
};

void init(List &l) {
    l.n = 0;
}

bool isEmpty(List l) {
    return l.n == 0;
}


// Them vao dau O(n)
void insertFirst(List &l, int x) {
    if (l.n == MAX) return;

    for (int i = l.n; i > 0; i--)
        l.a[i] = l.a[i - 1];

    l.a[0] = x;
    l.n++;
}

// Them vao cuoi O(1)
void insertLast(List &l, int x) {
    if (l.n == MAX) return;
    l.a[l.n++] = x;
}

// Them vao vi tri k O(n)
void insertAt(List &l, int k, int x) {
    if (k < 0 || k > l.n || l.n == MAX)
        return;

    for (int i = l.n; i > k; i--)
        l.a[i] = l.a[i - 1];

    l.a[k] = x;
    l.n++;
}

// Xoa dau O(n)
void deleteFirst(List &l) {
    if (isEmpty(l)) return;

    for (int i = 0; i < l.n - 1; i++)
        l.a[i] = l.a[i + 1];

    l.n--;
}

// Xoa cuoi O(1)
void deleteLast(List &l) {
    if (isEmpty(l)) return;
    l.n--;
}

// Xoa tai vi tri k O(n)
void deleteAt(List &l, int k) {
    if (k < 0 || k >= l.n) return;

    for (int i = k; i < l.n - 1; i++)
        l.a[i] = l.a[i + 1];

    l.n--;
}

// Duyet xuoi O(n)
void printForward(List l) {
    for (int i = 0; i < l.n; i++)
        cout << l.a[i] << " ";
    cout << endl;
}

// Duyet nguoc O(n)
void printBackward(List l) {
    for (int i = l.n - 1; i >= 0; i--)
        cout << l.a[i] << " ";
    cout << endl;
}

int main() {
    List l;
    init(l);

    insertLast(l, 10);
    insertLast(l, 20);
    insertLast(l, 30);

    insertFirst(l, 5);
    insertAt(l, 2, 15);

    cout << "Danh sach: ";
    printForward(l);

    cout << "Duyet nguoc: ";
    printBackward(l);

    deleteFirst(l);
    deleteLast(l);
    deleteAt(l, 1);

    cout << "Sau khi xoa: ";
    printForward(l);

    return 0;
}
