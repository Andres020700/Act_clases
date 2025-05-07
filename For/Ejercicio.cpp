
#include <iostream>
using namespace std;

int main()
{
    int score;
    int option;
    string gradeA = "A";
    string gradeB = "B";
    string gradeC = "C";
    string gradeD = "D";
    string gradeE = "E";
    string gradeF = "F";

    cout << "Enter your score (0-100): ";
    cin >> score;

    if (score < 0 || score > 100)
    {
        cout << "Invalid score. Please enter a score between 0 and 100." << endl;
        return 1;
    }

    if (score >= 90 && score <= 100)
        option = 1;
    else if (score < 90 && score >= 85)
        option = 2;
    else if (score < 85 && score >= 80)
        option = 3;
    else if (score < 80 && score >= 70)
        option = 4;
    else if (score < 70 && score >= 69)
        option = 5;
    else
        option = 6;

    switch (option)
    {
    case 1:
        cout << "Your grade is: " << gradeA << endl;
        cout << "Excellent work!" << endl;
        break;
    case 2:
        cout << "Your grade is: " << gradeB << endl;
        cout << "Good job!" << endl;
        break;
    case 3:
        cout << "Your grade is: " << gradeC << endl;
        cout << "Well done!" << endl;
        break;
    case 4:
        cout << "Your grade is: " << gradeD << endl;
        cout << "You can do better!" << endl;
        break;
    case 5:
        cout << "Your grade is: " << gradeE << endl;
        cout << "You need to improve!" << endl;
        break;
    case 6:
        cout << "Your grade is: " << gradeF << endl;
        cout << "You failed!" << endl;
        break;
    default:
        cout << "Invalid score." << endl;
        break;
    }

    return 0;
}