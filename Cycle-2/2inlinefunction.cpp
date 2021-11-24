/*
    Algorithm

    1) start
    2) get co-ordinates from user
    3) create a function to find distance between points
    4) create a function to check validity of triangle
    5) print minimum distance between co-ordinates using distance function
    6) print the validity of triangle
    7) stop   
*/
#include <iostream>
#include <cmath>
using namespace std;

class Triangle
{
    float x1,x2,x3,y1,y2,y3,z1,z2,z3,x,y,z;

    public:
    void getdata()
    {
        cout << "Enter the x co-ordinates\n";
        cin >> x1 >> x2 >> x3;

        cout << "Enter the y co-ordinates\n";
        cin >> y1 >> y2 >> y3;

        cout << "Enter the z co-ordinates\n";
        cin >> z1 >> z2 >> z3;
    }

    void distance();

    void validity(); 
};

inline void Triangle :: distance()
{
    x = sqrt(pow((x1-x2),2)+pow((y1-y2),2)+pow((z1-z2),2));
    y = sqrt(pow((x1-x3),2)+pow((y1-y3),2)+pow((z1-z3),2));
    z = sqrt(pow((x3-x2),2)+pow((y3-y2),2)+pow((z3-z2),2));

    int shortest= (x+y+z)/3;
    cout << "shortest distance between points = " << shortest << endl;
}

inline void Triangle :: validity()
{
        if(x+y>z && x+z>y && y+z>x && x>0 && y>0 && z>0)
        {
            cout << "Triangle is valid\n";
        }
        else
        {
            cout << "Triangle not valid\n";
        }
    }    

int main()
{
    Triangle first;
    first.getdata();
    first.distance();
    first.validity();
    return 0;
}