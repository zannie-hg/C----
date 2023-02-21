#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,max=0;
    cout<<"nhap n: "<<endl;
    cin>>n;
    if(n<=0){
        cout<<"N"<<endl;  
    }
    if(n>0) {int s=0;
        if(k<=n && k>max){
            max=k;
            return max;
            // int s=0;
            for (int i = 0; i <=max; i++)
            {
                s+=i;
                
            }
        
        }cout<<"S = "<<s;
    }

}