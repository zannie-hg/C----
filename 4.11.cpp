#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c;
    cout<<"Nhap a: ";
    cin>>a;
    cout<<"Nhap b: ";
    cin>>b;
    cout<<"Nhap c: ";
    cin>>c;
    if(a>0&&b>0&&c>0){
        if (a==b&&b==c){
            cout<<"Day la tam giac deu(E)";
        }
        if(a==b || a==c || b==c){
            cout<<"Day la tam giac can(I)";
        } 
        if(a!=b && a!=c && b!=c){
            cout<<"Day la tam giac vo huong(S)";
        }


    } else {
        cout<<"Khong phai hinh tam giac!";
    }
}