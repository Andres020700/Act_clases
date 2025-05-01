// Solicita un numero del 1 al 7 y muestra si corresponde a un día laboral ( lunes y viernes) o fin
// de semana (sabado y domingo)

#include <iostream>
using namespace std;

int main()
{
    int day;
    cout << "Please, write a number between 1 to 7 to verify what day of the week it's" << endl;
    cin >> day;

    if (day == 1)
    {
        cout << "It's Monday, is a bussines day";
    }
    else if (day == 2)
    {
        cout << "It's Tuesday, is a bussines day";
    }
    else if (day == 3)
    {
        cout << "It's Wednesday, is a bussines day";
    }
    else if (day == 4)
    {
        cout << "It's Thursday, is a bussines day";
    }
    else if (day == 5)
    {
        cout << "It's Friday, is a bussines day";
    }
    else if (day == 6)
    {
        cout << "It's Saturday, is a rest day";
    }
    else if (day == 7)
    {
        cout << "It's Sunday, is a rest day";
    }
    else
    {
        cout << "The weekend only have 7 days, please write another number";
    }

    return 0;
}