#include <bits/stdc++.h>
using namespace std;
int main()
{
    int length1,length2,width1,width2;
    int Area1, Area2;
    cout<<"Nhap chieu dai, chieu rong hinh chu nhat thu nhat: ";
    cin >> length1 >> width1;
    cout<<"Nhap chieu dai, chieu rong hinh chu nhat thu hai: ";
    cin >> length2 >> width2;
    Area1 = length1*width1;
    Area2 = length2*width2;
    cout<<"Area1= "<<Area1<<endl;
    cout<<"Area2= "<<Area2<<endl;
    if(Area1 > Area2){
        cout<<"Dien tich thu nhat lon hon dien tich thu hai!";

    } else if (Area1==Area2){
        cout <<"Hai dien tich bang nhau!";
    } 
    else {
        cout<<"Dien tich thu hai lon hon dien tich thu nhat!";

    }
    
    return 0;

}