/*    Algorithm
        1) start
        2) get number from user
        3) for number >= 2 
                3.1) divide number with all numbers from 2 to number-1
                3.2) if reminder becomes one set flag to one and break
        4) print not prime if number less than or equal to one or flag equal to one
        5) else print number is prime
        6) stop       
*/
#include <iostream> 
using namespace std;

int main ()
{
    int number, i, flag=0;
    cout << "enter a number\n";
    cin >> number;
    for(i=2; i < number; i++)
        {
            if(number % i == 0)
            {
                flag = 1;
                break;
            }
        }
    if(number <= 1 | flag == 1)
    {
        cout << "Not a prime number\n";
    }
    else 
    {  
        cout << "Number is prime\n"; 
    }    
    return 1;
}
