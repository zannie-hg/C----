#include <bits/stdc++.h>
using namespace std;
void printArr(int a[], int n){
    for(int i=0;i<n;i++)
        cout<<" "<<a[i];
}
void sortArrGiam(int a[], int n){
    for(int i=0;i<n;i++)
        for(int j=i+1;j<n;j++){
            if(a[i]<a[j]){
                swap(a[j], a[i]);
            }
        }
}
int main()

{
   
    int n;
    cout<<"Nhap n: ";
    cin>>n;
    int *a;
    sortArrGiam(a, n); // Goi ham sap xep
    cout<<"Mang sau khi sap xep tang dan: "<<endl;
    printArr(a, n);
    return 0;
    
}
