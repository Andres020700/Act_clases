
// Solicita dos numeros y muestra cual de ellos esta más cerca de 100.

#include <iostream>
#include <cmath>

using namespace std;
int main()
{
    int firstNumber, secondNumber, firstNumber1, secondNumber2;

    cout << "Could you writte one number" << endl;
    cin >> firstNumber;

    cout << "Could you write another number please" << endl;
    cin >> secondNumber;

    firstNumber1 = abs(firstNumber - 100);   // abs is for absolute value
    secondNumber2 = abs(secondNumber - 100); // abs is for absolute value

    if (firstNumber1 < secondNumber2)
    {
        cout << "The number nearest to 100 is:" << firstNumber << endl;
    }
    else if (firstNumber1 == secondNumber2)
    {
        cout << "Exist the same difference between the two numbers to 100" << endl;
    }
    else
    {
        cout << "The number nearest to 100 is:" << secondNumber << endl;
    }

    return 0;
}
