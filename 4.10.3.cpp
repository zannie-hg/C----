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
    if(-999999999<=a&&b&&c<=999999999){
        if(a<b&& b<c){
        cout<<"Sap Xep Tang Dan: "<<endl;
        cout<<a<<", "<<b<<", "<<c<<endl;

    } else if (a<c&&c<b){
        cout<<"Sap Xep Tang Dan: "<<endl;
        cout<<a<<", "<<c<<", "<<b<<endl;
    } else if( b<a&&a<c){
        cout<<"Sap Xep Tang Dan: "<<endl;
        cout<<b<<", "<<a<<", "<<c<<endl;
    } else if(b<c&&c<a){
        cout<<"Sap Xep Tang Dan: "<<endl;
        cout<<b<<", "<<c<<", "<<a<<endl;
    } else if(c<a&&a<b){
        cout<<"Sap Xep Tang Dan: "<<endl;
        cout<<c<<", "<<a<<", "<<b<<endl;
    } else if(c<b&&b<a){
        cout<<"Sap Xep Tang Dan: "<<endl;
        cout<<c<<", "<<b<<", "<<a<<endl;
    } 

    } else {
        cout<<"KHONG HOP LE!";
    }
    
    return 0;

}