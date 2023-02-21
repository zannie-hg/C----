#include <bits/stdc++.h>
using namespace std;

int countDigit(int num){
    int res = 0;

    while (num > 0){
        num=num/10;
        res++;
    }

    return res;
}

int isPrime(int num){
    for (int i = 2; i < num; i++){
        if (num % i == 0) return false;
    }
    return true;
}

int countPrime(int num){
    int res = 0;
    while (num>1){
        for (int i = num; i>1; i--){
            if (isPrime(i) && num % i ==0){
                int p = 0;
                while (num > 1 && num % i  == 0){
                    num /= i;
                    p++;
                }
                res += countDigit(i);
                if (p > 1) res+=countDigit(p);
                break;
            }
        }
    }
    return res;
}

string economicNumber(int num){
    if (countDigit(num) == countPrime(num)) return "Equidigital";
    if (countDigit(num) > countPrime(num)) return "Frugal" ;
    return "Wasteful";

}

int main()
{    
    int num;
    cin >> num;
    cout << economicNumber(num);
}