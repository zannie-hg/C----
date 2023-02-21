#include<iostream>
using namespace std;
double giaithua(int n){
   double S=1;
	for(int i = 1; i<=n;i++){  
		 S*=i;}
		 cout<<"Giai thua "<<n<<"! = "<<S;
		return S;
		}
int main(){
	int n;
	cout<<"Nhap n: "<<endl;
	cin>>n;
	giaithua(n);
	return 0;
	}