[![Review Assignment Due Date](https://classroom.github.com/assets/deadline-readme-button-22041afd0340ce965d47ae6ef1cefeee28c7c493a6346c4f15d667ab976d596c.svg)](https://classroom.github.com/a/19r6uM-4)
[![Open in Visual Studio Code](https://classroom.github.com/assets/open-in-vscode-2e0aaae1b6195c2367325f4f02e2d04e9abb55f0b24a779b69b11b9e10269abc.svg)](https://classroom.github.com/online_ide?assignment_repo_id=16405965&assignment_repo_type=AssignmentRepo)
//Samantha Pintor
//More Loops Practice 
//10-07-24
#include <iostream> 
#include <iomanip>
#include <string> 

using namespace std; 

int main ()
{ 
    // Naming variables 
    float startAmount; // Variable for bank money amount
    float bankMoney1; // Current bank money after transactions w/ debit
    float bankMoney2; // Current bank money after transactions w/ credit
    int numberTransactions; // Variable for number of transactions
    float amountTransaction; // Variable for amount per transaction
    int transactionType; // Variable for transaction type - debit or credit
    int a = 0; // Initialize counter
    float totalMoney; //total money at end of day

    // Asking user
    cout << "Hello. How much money was in your bank account at the start of the day?" << endl; // Asking for start amount in bank account
    cin >> startAmount; 

    cout << "Great. How many bank transactions were done today?" << endl; // Asking for number of transactions
    cin >> numberTransactions; 

    // Loop
    while (a < numberTransactions)
    {
        cout << "Did you use a debit or credit card? Click 1 for debit and 2 for credit." << endl; //asking for transaction type
        cin >> transactionType;
        
        cout << "What value was the transaction?" << endl; //asking for transaction value
        cin >> amountTransaction;
        
        if (transactionType == 1) // If the transaction is debit
        {
            bankMoney1 = startAmount - amountTransaction; //formula for calcualting debit
            cout << "Total amount after debit = " << fixed << setprecision(2) << bankMoney1 << endl; 
        }
        else if (transactionType == 2) // If the transaction is credit
        {
            bankMoney2 = startAmount + amountTransaction; //formula for calculating credit
            cout << "Total amount after credit = " << fixed << setprecision(2) << bankMoney2 << endl; 
        }
        else // If the transaction type is invalid
        {
            cout << "Invalid. Please enter 1 for debit and 2 for credit." << endl; 
        }

        a++; // Increment counter
    }    
    
    totalMoney = bankMoney1 + bankMoney2; //finding total amount at end of the day
    cout << "Final balance = " << fixed << setprecision(2) << totalMoney << endl; //final balance = 
    cout << "Have a nice day!" << endl;
    
    return 0; 
}
