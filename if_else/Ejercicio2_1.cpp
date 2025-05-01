// Pide el peso de un paquete y cobra $5 si pesas hasta 5kg, $10 si pesa entre 6kg y 10kg, 
//y $15 si pemás de 10kg en adelante.

#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double weight, cost;

    cout<<"Please, write the weight of your package in kg"<<endl;
    cin>>weight;
    if (weight<=5)
    {
        cost=5.0;
        cout<<"The shipping cost is:$"<<cost<<endl;
    }
    else if (weight>=6 && weight<=10)
    {
        cost=10.0;
        cout<<"The shipping cost is:$"<<cost<<endl;
    }
    else if (weight>=11 && weight<=20)
    {
        cost=15.0;
        cout<<"The shipping cost is:$"<<cost<<endl;

    } 
    else
    {
        cout<<"The weight of your package is more than the limit"<< endl;
    }
    
    
    return 0;

}