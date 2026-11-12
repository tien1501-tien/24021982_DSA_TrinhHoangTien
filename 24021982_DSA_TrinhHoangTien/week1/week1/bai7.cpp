
#include <iostream>
using namespace std;
int tinhTong(int a[][100], int n, int m) {
    int tong = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            tong = tong + a[i][j];
        }
    }

    return tong;
}/// do phuc tap O(n^2)
void xoaDong(int a[][100], int &n, int m, int i) {

    // Dịch các dòng phía dưới lên
    for (int row = i; row < n - 1; row++) {
        for (int col = 0; col < m; col++) {
            a[row][col] = a[row + 1][col];
        }
    }
    n--;
}
/// do phuc tap O(n^2)

int main() {
    int a[100][100];
    int n, m;
    cout << "Nhap N: ";
    cin >> n;
    cout << "Nhap M: ";
    cin >> m;
    cout << "Nhap mang:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }
    cout << "Tong = " << tinhTong(a, n, m) << endl;
    int i;
    cout << "Nhap dong can xoa: ";
    cin >> i;
    xoaDong(a, n, m, i);
    cout << "Mang sau khi xoa:\n";
    for (int row = 0; row < n; row++) {
        for (int col = 0; col < m; col++) {
            cout << a[row][col] << " ";
        }
        cout << endl;
    }
    return 0;
}
/// do phuc tap O(n^2)
