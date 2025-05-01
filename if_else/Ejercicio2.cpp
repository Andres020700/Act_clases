#include <iostream>
using namespace std;

int main()
{
    double weight;
    double cost;

    cout << "Enter the weight of the package in kg:" << endl;

    cin >> weight;

    if (weight <= 5)
    {
        cost = 5.0;
    }
    else if (weight <= 10)
    {
        cost = 10.0;
    }
    else
    {
        cost = 15.0;
    }

    cout << "The shipping cost is: $" << cost << endl;

    return 0;
}