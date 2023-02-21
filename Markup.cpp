#include <bits/stdc++.h>
using namespace std;
double calculateRetail(double, double);
int main()
{
    double wholesaleCost=0;
    double percentage=0;
    double totalPrice=0;
    cout<<"Enter non-negative number for the Wholesale price and the percentage"<<endl;
    cin>>wholesaleCost>>percentage;
    while(wholesaleCost < 0 || percentage < 0){
        cout<<"Enter non-negative number for the Wholesale price and the percentage";
        cin>>wholesaleCost>>percentage;
    }
    totalPrice=calculateRetail(wholesaleCost, percentage);
    cout<<"The total cost is : $"<<totalPrice;
    return 0;
}
double calculateRetail(double cost, double percent){
    double totalCost=0;
    totalCost = ((cost/100)*percent)+cost;
    return totalCost;
}