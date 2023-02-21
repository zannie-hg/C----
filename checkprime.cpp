#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Nhap so nguyen duong n: ";
    cin>>n;
    if(n<2){
        cout<<n<<" is not prime number";
    } else {
        for (size_t i = 2; i < sqrt(n); i++)
        {   if(n%i==0){
            cout<<n<<" is prime number";
            }
        
        }
        cout<<n<<" is prime number";
    }
    
    
    
}