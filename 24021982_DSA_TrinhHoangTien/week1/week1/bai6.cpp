```cpp
#include <iostream>
using namespace std;
void xoa(int a[], int &n, int k) {
    if (k < 0 || k >= n) {
        cout << "Vi tri k khong hop le!\n";
        return;
    }

    for (int i = k; i < n - 1; i++) {
        a[i] = a[i + 1];
    }
    n--; 
}/// O(n)

void chen(int a[], int &n, int y, int m) {
    if (m < 0 || m > n) {
        cout << "Vi tri m khong hop le!\n";
        return;
    }
    for (int i = n; i > m; i--) {
        a[i] = a[i - 1];
    }
    a[m] = y;
    n++;
}/// O(n)

int main() {
    int a[100];
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int k;
    cout << "Nhap vi tri k can xoa: ";
    cin >> k;

    xoa(a, n, k);

    cout << "Day sau khi xoa: ";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    int y, m;
    cout << "\nNhap y can chen: ";
    cin >> y;

    cout << "Nhap vi tri m can chen: ";
    cin >> m;
    chen(a, n, y, m);
    cout << "Day sau khi chen: ";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    return 0;
}
/// do phuc tap thuat toan O(n)
