#include <iostream>

using namespace std;

class BankAccount
{
protected:
    int accountNumber;
    double accountBalance;

public:
    BankAccount()
    {
        accountNumber = 0;
        accountBalance = 0.0;
    }

    void setAccountNumber(int acNo)
    {
        accountNumber = acNo;
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
};

class CheckingAccount : public BankAccount
{
private:
    float interestRate;
    float minimumBalance;
    float serviceCharges;
public:
    CheckingAccount()
    {
        interestRate = 0.0;
        minimumBalance = 0.0;
        serviceCharges = 0.0;
    }

    CheckingAccount(float intRate, float miniBalance, float serCharges)
    {
        interestRate = intRate;
        minimumBalance = miniBalance;
        serviceCharges = serCharges;
    }

    void setInterestRate(float intRate)
    {
        interestRate = intRate;
    }

    float getInterestRate()
    {
        return interestRate;
    }

    void setMinimumBalance(int miniBal)
    {
        minimumBalance = miniBal;
    }

    float getMinimumBalance()
    {
        return minimumBalance;
    }

    void setServiceCharges(float servCharges)
    {
        if(accountBalance < minimumBalance)
        {
          accountBalance -= servCharges;
        }
        else
        {
            serviceCharges = servCharges;
        }
    }

    float getServiceCharges()
    {
        return serviceCharges;
    }

    float calulateInterst()
    {

      if(accountBalance > minimumBalance)
      {
      interestRate += interestRate / 100 * accountBalance;
      return interestRate;
      }
      else
      {
        cout << "Account balance is less than the required minimum balance" << endl;
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
        cout << "Interest: " << interestRate << endl;
        cout << "serviceCharges: " << serviceCharges <<endl;
        cout << "------------------------------------------" << endl;
    }

};

void printHelp() {
	cout << "\nEnter from 1-12 Carefully: \n" << endl;
	cout << "\t1. Set New Account No: \n" << endl;
    cout << "\t2. Deposit Cash: \n" << endl;
    cout << "\t3. Withdraw Cash: \n" << endl;
    cout << "\t4. Set Interest Rate: \n" << endl;
    cout << "\t5. Get Interest Rate: \n"<< endl;
	cout << "\t6. Set Minimum Balance: \n" << endl;
	cout << "\t7. Get Minimum Balance: \n" << endl;
	cout << "\t8. Set Service Charges: \n" << endl;
	cout << "\t9. Get Service Charges: \n" << endl;
	cout << "\t10. Calculate Interest: \n" << endl;
	cout << "\t11. Print Account Information: \n" << endl;
	cout << "\t12. PrintHelp: \n" << endl;
}

int main()
{
    CheckingAccount checkingaccount; //, checkingaccount(12.5, 10000, 34.65);   //Calling Constructor
    int choice;

	printHelp();

    while (true)
    {
        int accountNumber, accountBalance;
        float amount, interstRate, minimumBalance, serviceCharges;

        cout << "Input: > ";
        cin >> choice;
        switch (choice)
        {
        case 1:
        	cout << "Enter account number: ";
            cin >> accountNumber;
            checkingaccount.setAccountNumber(accountNumber);
            break;
        case 2:
            cout << "Enter deposit amount: ";
            cin >> amount;
            checkingaccount.deposit(amount);
            break;
        case 3:
        	cout << "Enter withdraw amount: ";
            cin >> amount;
            checkingaccount.withdraw(amount);
            break;
        case 4:
        	cout << "Enter Interest Rate: ";
            cin >> interstRate;
            checkingaccount.setInterestRate(interstRate);
            break;
        case 5:
            cout << "Interest Rate is: " << checkingaccount.getInterestRate() << endl;
            break;
        case 6:
            cout << "Enter Minimum Balance: ";
            cin >> minimumBalance;
            checkingaccount.setMinimumBalance(minimumBalance);
            break;
        case 7:
            cout << "Minimum Balance: " << checkingaccount.getMinimumBalance() << endl;
            break;
        case 8:
            cout << "Enter Service Charges: ";
            cin >> serviceCharges;
            checkingaccount.setServiceCharges(serviceCharges);
            break;
        case 9:
            cout << "Service Charges is: " << checkingaccount.getServiceCharges() << endl;
            break;
        case 10:
            cout << "Calculated Interest: " << checkingaccount.calulateInterst() << endl;
            break;
        case 11:
            checkingaccount.printAccountInfo();
            break;
        case 12:
        	printHelp();
        default:
            cout << "....Wrong input. Try again...." << endl;
        }
    }

    return 0;
}
