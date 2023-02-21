#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    cout<<"Nhap so nguyen duong n: ";
    cin>>num;
    int  digit;
    int s=1;
    while(num!=0){
        digit = num % 10;
        // rev+= digit;
        s*=digit;
        num=num/10;
        
        
    }cout<<s;
    return 0;
    
}