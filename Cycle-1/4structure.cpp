/*
    Algorithm
    1) start
    2) create a structure named phone having three intiger variables
    3) initialize structures myNumber and yourNumber 
    4) assign values to myNumber
    5) get values for yourNumber from user
    6) print myNumber and yourNumber
    7) stop
*/
#include <iostream>
using namespace std;

struct phoneNumber{
    int area;
    int exchange;
    int number;
};

int main(){
    phoneNumber myNumber;
    phoneNumber yourNumber;
    myNumber.area = 212;
    myNumber.exchange = 767;
    myNumber.number = 8900;
    
    cout << "Enter your area code:\n";
    cin >> yourNumber.area;
    cout << "Enter your exchange code:\n";
    cin >> yourNumber.exchange;
    cout << "Enter your number:\n";
    cin >> yourNumber.number;

    cout << "My Number is : (" << myNumber.area << ") " << myNumber.exchange << "-" << myNumber.number << "\n";
    cout << "Your Number is : (" << yourNumber.area << ") " << yourNumber.exchange << "-" << yourNumber.number << "\n";
    return 0;
}