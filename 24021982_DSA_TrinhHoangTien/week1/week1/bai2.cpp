#include<iostream>
using namespace std;
void sapxeptangdan(int a[], intn){
    sort(a , a+n);
}/// O(nlogn)
int main(){
    int n ; 
    cin >> n ; 
    int a[n];
    for ( int i = 0 ; i<n ; i++ ){
        cin >> a[i];
    }/// O(n)
    sapxeptangdan(a,n);
    for(int i = 0 ; i<n ;i++){
        cout << a[i]<< " ";
    } /// O(n)
    cout << endl;
    return 0 ;
}
/// dô phuc tap O(nlogn)
