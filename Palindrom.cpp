#include <bits/stdc++.h>
using namespace std;
int main()
{
    cout<<"Nhap mot so kiem tra xem co phai la Palindrom."<<endl;
    int n,num,digit,rev=0;
    cin>>num;
    n=num;
    while(num!= 0)
    {
        digit= num%10;
        rev= (rev*10)+digit;
        num = num/10;
    }
    if(n==rev)
    {
        cout<<n<<" is a Palindrom number"<<endl;
    }
    else {
        cout<<n<<" is not a Palindrom number"<<endl;
    }
    return 0;
}