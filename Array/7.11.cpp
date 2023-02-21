#include<bits/stdc++.h>
using namespace std;
int main(){
	int A[50][50];
	int i,j,m,n;
	cout<<"-Nhap so hang n: \n";
	cin>>n;
	cout<<"-Nhap so cot m: \n";
	cin>>m;
	cout<<"___NHAP CAC PHAN TU CUA MANG___\n";
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
		    cout<<"* A["<<i<<"]["<<j<<"] = ";
			cin>>A[i][j];
			}
		}
	cout<<"___MANG VUA NHAP LA___"<<endl;
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			cout<<A[i][j]<<"  ";
			}
	       cout<<"\n";
			}
	for(i=0;i<n;i++){
		int sumhang = 0;
		for(j=0;j<m;j++){
			sumhang+=A[i][j];
			}
			cout<<"=> Tong gia tri cac phan tu trong hang "<<i<<" la: "<<sumhang<<"\n";
			}
	for(i=0;i<m;i++){
		int sumcot = 0;
		for(j=0;j<n;j++){
			sumcot+=A[j][i];
			}
			cout<<"===>__Tong gia tri cac phan tu o cot "<<i<<" la: "<<sumcot<<"\n";
			}
		}
