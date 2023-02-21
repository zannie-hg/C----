#include <bits/stdc++.h>
using namespace std;
void swap(int &a, int &b){
    int temp =a;
    a=b;
    b=temp;
}
void sortArrTang(int a[], int n){
    for(int i=0;i<n;i++)
        for(int j=i+1;j<n;j++){
            if(a[i]>a[j]){
                swap(a[i], a[j]);
            }
        }
}
void inputArr(int a[], int n){
    for(int i=0;i<n;i++)
        cin>>a[i];
}
void printArr(int a[], int n){
    for(int i=0;i<n;i++)
        cout<<" "<<a[i];
}
int main()
{
    int n;
     do{
        cout<<"Nhap n: ";
        cin>>n;
    }
    while(n<=0);  // Neu n<=0 thi nhap lai
    int a[n];  // khai bao mang a co n phan tu
    inputArr(a,n); // Goi ham nhap mang
    sortArrTang(a, n); // Goi ham sap xep
    cout<<"Mang sau khi sap xep tang dan: "<<endl;
    printArr(a, n);
    return 0;

}