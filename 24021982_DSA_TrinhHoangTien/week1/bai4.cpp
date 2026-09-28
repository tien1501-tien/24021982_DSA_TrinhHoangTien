#include<iostream>
#include<numeric>
#include<cmath>
using namespace std;
int timUCLN( int x, int y){
    while (b != 0 ){
        int z = x % y ;
        x = y;
        y = r ;
    }
    return x ; 
}///  O(log(min(abs(a) , abs(b)))
void rutgonphanso(int &a , int &b){
    if( b ==0 ){
        return ;
    }
    int ucln = timUCLN(a,b);
    a = a/ucln;
    b= b/ucln;
    if(b<0){
        a = -a ;
        b = -b;
    }
}///  O(log(min(abs(a) , abs(b)))
int main(){
    int a , b;
    cin >> a >> b;
    if( b ==0){
        cout <<"Mau so phai khac 0"<< endl;
    }else{
        rutgonphanso(a,b);
        if( b==1){
            cout << a << endl;
        }else{
            cout << a << "/" << b << endl;
        }
    }
    retrn 0 ;
}/// do phuc tap thuat toan O(1)
