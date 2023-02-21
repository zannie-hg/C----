#include <bits/stdc++.h>
using namespace std;
int main()
{
    cout<<"Tong cac chu so trong mot so."<<endl;
    int n,num,digit,rev;
    cin>>num;
    n=num;
    // int s=0;
    while(num!= 0)
    {
        digit= num%10;
        rev+= digit*digit*digit;
        num = num/10;
        
    }
    cout<<rev;
    
    return 0;
}