/*
    Algorithm
    1) start
    2) get 2 numbers n1,n2
    3) create recursive function gcd
         3.1)if n2 = 0 return n1 
         3.2)else return gcd(n2, n1%n2)
    4) print return value of gcd function 
    5) stop     
*/

#include <iostream>
using namespace std;

int gcd (int a, int b)
{
    if(b==0)
    {
        return a;
    }
    return gcd(b, a%b);
}

int main ()
{
    int n1, n2;
    cout << "enter 2 numbers\n";
    cin >> n1 >> n2;
    n1 = ( n1 > 0) ? n1 : -n1;
    n2 = ( n2 > 0) ? n2 : -n2;
    cout << gcd(n1, n2); 
    return 0;
}