#include <bits/stdc++.h>
using namespace std;
int main()
{
    int A[3];
    int B[3];
    int add[3];
    cout<<"Enter 3 integers for Array A: "<<endl;
    for (int i = 0; i < 3; i++)
    {
        cin>>A[i];
    }
    cout<<"Enter 3 integers for Array B: "<<endl;
    for (int i = 0; i < 3; i++)
    {
        cin>>B[i];
    }
    cout<<"Addition of A and B: "<<endl;
    for (int i = 0; i < 3; i++)
    {
        add[i]=A[i]+B[i];
        cout<<add[i]<<" ";
    }
    return 0;
}