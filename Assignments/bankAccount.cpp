#include <iostream>

using namespace std;

class BankAccount
{
private:
    int accountNumber;
    double accountBalance;

public:
    BankAccount()
    {
        accountNumber = 0;
        accountBalance = 0.0;
    }
    
    BankAccount(int acNo, double acBal)
    {
        accountNumber = acNo;
        accountBalance = acBal;
    }

    void setAccountNumber(int acNo)
    {
        accountNumber = acNo;
    }

    int getAccountNumber()
    {
        return accountNumber;
    }
    
    double getAccountBalance()
    {
    	return accountBalance;
	}
	
    void deposit(double amount)
    {
        if (amount < 0)
        {
            cout << "balance must be positive amount";
        }
        else
        {
            accountBalance += amount;
        }
    }

    void withdraw(double amount)
    {  
    	amount = amount < 0 ? -amount : amount;
        if (amount > accountBalance)
        {
            cout << "Insufficent balance" << endl;
        }
        else
        {
            accountBalance -= amount;
        }
    }

    void printAccountInfo()
    {
    	cout << "------------------------------------------" << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: " << accountBalance << endl;
        cout << "------------------------------------------" << endl;
    }
};


void printHelp() {
	cout << "\nEnter from 1-7 Carefully: \n" << endl;
	cout << "\t1. Set New Account No: \n" << endl;
    cout << "\t2. Retrieve Account No: \n" << endl;
    cout << "\t3. Retrieve Balance: \n" << endl;
    cout << "\t4. Deposit Cash: \n" << endl;
    cout << "\t5. Withdraw Cash: \n"<< endl;
	cout << "\t6. Print Account Information: \n" << endl;
	cout << "\t7. Print Help\n" << endl;
}

int main()
{
    BankAccount bankAccount; //, bankAccount1(12, 34.65);
    int choice;

	printHelp();

    while (true)
    {
        int accountNumber, accountBalance, amount;
        
        cout << "Input: > ";
        cin >> choice;
        switch (choice)
        {
        case 1:
        	cout << "Enter account number: ";
            cin >> accountNumber;
            bankAccount.setAccountNumber(accountNumber);
            break;
        case 2:
            cout << "Account number: " << bankAccount.getAccountNumber() << endl;
            break;
        case 3:
        	cout << "Balance: " << bankAccount.getAccountBalance() << endl;
        	break;
        case 4:
        	cout << "Enter deposit amount: ";
            cin >> amount;
            bankAccount.deposit(amount);
            break;
        case 5:
        	cout << "Enter withdraw amount: ";
            cin >> amount;
            bankAccount.withdraw(amount);
            break;
        case 6:
            bankAccount.printAccountInfo();
            break;
        case 7:
        	printHelp();
        default:
            cout << "....Wrong input. Try again...." << endl;
        }
    }

    return 0;
}