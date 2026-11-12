
#include <iostream>
using namespace std;

class MinHeap {
private:
    int heap[100];
    int size;

public:
    MinHeap() {
        size = 0;
    }

    void insert(int x) {
        int i = size;
        heap[size] = x;
        size++;

        // Day phan tu len tren neu nho hon cha
        while (i > 0 && heap[i] < heap[(i - 1) / 2]) {
            swap(heap[i], heap[(i - 1) / 2]);
            i = (i - 1) / 2;
        }
    }

    // Lay phan tu nho nhat ra khoi Heap
    int extractMin() {
        if (size == 0) {
            cout << "Heap rong!\n";
            return -1;
        }

        int minValue = heap[0];

        heap[0] = heap[size - 1];
        size--;

        heapify(0);

        return minValue;
    }

    // Dieu chinh Heap tu tren xuong duoi
    void heapify(int i) {
        int smallest = i;
        int left = 2 * i + 1;
        int right = 2 * i + 2;

        if (left < size && heap[left] < heap[smallest])
            smallest = left;

        if (right < size && heap[right] < heap[smallest])
            smallest = right;

        if (smallest != i) {
            swap(heap[i], heap[smallest]);
            heapify(smallest);
        }
    }

    // Hien thi Heap
    void display() {
        for (int i = 0; i < size; i++) {
            cout << heap[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    MinHeap h;

    h.insert(10);
    h.insert(5);
    h.insert(20);
    h.insert(3);
    h.insert(8);

    cout << "Min Heap: ";
    h.display();

    cout << "Phan tu nho nhat: " << h.extractMin() << endl;

    cout << "Heap sau khi xoa: ";
    h.display();

    return 0;
}
