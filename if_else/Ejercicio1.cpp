// Solicita un numero del 1 al 7 y muestra si corresponde a un día laboral ( lunes y viernes) o fin de seamna (sabado y domingo)
// Pide el peso de un paquete y cobra $5 si pesas hasta 5kg, $10 si pesa entre 6kg y 10kg, y $15 si pemás de 10kg en adelante.
// Solicita dos numeros y muestra cual de ellos más cerca de 100.
// Pide la velocidad de un conductor segun el tipo de vehihculo que maneje. si su vehiculo es una moto y supera los 60 km / h, se le aplica una multa de $100; si supera los 80 km/h la multa es mayor de $1000, si su vehiciulo es un kiasoul y supera los 70 km/h, se le aplica una multa de 200; si supera los 90 lm/h la multa es mayor de $1111, ssi su vehiculo es una 44 toda tuneada y supera los 80 km/h se le aplica una multa de $1500, si supera los 100 km/h la multa es mayor de 30000

#include <iostream>

using namespace std;

int main()
{
    int day;
    cout << "enter a number from 1 to 7 to verify what day of the week it is:" << endl;
    cin >> day;

    if (day == 1)
    {
        cout << "Your number is: " << day << " and the day is Monday. (Bussiness Day) ";
    }
    else if (day == 2)
    {
        cout << "Your number is: " << day << " and the day is Tuesday (Bussiness Day)";
    }
    else if (day == 3)
    {
        cout << "Your number is: " << day << " and the day is Wednesday (Bussiness Day)";
    }
    else if (day == 4)
    {
        cout << "Your number is: " << day << " and the day is Thursday (Bussiness Day)";
    }
    else if (day == 5)
    {
        cout << "Your number is: " << day << " and the day is Friday (Bussiness Day)";
    }
    else if (day == 6)
    {
        cout << "Your number is: " << day << " and the day is Saturday (Rest Day)";
    }
    else if (day == 7)
    {
        cout << "Your number is: " << day << " and the day is Sunday (Rest Day)";
    }
    else
    {
        cout << "This number is invalid";
    }
    return 0;
}