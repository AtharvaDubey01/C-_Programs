#include <iostream>

double check_balance(double balance);
double withdraw(double &balance,double amt);
double add_money(double &balance,double amt);

using namespace std;
int main(){

    int input;
    double balance = 0;
    double amt;

    do{
    cout<< "**************************banking app***************************\n";
    cout <<"select (1- 4)\n";
    cout << "1. check balance.\n";
    cout << "2. Add  Money.\n";
    cout << "3. Withdraw money.\n";
    cout << "4. exit.\n";
    cin >> input;
    cout <<"****************************************************************\n";
    

    switch (input)
    {
        case 1:
            cout << "your balance is :" << check_balance(balance) << endl;
            break;
        case 2:
            cout << "Enter money :";
            cin >>amt;
            cout <<"value added!";
            cout << "total balance is:" << add_money(balance,amt) << endl;
        break;
        case 3:
            cout << "withdraw amount :";
            cin >> amt;
            cout << "after withdrawn total balance is:" << withdraw(balance,amt) << endl;
            break;
        case 4:
            cout << "Thankyou For Using The App" << endl;
            break;
    
        default:
            cout <<"invalid input" << endl;
            break;
    }
    }while(input!=4);
}

double check_balance(double balance){
    return balance;

}
double withdraw(double &balance,double amt){
    if (amt>balance){
        cout << "insufficient funds!!";
        return balance;
    }
    balance = balance - amt;
    return balance;

}
double add_money(double &balance,double amt){
    balance = balance + amt;
    return balance;
}