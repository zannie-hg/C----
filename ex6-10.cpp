#include <bits/stdc++.h>

using namespace std;
int main(){
    string s;
    cout << " nhap s = ";
    cin >> s;
    int a,r, b=0;
    int l1 = s.length();
    int n1 = 0;
    if(s[0]=='0'){
        cout << " Khong duoc nhap 0 dau tien ";
    }else{
       for(int i = l1 - 1; i >= 0; --i){
           n1 += (int)(s[i] - '0') * pow(10, l1-i-1);
        }r=n1;
        while(n1!=0){
            a=n1%10;
            b++;
            n1=n1/10;
        }
        if(r%b==0){
            cout <<s<< " is Polydivisible number";
        }else{
            cout <<s<< " isn't' Polydivisible number";
        }
    }
    return 0;
}