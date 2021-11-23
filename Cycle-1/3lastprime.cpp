/*
    Algorithm
    1) start
    2) get number from user
    3) use for loop to run through numbers less than entered value
    4) use a nested for loop to check wether the numbers is prime
    5) print the greatest prime number less than entered value
    6) stop
*/
#include <iostream>
using namespace std;

int main(){
    int i, j, num, prime=0, flag=0;
    cout << "Enter the number: ";
    cin >> num;
    for(i=num-1; i > 1; i--)
    {
        for(j=2; j <= i/2; j++)
        {
            if(i%j==0)
            {
                flag = 1;
                break;
            }
        }
        if(flag == 0)
        {
            prime = i;
            break;
        }
        flag = 0;
    }

    if(prime == 0)
    {
        cout << "There is no prime number less than " << num << "\n";
    }
    else
    {
        cout << "Prime number before " << num << " is " << prime << "\n";
    }
    return 0;
}