#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int giaithua = 1;
    for ( int i = 1; i<=n ; i++){
        giaithua = giaithua* i;
    }
    cout << giaithua;
    return 0 ;
}
/// do phuc tap O(n)
