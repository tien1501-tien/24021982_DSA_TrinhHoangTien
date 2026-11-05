/// Insertion Sort
#include <iostream>
using namespace std;

void insertionSort(int a[], int n) {

    for (int i = 1; i < n; i++) {

        int key = a[i];
        int j = i - 1;

        while (j >= 0 && a[j] > key) {

            a[j + 1] = a[j];

            j--;
        }

        a[j + 1] = key;
    }
}

int main() {

    int a[] = {5, 3, 8, 2, 6};
    int n = 5;

    insertionSort(a, n);

    cout << "Mang sau khi sap xep: ";

    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }

    return 0;
}