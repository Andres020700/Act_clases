//Conversión de Monedas
//Pide una opción (1 = USD a EUR, 2 = USD a JPY, 3 = USD a GBP) 
//y realiza la conversión.

#include<iostream>
using namespace std;
 int main(){
 int data;
 float USD,EUR,JPY,GBP,quantity, convert1,convert2,convert3;

 cout<<"Write 1 if you need convert USD to EUR"<<endl;
 
 cout<<"Write 2 is you need convert USD to JPY"<<endl;

 cout<<"Write 3 if you need convert USD to GBP"<<endl;
cin>>data;

EUR=0.88;
JPY=143.05;
GBP=0.75;

switch (data)
{
case 1:
    cout<<"1 dolar is 0.88 euros "<<endl;
    cout<<"Write how much quantity you need convert to EUR"<<endl;
    cin>>quantity;
    convert1=quantity*EUR;
    cout<<"The conversion of dollar to EUR is:"<<convert1<<endl;
    break;
case 2:
cout<<"1 dolar is 143.05 yen"<<endl;
cout<<"Write how much quantity you need convert to JPY"<<endl;
    cin>>quantity;
    convert2=quantity*JPY;
    cout<<"The conversion of dollar to JPY is:"<<convert2<<endl;
    break;
case 3:
cout<<"1 dolar is 0.75 sterling"<<endl;
cout<<"Write how much quantity you need convert to GBP"<<endl;
    cin>>quantity;
    convert3=quantity*GBP;
    cout<<"The conversion of dollar to GBP is:"<<convert3<<endl;
    break;

default:
cout<<"The conversion is not available for now"<<endl;

}

    return 0;

 }