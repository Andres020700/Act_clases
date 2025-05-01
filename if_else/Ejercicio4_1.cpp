
// Pide la velocidad de un conductor segun el tipo de vehiculo que maneje. Si su vehiculo es una moto 
//y supera los 60 km / h, se le aplica una multa de $100; si supera los 80 km/h la multa es mayor de $1000,
//si su vehiciulo es un kiasoul y supera los 70 km/h, se le aplica una multa de $200; 
//si supera los 90 km/h la multa es mayor de $1111, si su vehiculo es una 44 toda tuneada y 
//supera los 80 km/h se le aplica una multa de $1500, si supera los 100 km/h la multa es mayor de $30000

#include<iostream>
 
using namespace std;
int main(){
    int speed,vehicle;
    cout<<"Please write 1 if your vehicle is a Motorbike, write 2 if your vehicle is a KiaSoul, and write 3 if your vehicle is a Bus 44"<<endl;
    cin>>vehicle;

    if (vehicle==1)
    {
        cout<<"Please write your speed in km/h"<< endl;
        cin>>speed;
        if (speed>=60 && speed<80)
        {
            cout<<"You have a fine of $100 because your speed is more the limit allowed of 60km/h"<< endl;
        }
        else if (speed<60)
        {
            cout<<"Don't be afraid, you don't have any fine"<< endl;
        }
        
        else
        {
            cout<<"You have a fine of $1300 because your speed is more the limit allowed of 80km/h"<<endl;
        }
    
    }
    else if (vehicle==2)
    {
        cout<<"Please write your speed in km/h"<< endl;
        cin>>speed;
        if (speed>=70 && speed<90)
        {
            cout<<"You have a fine of $200 because your speed is more the limit allowed of 70km/h"<< endl;
        }
        else if (speed<70)
        {
            cout<<"Don't be afraid, you don't have any fine"<< endl;
        }
        else
        {
            cout<<"You have a fine of $1200 because your speed is more the limit allowed of 90km/h"<<endl;
        }
    }
    else if (vehicle==3)
    {
            cout<<"Please write your speed in km/h"<< endl;
            cin>>speed;
            if (speed>=80 && speed<100)
            {
                cout<<"You have a fine of $1500 because your speed is more the limit allowed of 80km/h"<< endl;
            }
            else if (speed<80)
        {
            cout<<"Don't be afraid, you don't have any fine"<< endl;
        }
            else
            {
                cout<<"You have a fine of $35000 because your speed is more the limit allowed of 90km/h"<<endl;
            }
    }
    else
    {
        cout<<"The car that you choosed doesn't exist in our system"<<endl;
    }
    
    return 0;

}