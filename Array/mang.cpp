#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cout<<"n = ";
    cin>>n;
    cout<<"m = ";
    cin>>m;
    int A[n];
    int B[m];
    for (int i = 0; i < n; i++)
    {
        cout<<"Nhap phan tu A:";
        
        cin>>A[i];
    }
    for (int i = 0; i < m; i++)
    {
        cout<<"Nhap phan tu B:";
        cin>>B[i];
    }
    cout<<"Mang n x m: "<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<A[i]<<" ";
    }
    cout<<endl;
    for (int j = 0; j < m; j++)
    {
        cout<<B[j]<<" ";
    }
    
    return 0;
    
    
    
    
}