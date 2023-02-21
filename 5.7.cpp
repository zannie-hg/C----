#include <bits/stdc++.h>
using namespace std;
int main()
{
   int n;
   int s=0;
   cout<<"Nhap n: ";
   cin>>n;
   for (int i = 0; i <= n; i++)
   {
    if(i%2==0 ){
        s+=i;
    }
    
   }
   cout<<"S= "<<s;
   return 0;
    
}