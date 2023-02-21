#include <bits/stdc++.h>
using namespace std;
void nhap(int* arr, int n){
    for (int i = 0; i < n; i++){
        cout<<"arr["<<i<<"]=";
        cin >> arr[i];
    }
    
    
}
void hienthi(int* arr, int n){
    for (int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void Sapxeptangdan(int* arr, int n){
    for (int i = 0; i < n; i++){
        for (int j = i+1; j<n; j++)
        {
            if(arr[i]>arr[j]){
                int temp = arr[i];
                arr[i]=arr[j];
                arr[j]= temp;

            }
        }
        
    }
    
    
}
int main()
{
    int  n;
    cout<<"Nhap n: ";
    cin>>n;
    if(n>0){
        int* arr =new int [n];
        nhap(arr, n);
        cout<<"Before: ";
        hienthi(arr, n);
        Sapxeptangdan(arr, n);
        cout<<"After: ";
        hienthi(arr, n);

    } else {
        cout<<"VUI LONG NHAP N>0!";
    }
    return 0;

}