#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    cout<<"Nhap n: ";
    cin>>num;
    int digit,rev=0;
    
    // n=num;
    while(num!= 0 )
    {
        digit= num%10;
        rev+=digit;
        num = num/10;
        if(digit % 2 != 0){
            cout<<digit;
        }
        cout<<"N";
    }
   
}
