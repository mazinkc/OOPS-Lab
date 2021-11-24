/*
    Algorithm
    1) start
    2) Create class Average
    3) Initialise variables and integer array
    4) create a function to read values from user
    4) create a static function to find average
    5) create a function to multiply elements of integer array with user defned intiger constant
    6) write a function to sort the array and print sorted array
    7) create 3 object from classes 
    8) get input and find average of array elements using first object
    9) multiply array elemnts with a constant using 2nd object
    10) find average with first object
    11) sort the array using 3rd object
    12) stop 
*/

#include <iostream>
using namespace std;

class Average 
{   
    static int numbers[100],lim;
    int multiply,i;
    
    public:
    void input()
        {
            int j;
            cout<< "Enter the array limit: ";
            cin >> lim;
            cout << "Enter " << lim << " elements below:" << endl;
            for(j=0; j<lim; j++)
            {
                cin >> numbers[j];
            }

        }

    static void avg()
    {
        int sum=0,i;
        for(i=0; i<lim; i++)
        {
            sum += numbers[i]; 
        }
        float mean;
        mean = (float)sum/(float)lim;
        cout << "Average of intiger array = " << mean << endl; 
    }

    void modifier()
    {
        cout << "Enter the multiplier: ";
        cin >> multiply; 
        for(i=0; i<lim; i++)
        {
            numbers[i] *= multiply; 
        }
    }

    void arrange()
    {
       int temp;
       for(i=0; i<lim-1; i++)
        {
            if(numbers[i]>numbers[i+1])
            {
                temp = numbers[i];
                numbers[i] = numbers[i+1];
                numbers[i+1] = temp;
            } 
        }
        cout << "sorted array :\n";
        for(i=0; i<lim; i++)
        {
            cout << numbers[i] << " ";
        }
        cout << endl; 
    }

};

int Average :: lim = 0;
int Average :: numbers[] ={0};
int main()
{   
    Average a, b, c;
    a.input();
    a.avg();
    b.modifier();
    a.avg();
    c.arrange();
    return 0;
}