#include <iostream>

using namespace std;

int main(){
   int speed;
   int numberVehicle;

   cout << "__________________________" << endl;
   cout << "1. Is a motorcycle" << endl;
   cout << "__________________________" << endl;
   cout << "2. Is a KiaSoul" << endl;
   cout << "__________________________" << endl;
   cout << "3. Is a Bus 44" << endl;

   cout << "enter a number from 1 to 3. " << endl;
   cin >> numberVehicle;

   if (numberVehicle == 1) {
    cout << "Your vehicle is a Motorcycle" << endl;
    cout << "How fast were you driving?" << endl;
    cin >> speed;
    if (speed >= 60 && speed <= 80) {
        cout << "You were speeding. Fine: $100" << endl;
    } else if (speed >= 80) {
        cout << "You were speeding excessively. Fine: $1000" << endl;
    }
} else if (numberVehicle == 2) {
    cout << "Your vehicle is a KiaSoul" << endl;
    cout << "How fast were you driving?" << endl;
    cin >> speed;
    if (speed > 70 && speed <= 90) {
        cout << "You were speeding. Fine: $200" << endl;
    } else if (speed > 90) {
        cout << "You were speeding excessively. Fine: $1111" << endl;
    }
} else if (numberVehicle == 3) {
    cout << "Your vehicle is a Bus 44" << endl;
    cout << "How fast were you driving?" << endl;
    cin >> speed;
    if (speed > 80 && speed <= 100) {
        cout << "You were speeding. Fine: $1500" << endl;
    } else if (speed > 100) {
        cout << "You were speeding excessively. Fine: $30000" << endl;
    }
}
return 0;
}