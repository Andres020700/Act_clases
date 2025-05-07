// Haz un programa que pida al usuario ingresar su salario mensaual bruto
// y luego realice los siguientes calculos:
// 1) Descuentos obligatorios: Seguro social el 3 por ciento del salario con un tope maximo de 30 dolares
// solo aplica hasta mil dolares
// 2)Afp, es el 7.5 % del salario
// Renta se calcula sobre el salario neto despues de isss y afp
// hasta $472.00                         exento
// de $472.01 hasta 895.24                10%
// de 895.25 a 2038.10                     20%
// Mas de 2038.10                          30%

#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int data;
    float grossSalary, ISSS, AFP, rent, rent1, rentFinal, rentFinal1;
    float rentfinal2, rentFinal1_1, rentFinal2_1, rentFinal3, finalResult, finalResult1;
    float finalResult2, finalResult3, finalResult1_1, finalResult2_1, finalResult3_1, finalResult4;

    cout << "_____________________________________________________________________" << endl;
    cout << "|          Write your gross salary                                   |" << endl;
    cout << "|____________________________________________________________________|" << endl;
    cin >> grossSalary;

    cout << " ____________________________________________________________________" << endl;
    cout << "|               Write what type of tax do you know                   |" << endl;
    cout << "|____________________________________________________________________|" << endl;
    cout << "|Write 1 if you need to know the tax of ISSS                         |" << endl;
    cout << "|____________________________________________________________________|" << endl;
    cout << "|Write 2 if you need to know the tax of AFP                          |" << endl;
    cout << "|____________________________________________________________________|" << endl;
    cout << "|Write 3 if you need to know tax of the rent                         |" << endl;
    cout << "|____________________________________________________________________|" << endl;
    cout << "|Write 4 if you need to know the total salary that you have          |" << endl;
    cout << "|____________________________________________________________________|" << endl;
    cin >> data;

    switch (data)
    {
    case 1:
        if (grossSalary <= 1000)
        {
            ISSS = grossSalary * 0.03;
            cout << "The discount for the ISSS is $" << ISSS << endl;
        }
        else
        {
            ISSS = grossSalary - 30;
            cout << "The discount for the ISSS is $30" << endl;
        }
        break;

    case 2:
        AFP = grossSalary * 0.075;
        cout << "The discount for the AFP is $" << AFP << endl;
        break;

    case 3:
        if (grossSalary <= 1000)
        {
            rent = grossSalary - ISSS - AFP;
            if (rent <= 472.00)
            {
                cout << "You're exent to pay any rent" << endl;
            }
            else if (rent >= 472.01 && rent <= 895.24)
            {
                rentFinal = rent * 0.1;
                cout << "The quantity that you need to pay to the rent is $" << rentFinal << endl;
            }
            else if (rent >= 895.25 && rent <= 2038.10)
            {
                rentFinal1 = rent * 0.2;
                cout << "The quantity that you need to pay to the rent is $" << rentFinal1 << endl;
            }
            else
            {
                rentfinal2 = rent * 0.3;
                cout << "The quantity that you need to pay to the rent is $" << rentfinal2 << endl;
            }
        }
        else if (grossSalary >= 1000.01)
        {
            rent1 = grossSalary - 30 - AFP;
            if (rent1 <= 472.00)
            {
                cout << "You're exent to pay any rent" << endl;
            }
            else if (rent1 >= 472.01 && rent1 <= 895.24)
            {
                rentFinal1_1 = rent1 * 0.1;
                cout << "The quantity that you need to pay to the rent is $" << rentFinal1_1 << endl;
            }
            else if (rent1 >= 895.25 && rent1 <= 2038.10)
            {
                rentFinal2_1 = rent1 * 0.2;
                cout << "The quantity that you need to pay to the rent is $" << rentFinal2_1 << endl;
            }
            else
            {
                rentFinal3 = rent1 * 0.3;
                cout << "The quantity that you need to pay to the rent is $" << rentFinal3 << endl;
            }
        }
        break;
    case 4:
        if (grossSalary <= 1000)
        {
            if (rent <= 472.00)
            {
                finalResult = grossSalary - AFP - ISSS;
                cout << "The total salary that you have is $" << finalResult << endl;
            }
            else if (rent >= 472.01 && rent >= 895.24)
            {
                finalResult1 = grossSalary - AFP - ISSS - rentFinal;
                cout << "The total salary that you have is $" << finalResult1 << endl;
            }
            else if (rent >= 895.25 && rent <= 2038.10)
            {
                finalResult2 = grossSalary - AFP - ISSS - rentFinal1;
                cout << "The total salary that you have is $" << finalResult2 << endl;
            }
            else
            {
                finalResult3 = grossSalary - AFP - ISSS - rentfinal2;
                cout << "The total salary that you have is $" << finalResult3 << endl;
            }
        }
        else if (grossSalary >= 1001)
        {
            if (rent1 <= 472.00)
            {
                finalResult1_1 = grossSalary - AFP - 30;
                cout << "The total salary that you have is $" << finalResult1_1 << endl;
            }
            else if (rent1 >= 472.01 && rent1 <= 895.24)
            {
                finalResult2_1 = grossSalary - AFP - 30 - rentFinal1_1;
                cout << "The total salary that you have is $" << finalResult2_1 << endl;
            }
            else if (rent >= 895.25 && rent <= 2038.10)
            {
                finalResult3_1 = grossSalary - AFP - 30 - rentFinal2_1;
                cout << "The total salary that you have is $" << finalResult3_1 << endl;
            }
            else
            {
                finalResult4 = grossSalary - AFP - 30 - rentFinal3;
                cout << "The total salary that you have is $" << finalResult4 << endl;
            }
        }
        break;
    default:
    cout<<"Please write valid numbers"<<endl;
    }

    return 0;
}