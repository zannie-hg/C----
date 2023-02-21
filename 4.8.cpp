#include <bits/stdc++.h>
using namespace std;
int main()
{
    float kt,gk,ck;
    float gpa;
    cout<<"Nhap diem bai kiem tra: ";
    cin >>kt;
    cout<<"Nhap diem giua ky: ";
    cin>>gk;
    cout<<"Nhap diem cuoi ky: ";
    cin>>ck;
    gpa = 0.2 * kt+ 0.3 * gk + 0.5 * ck;
    if(gpa >= 8.5){
        cout<<"Grade A.";
    } 
    if(gpa >= 7.0 && gpa <8.5){
        cout<<"Grade B.";
    }
    if(gpa >= 5.5 && gpa <7.0){
        cout<<"Grade C.";
    }
    if (gpa >= 4.0 && gpa <5.5){
        cout<<"Grade D.";
    }
    if(gpa <4.0){
        cout<<"Grade F.";
    }
    return 0;

}