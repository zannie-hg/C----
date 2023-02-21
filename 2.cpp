#include <bits/stdc++.h>
using namespace std;
int Dientich(double R){
    double S=0;
    double pi=3.14;
    S=R*R*pi;
    cout<<"Dien tich hinh tron : "<<S<<endl;
    return S;
}
int Dientich(int a, int h){
    double S=0;
    S=(1/2)*a*h;
    cout<<"Dien tich hinh tam giac : "<<S<<endl;
    return S;

}
int Dientich(double b, double c){
    double S=0;
    S=(b+c)*2;
    cout<<"Dien tich hinh chu nhat : "<<S<<endl;
    return S;
}
int main()
{
    int a, h;
    double R, b,c;

   cout<<"Nhap R : "<<endl;
   cin>>R;
   Dientich(R);
   cout<<"Nhap a:"<<endl;
   cin>>a;
   cout<<"Nhap h: "<<endl;
   cin>>h;
   Dientich(a,h);
   cout<<"Nhap b :"<<endl;
   cin>>b;
   cout<<"Nhap c : "<<endl;
   cin>>c;
   Dientich(b,c);
   
}