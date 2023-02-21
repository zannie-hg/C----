#include <bits/stdc++.h>
using namespace std;
void swap(int a, int b){
    int temp =a;
    a=b;
    b=temp;
   cout<<"sau khi hoan doi a = "<<a<<", b = "<<b<<endl;

   
}
int main()
{

int a;
cout<<"NHap a = "<<endl;
cin>>a;
int b;
cout<<"Nhap b = "<<endl;
cin>>b;
cout<<"truoc khi hoan doi a = "<<a<<", b = "<<b<<endl;
swap(a,b);

return 0;
}