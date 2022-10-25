//including packages
#include <iostream>
#include <iomanip>
//defining functions
using namespace std;
double CheckBalance (double balance);
double Deposit (double balance);
double Withdraw (double balance);
//Main method
int main (){
    double balance = 0;
    int choice = 0;
    do {
        cout << "#################### WELCOME TO THE BANK OF BISHAL #################### \n";
        cout << "Enter your choice of operation \n";
        cout << "Press 1 to check your balance\n";
        cout << "Press 2 to deposit money \n";
        cout << "Press 3 to withdraw money \n";
        cout << "Press 4 to exit \n";
        cout << '\n';
        cin >> choice;

        cin.clear();
        fflush(stdin);

        switch (choice)
        {
        case 1: cout << "Checking balance \n";
                CheckBalance(balance);
            break;
        case 2: cout << "Money deposit \n";
                balance = balance + Deposit(balance);
                CheckBalance(balance);
            break;
        case 3: cout << "Money withdrawal \n";
                balance = balance - Withdraw(balance);
                CheckBalance(balance);
            break;
        case 4:  cout << " exiting.......... Have a nice day \n";   
            break;        
        default: cout << "That is not a valid option \n"; 
        exit;
        break;
        }
    }while (choice !=4);

   return 0;
}
//BALANCE CHEKCING FUNCTION
double CheckBalance (double balance){
    cout << "Your balance is " << setprecision(2) << fixed << balance << '\n';

    return 0;
}
//DEPOSIT FUNCTION
double Deposit (double balance){
    double amount = 0;
    cout << "Enter amount to be deposited \n";
    cin >> amount;
    if (amount > 0){
    return amount;
    }
    else {
        cout <<"Thats not a valid amount \n";
    }
    return 0;
}
//WITHDRAW FUNCTIONS
double Withdraw (double balance){
    double amount = 0;
    cout << "Enter amount to be withdrawed \n";
    cin >> amount;
    if(amount > balance){
         cout << "Balance lower than withdraw amount \n";
        return 0;
    }
    else if (amount < 0){
        "Thats not a vaid amount \n";
        return 0;
    }
    else {
        return amount;
    }
    
}