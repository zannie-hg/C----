#include<iostream>
using namespace std;
int Tinhtong1(int x, int y){
	int S=0;
	S=x+y;
	cout<<"=>Sum int: "<<S;
	return S;}
float Tinhtong2(float a,float b){
	float S=0;
	S=a+b;
	cout<<"=>Sum float: "<<S;
	return S;}
double Tinhtong3(double m,double n){
	double S=0;
	S=m+n;
	cout<<"=>Sum double: "<<S;
	return S;}
int main(){
	int x,y;
	float a,b;
	double m,n;
 cout<<"Nhap x: ";
 cin>>x;
 cout<<"Nhap y: ";
 cin>>y;
 Tinhtong1(x,y);
 cout<<endl;
 cout<<"Nhap a: ";
 cin>>a;
 cout<<"Nhap b: ";
 cin>>b;
 Tinhtong2(a,b);
 cout<<endl;
 cout<<"Nhap m: ";
 cin>>m;
 cout<<"Nhap n: ";
 cin>>n;
 Tinhtong3(m,n);
 }
 

	
	