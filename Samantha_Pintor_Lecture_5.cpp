[![Review Assignment Due Date](https://classroom.github.com/assets/deadline-readme-button-22041afd0340ce965d47ae6ef1cefeee28c7c493a6346c4f15d667ab976d596c.svg)](https://classroom.github.com/a/19r6uM-4)
[![Open in Visual Studio Code](https://classroom.github.com/assets/open-in-vscode-2e0aaae1b6195c2367325f4f02e2d04e9abb55f0b24a779b69b11b9e10269abc.svg)](https://classroom.github.com/online_ide?assignment_repo_id=16405965&assignment_repo_type=AssignmentRepo)
//Samantha Pintor
//More Loops Practice 
//10-07-24

#include <iostream> 

using namespace std; 

int main ()
{ 
    //naming variables 
    float bankMoney; //variable for bank money amount
    int numberTransactions; //variable for number of transactions
    float amountTransaction; //variable for amount per transaction
    int transactionType; //variable for transaction type - debit or credit
    int yesOrNo; //variable to continue or not 
    float totalDebit = (bankMoney - amountTransaction); //variable for total debit
    float totalCredit = (bankMoney + amountTransaction); //variable for total credit

    //asking user
    cout << "Hello. How much money was in your bank account at the start of the day?" << endl; //asking for start amount in bank account
    cin >> bankMoney; 
    cout << "Great. How many bank transactions were done today?" << endl; //asking for number of transactions
    cin >> numberTransactions; 

    //asking user for transaction type and amount spent
    cout << "Did you use a debit or crdit card? Click 1 for debit and 2 for credit." << endl; //asking for type of transaction
    cin >> transactionType;
    cout << "How much was spent in this transaction?" << endl; //asking for amount spent in transaction
    cin >> amountTransaction;   
    
    //while loop Option 1 
    while (transactionType == 1) //while loop if transaction is debit (1)
        {
        cout << "After that transaction you have " << totalDebit << " in your bank account."; //minus amount from transaction from bank account
        
        cout << "Do you want to contine? Click A for yes and B for no." << endl;
        cin >> yesOrNo;
        
        if (yesOrNo == 1) 
        cout << "Did you use a debit or crdit card? Click 1 for debit and 2 for credit." << endl;
        cin >> transactionType; 
        
        if (yesOrNo == 2)
        cout << "Thank you for playing. Have a nice day." << endl;
        }
        

    //while loop Option 2 
    while (transactionType == 2) //while loop if transaction is credit (2)
        {
        cout << "After that transaction you have " << totalCredit << " in your bank account."; //add amount from transaction to bank account
        
        cout << "Do you want to contine? Click A for yes and B for no." << endl;
        cin >> yesOrNo;
        
        if (yesOrNo == 1) 
        cout << "Did you use a debit or crdit card? Click 1 for debit and 2 for credit." << endl;
        cin >> transactionType; 
        
        if (yesOrNo == 2)
        cout << "Thank you for playing. Have a nice day." << endl;
        }
  

    //extra credit - print the total in the account at the end of the day  
        cout << "You have " << (totalDebit + totalCredit) << " at the end of the day!" << endl;
       
    return 0; 
}
