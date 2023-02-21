#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Nhap n: ";
    cin>>n;
    int t=0;
    for (int i = 0; i <= n; i++)
    {   
        t+=(i*i);

    }
    cout<<"S= "<<t;
    
}