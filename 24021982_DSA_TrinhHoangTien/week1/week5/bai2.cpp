/// bubble sort 
#include <iostream>
using namespace std;

void bubbleSort(int a[], int n) {

    for (int i = 0; i < n - 1; i++) { /// Quyết định số lần duyệt mảng.

        for (int j = 0; j < n - 1 - i; j++) { ///  So sánh các cặp phần tử liền kề và đổi chỗ nếu cần.

            if (a[j] > a[j + 1]) {

                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;    /// đổi chỗ 

            }
        }
    }
}

int main() {

    int a[] = {5, 3, 8, 2, 6};
    int n = 5;

    bubbleSort(a, n);

    cout << "Mang sau khi sap xep: ";

    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }

    return 0;
}