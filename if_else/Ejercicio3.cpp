
#include <iostream>
using namespace std;

int main(){
    int firstNumber, secondNumber;
    cout<<"Could you write a number please less that 100"<<endl;
    cin>>firstNumber;
    cout<<"Could you write another number please"<<endl;
    cin>>secondNumber;
    if (firstNumber>secondNumber)
    {
        cout<<"The number nearest to 100 is:"<<firstNumber<<endl;
    }
    else
    {
        cout<<"The number nearest to 100 is:"<<secondNumber<<endl;
    }
    
    
return 0;

}