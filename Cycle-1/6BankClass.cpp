/*
    Algorithm
    1) start
    2) create a class bankAccount
    3) create variables for name, account type, account no, balance
    4) create a function to assign values to created variables
    5) create a function to deposit money
    6) create a function to withdraw money
    7) create a function to print account details
    8) create a display function to show option menu to users
    9) stop 
*/
#include <iostream>
using namespace std;
int ACCOUNT_NO = 100100;
class bankAccount
{
    private:
    char accHolder[100];
    string accType;
    int accountNo, balance = 0, option, deposit, withdraw;

    public:

    void assign()
    {
        cout << "\n Enter name of Account holder: ";
        cin >> accHolder;
        while(accType != "Savings" && accType != "Current")
        {
            cout << "\n Select type of Account: \n enter 1 for savings\n enter 2 for current: ";
            cin >> option;
            switch(option)
            {
                case 1:
                accType = "Savings";
                break;

                case 2:
                accType = "Current";
                break;
                
                default:
                cout << "Invalid Selection try again...\n";
            }
        }
        accountNo = ACCOUNT_NO;
        ACCOUNT_NO++;
        cout << "\n Your Account Number is: " << accountNo;
        cout << "\n Enter the Amount you wish to deposit (minimum 2000): ";
        cin >> balance;
        while (balance < 2000)
        {
            cout << "\n Enter the Amount you wish to deposit again (minimum 2000): ";
            cin >> balance;
        }
    } 

    void Deposit()
    {
        cout << "\nEnter the amount you wish to deposit: ";
        cin >> deposit;
        balance += deposit;
    }

    void Withdraw()
    {
        cout << "\n Your account balance is " << balance << "\n";
        cout << "Enter the amount you wish to withdraw: ";
        cin >> withdraw;
        if(balance >= withdraw)
        {
            balance -= withdraw;
        }
        else
        {
            cout << "\nNo enough balance try again";
        }
    }

    void Details()
    {
        cout << "\nName of account holder : " << accHolder << "\n";
        cout << "Balance : " << balance << "\n";
    }

    void display()
    {
     cout << "\nChoose the options\n";
        cout << "enter 1 to open account or assign values\n";
        cout << "enter 2 to deposit money\n";
        cout << "enter 3 to withdraw money after checking balance\n";
        cout << "enter 4 to dispaly name and balance\n";
        cout << "enter 5 to exit\n";
        cin >> option;
        switch(option)
        {
            case 1:
            assign();
            break;

            case 2:
            Deposit();
            break;

            case 3:
            Withdraw();
            break;

            case 4:
            Details();
            break;

            case 5:
            exit(0);
            
            default:
            cout << "Invalid Selection try again...\n";
        }   
        display();
    }
};

int main()
{
    bankAccount user1;
    user1.display();
    return 0;
}