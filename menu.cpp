#include <bits/stdc++.h>
using namespace std;

void checkAmstrong(){
    cout<<"Nhap mot so kiem tra xem co phai la Armstrong."<<endl;
    int n,num,digit,rev=0;
    cin>>num;
    n=num;
    while(num!= 0)
    {
        digit= num%10;
        rev+= digit*digit*digit;
        num = num/10;
    }
    if(n==rev)
        {
        cout<<n<<" is a Armstrong number"<<endl;
        }
    else {
        cout<<n<<" is not a Armstrong number"<<endl;
        }

}
void checkPrime(){
    int m;
    cout<<"Nhap so nguyen duong m: ";
    cin>>m;
    if(m<2){
        cout<<m<<" is not prime number";
    } else {
        for (size_t i = 2; i < sqrt(m); i++)
        {   if(m%i==0){
            cout<<m<<" is prime number";
            }
                
        }
        cout<<m<<" is prime number";
    }
    
}
void askExit(){
    string s1 = "";
    switch (s1)
    {
    case 'c':
        cout<<"See you again!!"<<endl;
        break;
    case 'k':
        cout<<"Reselect the Menu";
    
    }

}
int main(){  
    int choose;
    do
    {
        cout<<" ________________________________________"<<endl;
        cout<<"|----------------Menu--------------------|"<<endl;
        cout<<"|--1.Input number & check Amstrong-------|"<<endl;
        cout<<"|--2.Input number & check Prime----------|"<<endl;
        cout<<"|--3.Display'Do you want to finish(c/k)?'|"<<endl;
        cout<<"|________________________________________|"<<endl;
        int choose;
        cin>>choose;
        switch (choose)
        {
        case 1:
            checkAmstrong();
            break;
        case 2:
            checkPrime();
            break;
        case 3:
            askExit();
            break;
        
        }
    } while (choose != 0);
    return 0;
    
}
