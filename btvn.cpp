#include <bits/stdc++.h>
using namespace std;

int giaithua(int sum1)
{
    int i;
	int	S=1;
		for(i=1; i<=sum1; i++){
			S=S*i;}
				cout<<"Dap an "<<sum1<<"! la:"<<S<<endl;
			
		return S;	
	}
int tong(int sum2){
	int i;
	int S1=0;
	for(i=0; i<=sum2; i++){
			S1=S1+i;}
					cout<<"Tong cac so nguyen duong  <= "<<sum2<<" la:"<<S1<<endl;

return S1;
}
int tongle(int sum3){
	int i;
	int S2=1;
	for(i=1; i<=sum3; i++){
			if(i%2!=0){
			S2=S2*i;}}
					cout<<"Tich cac so nguyen duong le <= "<<sum3<<" la:"<<S2<<endl;

		return S2;
}
int main()
{
	int n;
	cout<<"Nhap n: "<<endl;
	cin>>n;
	while(n<0){
		
			cout<<"n sai, nhap lai den khi dung"<<endl;
			cin>>n;}
			
		giaithua(n);
		tong(n);
		tongle(n);
return 0;

}

