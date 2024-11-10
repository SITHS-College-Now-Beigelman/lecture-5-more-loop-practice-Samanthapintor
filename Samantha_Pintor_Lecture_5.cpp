//Samantha Pintor
//More Loops Practice 
//11-10-24
#include <iostream>
#include <string>

using namespace std;

int main() {
    // Naming variables
    double debit = 0.0; // Current total debit amount
    double credit = 0.0; // Current total credit amount
    int numberTransactions; // Variable for number of transactions
    double amountTransaction; // Variable for amount per transaction
    int transactionType; // Variable for transaction type - debit or credit
    int a = 0; // Initialize counter
    double totalMoney; // total money at end of day

    // Asking user for starting amount
    cout << "Hello. How much money was in your bank account at the start of the day?" << endl;
    cin >> totalMoney;

    cout << "Great. How many bank transactions were done today?" << endl;
    cin >> numberTransactions;

    // Loop for handling transactions
    while (a < numberTransactions) {
        cout << "Did you use a debit or credit card? Click 1 for debit and 2 for credit." << endl;
        cin >> transactionType;

        cout << "What value was the transaction?" << endl;
        cin >> amountTransaction;

        if (transactionType == 1) // If the transaction is debit
        { 
            totalMoney -= amountTransaction; // subtract from total money
            debit += amountTransaction; // add to debit total
            cout << "Total amount after debit = $" << totalMoney << endl;
        } 
        else if (transactionType == 2) // If the transaction is credit
        { 
            totalMoney += amountTransaction; // add to total money
            credit += amountTransaction; // add to credit total
            cout << "Total amount after credit = $" << totalMoney << endl;
        } 
        else // If the transaction type is invalid
        { 
            cout << "Invalid. Please enter 1 for debit and 2 for credit." << endl;
        }

        a++; // Increments
    }

    // Display the final results
    cout << "Final balance = $" << totalMoney << endl;
    cout << "Total Debit Amount = $" << debit << endl;
    cout << "Total Credit Amount = $" << credit << endl;
    cout << "Have a nice day!" << endl;

    return 0;
}

/*
Hello. How much money was in your bank account at the start of the day? 
1000
Great. How many bank transactions were done today? 
2
Did you use debit or credit card? Click 1 for debit and 2 for credit. 
1
What value was the transaction? 
12
Total amount after debit = $988
Did you use a debit or credit card? Click 1 for debit and 2 for credit. 
2
What value was the transaction? 
58
Total amount after credit = $1046
Final balance = $1046
Total Debit Amount = $12
Total Credit Amount = $58
Have a nice day!
*/
