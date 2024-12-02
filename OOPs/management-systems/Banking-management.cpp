#include <iostream>
using namespace std;
class BankAccount
{
protected:
    int accountNumber, balance = 0;
    string accountHolderName;

public:
    void createAccount(int acnumber, string name)
    {
        this->accountNumber = acnumber;
        this->balance = balance;
        this->accountHolderName = name;
        cout << "\nAcount Created Successfully ! ";
    }

    void displayAccountInfo()
    {
        cout << "\n---------Account Details-----------";
        cout << "\nAccount Number : " << this->accountNumber;
        cout << "\nAccount Holder Name : " << this->accountHolderName;
        cout << "\nAccount Balance : " << this->balance;
        cout << "\n-----------------------------------";
    }

    int getAccNumber()
    {
        return this->accountNumber;
    }

    void deposit(int amount)
    {
        this->balance += amount;
        cout << "Amount Added Successfully ! ";
    }
    void withdraw(int amount)
    {
        if (this->balance >= amount)
        {
            this->balance = this->balance - amount;
            cout << "Amount withdrwal Successfully ! ";
        }
        else
        {
            cout << "You have insufficient Balance ! ";
        }
    }
};

class SavingAccount : public BankAccount
{
protected:
    int interestRate;
    string password;

public:
    void setPassword(string password)
    {
        this->password = password;
    }
    string getPassword()
    {
        return this->password;
    }

    void calculateInterest(double interestRate)
    {
        this->balance += (this->balance / 100) * interestRate;
        cout << "Interest Added Successfully ! ";
    }
};
int main()
{
    SavingAccount account[10];
    string password, name;
    int accountNumber, count = 0;

    int choice;

    do
    {
        cout << "\n-----------Laxmi Chit Fund---------";
        cout << "\n1 for create account...";
        cout << "\n2 for view Account Details...";
        cout << "\n3 for deposit...";
        cout << "\n4 for withdraw...";
        cout << "\n5 for calculate Interest...";
        cout << "\n6 for Exit...";
        cout << "\nEnter your choice : ";
        cin >> choice;

        switch (choice)
        {
        case 1:
        {
            bool flag = false;
            // Create account
            cout << "Enter Account Number : ";
            cin >> accountNumber;
            cin.ignore();

            for (int i = 0; i < count; i++)
            {
                if (account[i].getAccNumber() == accountNumber)
                {

                    flag = true;
                    break;
                }
            }

            if (flag == false)
            {
                cout << "Enter Name : ";
                getline(cin, name);
                cout << "Set Password : ";
                cin >> password;
                account[count].createAccount(accountNumber, name);
                account[count].setPassword(password);
                count++;
            }
            else
            {
                cout << "Account is already Exists ! ";
            }

            break;
        }
        case 2:
        {
            // View details
            int acnumber;
            string password;
            bool flag = false;
            cout << "Enter Account Number : ";
            cin >> acnumber;
            cin.ignore();
            cout << "Enter Password : ";
            getline(cin, password);
            for (int i = 0; i < count; i++)
            {

                if ((account[i].getAccNumber() == acnumber))
                {
                    flag = true;

                    if (((account[i].getPassword() == password)))
                    {

                        account[i].displayAccountInfo();
                        break;
                    }
                    else
                    {
                        cout << "You have Entered Incorrect Password ! ";
                    }
                }
            }

            if (flag == false)
            {
                cout << "Please Enter Valid Account Number ! ";
            }
            break;
        }
        case 3:
        {
            // Deposit
            int acnumber;
            string password;
            bool flag = false;
            bool newflag = false;
            int val;
            int amount;
            cout << "Enter Account Number : ";
            cin >> acnumber;
            cin.ignore();
            cout << "Enter Password : ";
            getline(cin, password);

            for (int i = 0; i < count; i++)
            {

                if ((account[i].getAccNumber() == acnumber))
                {
                    flag = true;

                    if ((account[i].getPassword() == password))
                    {
                        newflag = true;
                        val = i;
                        break;
                    }
                }
            }

            if (newflag == false)
            {
                cout << "You have Entered Incorrect Password ! ";
            }
            else
            {
                cout << "Enter Amount : ";
                cin >> amount;
                account[val].deposit(amount);
            }
            if (flag == false)
            {
                cout << "Please Enter Valid Account Number ! ";
            }
            break;
        }
        case 4:
        {
            // Withdraw
            int acnumber;
            bool flag = false;
            bool newflag = false;
            int val;
            string password;
            int amount;
            cout << "Enter Account Number : ";
            cin >> acnumber;
            cin.ignore();
            cout << "Enter Password : ";
            getline(cin, password);

            for (int i = 0; i < count; i++)
            {

                if ((account[i].getAccNumber() == acnumber))
                {
                    flag = true;

                    if ((account[i].getPassword() == password))
                    {
                        newflag = true;
                        val = i;
                        break;
                    }
                }
            }
            if (newflag == false)
            {
                cout << "You have Entered Incorrect Password ! ";
            }
            else
            {
                cout << "Enter Amount : ";
                cin >> amount;
                account[val].withdraw(amount);
            }
            if (flag == false)
            {
                cout << "Please Enter Valid Account Number ! ";
            }
            break;
        }
        case 5:
        {
            // Calculate interest
            int acnumber;
            bool flag = false;
            string password;
            int interestRate;
            cout << "Enter Account Number : ";
            cin >> acnumber;
            cin.ignore();
            cout << "Enter Password : ";
            getline(cin, password);
            cout << "Enter InterestRate : ";
            cin >> interestRate;
            for (int i = 0; i < count; i++)
            {

                if (account[i].getAccNumber() == acnumber)
                {
                    flag = true;
                    if (account[i].getPassword() == password)
                    {

                        account[i].calculateInterest(interestRate);
                        break;
                    }
                }
            }
            if (flag == false)
            {
                cout << "Please Enter Valid Account Number ! ";
            }
            break;
        }
        case 6:
        {
            // For Exit
            cout << "Thank you for banking with us ! ";
            break;
        }
        }

    } while (choice != 6);

    return 0;
}