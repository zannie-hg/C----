#include <bits/stdc++.h>
using namespace std;
int main()
{
    int m, y;
    cout<<"Nhap m: ";
    cin>>m;
    cout<<"Nhap y: ";
    cin>>y;
    if(m==2){
        if(y%4==0 && y%100 != 0){
            cout <<"29 ngay";
        } else {
            cout <<"28 ngay";

        }
    } else if(m==1 || m==3 || m==5 || m==7 || m==8 || m==10 || m==12){
        cout<<"31 ngay";
    } else if(m==4 || m==6 ||m==11 || m==9){
        cout<<"30 ngay";

    }
    else {
        cout <<"Nhap thang sai!!";
    }
    return 0;
}