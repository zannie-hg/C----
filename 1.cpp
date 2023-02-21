#include <bits/stdc++.h>
using namespace std;
int Thetich(double R){
    double V=0;
    double pi=3.14;
    V=4/3*pi*R*R*R;
    printf("%.2lf", V);
    return V;
}
int main()
{

    double R;
    cout<<"Nhap R:"<<endl;
    cin>>R;
    Thetich(R);
}