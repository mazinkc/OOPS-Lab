#include <iostream>
using namespace std;

class Numbers
{
    int size;
    int *ptr;
    
    public:
    //constructor
    Numbers()
    {
        cout << "Enter the number of elemnets in array \n";
        cin >> size;
        ptr = new int[size];
        cout << "Enter " << size << " elements\n";
        for(int i=0; i<size; i++)
        {
            cin >> ptr[i];
        }
    }

    //copy constructor

    Numbers(Numbers &obj)
    {
        size = obj.size;
        ptr = new int[size];
        for(int i=0; i<size; i++)
        {
            ptr[i] = obj.ptr[i];
        }
    }

    

    void mod()
    {
        int mode, counter=0, temp=0,index;
        for(int i=0; i<size; i++)
        {
            for(int j=0; j<size; j++)
            {
                if(ptr[i] == ptr[j])
                {
                    counter++;
                }                
            }
                if(counter > temp)
                {
                    temp = counter;
                    index = i;
                }
                counter = 0;
        }

        mode = ptr[index];
        cout << "Mod is :" << mode << endl;
    }

    ~Numbers()
    {
        delete []ptr;
    }

};

int main()
{
    Numbers obj1, obj2=obj1;
    obj2.mod();
    return 0;
}