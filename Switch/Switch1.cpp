//Día de la Semana
//Pide un número del 1 al 7 e imprime el día de la semana correspondiente 
//(1 = Lunes, 2 = Martes, etc.).

#include<iostream>
using namespace std;

int main(){
int day;
//Le pedimos un numero al usuario entre 1 y 7
cout<<"Write a number between 1 to 7 to know what day is"<<endl;
cin>>day;

switch (day)
{
case 1://Escoje 1 y el dia es lunes
    cout<<"The day is Monday"<<endl;
    break;
case 2://Escoje 2 y el dia es martes
cout<<"The day is Tuesday"<<endl;
break;
case 3://Escoje 3 y el dia es miercoles
cout<<"The day is Wendnesday"<<endl;
break;
case 4://Escoje 4 y el dia es jueves
cout<<"The day is Thursday"<<endl;
break;
case 5://Escribe 5 y el dia es viernes
cout<<"The day is Friday"<<endl;
break;
case 6://Escribe 6 y el dia es sabado
cout<<"The day is Saturday"<<endl;
break;
case 7://Escribe 7 y el dia es domingo
cout<<"The day is Sunday"<<endl;
break;
default://Escribe un numero diferente del rango 1-7
cout<<"The day of the week doesn't exist"<<endl;
    
}

    return 0;
}