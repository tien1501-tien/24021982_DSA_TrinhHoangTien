#include<iostream>
using namespace std;
int main (){
    int n ;
    cin >> n; 
    int a[n];
    for ( int i = 0 ; i< n ; i++){
        cin >> a [i];
    }
    int tong = 0 ;
    int trungbinh;
    for ( int i = 0 ; i< n ; i++){
        tong = tong + a[i];
    }
    trungbinh = tong / n ;
    for ( int i = 0 ; i<n ; i++){
        if ( a[i] >= trungbinh){
            cout << a[i] << " ";
        }
    }
    return 0;
}/// do phuc tap thuat toan O(n)
