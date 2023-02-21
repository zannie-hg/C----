#include <bits/stdc++.h>
using namespace std;

int sumDigits(int num){
    int res = 0,digit = 0;

    while (num > 0){
        digit=num%10; 
        res+=digit; 
        num=num/10;
    }
    
    return res;
}

int main()
{    
    int n, m;
    int Max = 0, // Phan tu lon nhat
    MaxDg = 0; // sumdigit cua phan tu lon nhat
    cin >> n >> m;

    for (int i = n; i<=m; i++){
        if (sumDigits(i)>MaxDg) {
            MaxDg = sumDigits(i);
            Max = i;
        }
    }

    cout << "Max = "<< Max;
    
}