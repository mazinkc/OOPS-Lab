# include <iostream>
using namespace std;


	int num1, num2;
	
	void get_values()
	{
		cout << "Enter 2 numbers: \n";
		cin >> num1 >> num2;
	}
		
	//Call by value
	void swap1(int a, int b)
	{	
		int swap;
		cout << "\nNumbers before swapping: " << "A=" << a << " B=" << b << endl;
		swap = a; 
		a=b;
		b=swap;
		cout << "Numbers after swapping: " << "A=" << a << " B=" << b << endl;		
	}
	
	//Call by address
	void swap2(int *a, int *b)
	{
		int swap;
		cout << "\nNumbers before swapping: " << "A=" << *a << " B=" << *b << endl;
		swap = *a;
		*a=*b;
		*b= swap;
		cout << "Numbers after swapping: " << "A=" << *a<< " B=" << *b << endl;		
	}
	
	//call by reference
	void swap3(int &a, int &b)
	{
		int swap;
		cout << "\nNumbers before swapping: " << "A=" << a<< " B=" << b << endl;
		swap = a;
		a=b;
		b=swap;
		cout << "Numbers after swapping: " << "A=" << a << " B=" << b << endl;		
	}

int main()
{

	get_values();
	
	cout << "\nCall by value \n"; 
	swap1(num1, num2);
	cout << "Original values after swapping: (num1 = " << num1 << ", num2 = " << num2 << ")\n\n";
	
	cout << "Call by address \n";
	swap2(&num1, &num2); 
	cout << "Original values after swapping: (num1 = " << num1 << ", num2 = " << num2 << ")\n\n";
	
	cout << "Call by reference \n";
	swap3(num1, num2);  
	cout << "Original values after swapping: (num1 = " << num1 << ", num2 = " << num2 << ")\n\n";
	
	return 0;
}
