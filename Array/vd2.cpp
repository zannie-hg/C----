#include <bits/stdc++.h>
using namespace std;
int main()
{
    int A[10];
    cout<<"Input 10 integers for Array A: "<<endl;
    for (int i = 0; i < 10; i++)
    {
        cin>>A[i];
    }
    // cout<<"Output 10 integers for Array A: "<<endl;
    // for (int i = 0; i < 10; i++)
    // {
    //     cout<<"A["<<i<<"]="<<A[i]<<" "<<endl;
    // }
    int max= A[0];
    for (int i = 0; i < 10; i++)
    {
        if(max < A[i])
        max =A[i];
        
    }
    int min=A[0];
    cout<<"Phan tu lon nhat la:"<<max<<endl;
    for (int i = 0; i < 10; i++)
    {
        if(min > A[i])
        min =A[i];
        
    }
    cout<<"Phan tu nho nhat la:"<<min<<endl;
    
    return 0;
}