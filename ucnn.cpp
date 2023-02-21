#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,max=0;
    cout<<"n = ";
    cin>>n;
    if(n==0){
        cout<<"N";
        
    } else {
        cout<<"Hien thi cac Uoc le cua "<<n<<" la "<<endl;
    for (int i = 1; i <= n; i++)
    {
        if(n % i == 0 && i%2!=0){
            if(i > max){
                max = i;
            }
            cout<<i<<" ";
        }
        
    }
    cout<<endl;
    cout<<"Uoc le nho nhat cua "<<n<<" la "<<max;
    
    }
    
    
}