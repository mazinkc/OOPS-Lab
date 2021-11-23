/*
    Algorithm
    1) start
    2) define a class Triangle
    3) define variables for sides and area
    4) define a function to enter sides
    5) create a function to check validity of triangle
    6) create a function to calculate area and display
    7) create a object from class and call the member functions to run programme
    8) stop
*/
#include <iostream>
#include <cmath>
using namespace std;

class Triangle
{
    private:

    float s1, s2, s3;
    float area;

    public:

    void enter()
    {
        cout << "Enter 3 sides of triangle\n";
        cin >> s1 >> s2 >> s3;
    }

    bool validity()
    {
        if(s1+s2>s3 && s1+s3>s2 && s2+s3>s1 && s1>0 && s2>0 && s3>0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    void display()
    {
        if(validity())
        {
            cout << "\nTriangle is valid\n";
            cout << "Sides are: " << s1 << ", " << s2 << ", " << s3 << endl;

        }
        else
        {
            cout << "\nTriangle is not valid\n";
            cout << "Sides are: " << s1 << ", " << s2 << ", " << s3 << endl;
        }
    }

    void Area()
    {
        if(validity())
        {
            int s=(s1+s2+s3)/2; //semi peremeter
            area = sqrt(s*(s-s1)*(s-s2)*(s-s3));
            cout << "\nArea of triangle: " << area << endl; 
        }
    }
};

int main()
{
    Triangle t1;
    t1.enter();
    t1.display();
    t1.Area();
    return 0;
}