#include<iostream>
using namespace std;
int main()
{
	int n,s;
	cout<<"Nhap so tien muon doi: "<<endl;
	cin>>n;
	
			switch(n>0)
			{
				case 1:
				 cout<<n<<" do la MY = "<<n*1.01<<" dong EURO"<<endl;
				 cout<<n<<" do la MY = "<<n*146.97<<" yen NHAT"<<endl;
				 cout<<n<<" do la MY = "<<n*0.87<<" bang ANH"<<endl;
				 cout<<n<<" do la MY = "<<n*24.845<<" dong VIET NAM";break;
				case 0:
				cout<<"Chi nhan so lon hon 0."<<endl;
		}
		return 0;
		}
		