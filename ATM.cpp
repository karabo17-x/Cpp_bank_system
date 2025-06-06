#include <iostream>
using namespace std;

void showMenu()
{
    cout << "**********MENU**********" << endl;
    cout << "1. Balance" << endl;
    cout << "2. Deposit" << endl;
    cout << "3. Withdrawal" << endl;
    cout << "4. Exit" << endl;
}

int main()
{
    double balance = 50.0;
    int option;

    do
    {
        showMenu();
        cout << "Enter an option to proceed: ";
        cin >> option;

        switch (option)
        {
        case 1: // Balance
            cout << "Balance: R" << balance << endl;
            break;

        case 2:
        { // Deposit
            double depositAmount;
            cout << "Enter deposit amount: R";
            cin >> depositAmount;
            if (depositAmount > 0)
            {
                balance += depositAmount;
                cout << "New balance: R" << balance << endl;
            }
            else
            {
                cout << "Invalid amount!" << endl;
            }
            break;
        }

        case 3:
        { // Withdrawal
            int amount = 0;
            bool validChoice = false;
            while (!validChoice)
            {
                cout << "\nSelect withdrawal option:" << endl;
                cout << "1. R100" << endl;
                cout << "2. R200" << endl;
                cout << "3. R500" << endl;
                cout << "4. R1000" << endl;
                cout << "5. R2000" << endl;
                cout << "6. Enter custom amount" << endl;
                cout << "Enter choice (1-6): ";

                int choice;
                cin >> choice;

                switch (choice)
                {
                case 1:
                    amount = 100;
                    validChoice = true;
                    break;
                case 2:
                    amount = 200;
                    validChoice = true;
                    break;
                case 3:
                    amount = 500;
                    validChoice = true;
                    break;
                case 4:
                    amount = 1000;
                    validChoice = true;
                    break;
                case 5:
                    amount = 2000;
                    validChoice = true;
                    break;
                case 6:
                    while (true)
                    {
                        cout << "Enter amount: R";
                        cin >> amount;
                        if (amount > 0)
                        {
                            validChoice = true;
                            break;
                        }
                        cout << "Invalid amount! Try again." << endl;
                    }
                    break;
                default:
                    cout << "Invalid option! Try again." << endl;
                    cin.clear();
                    cin.ignore(10000, '\n');
                }
            }

            if (amount > balance)
            {
                cout << "Insufficient funds!" << endl;
            }
            else
            {
                balance -= amount;
                cout << "Processing withdrawal of R" << amount << endl;
                cout << "Please take your cash." << endl;
                cout << "New balance: R" << balance << endl;
            }
            break;
        }

        case 4: // Exit
            cout << "Thank you. Goodbye!" << endl;
            break;

        default:
            cout << "Invalid menu option!" << endl;
        }
    } while (option != 4);

    return 0;
}

