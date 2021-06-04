//
//  main.cpp
//  Lecture 8
//

#include <iostream>
#include <stdlib.h>
using namespace std;


class AtmMachine            //this is a class it can replace int and double
{
public:
    
    //what is it? Attribute!
    int cashBalance;
    
    //what does it do?
    void checkBalance()
    {
        cout << "Your current balance: " << cashBalance << endl;
    }
    
    void depositCash(int amount)
    {
        cashBalance = cashBalance + amount;
    }
    
    void withdrawCash(int amount)
    {
        if(amount <= cashBalance)
        {
            cout << "Dispensing cash amount: " << amount << endl;
            cashBalance = cashBalance - amount;
        }
        else
        {
            cout << "Insuffecient funds, get your broke ass out" << endl;
        }
    }
    
    //what does it look loke, by default?
    AtmMachine()                                //must me same name (called constructor)
    {
        cashBalance = 100;
    }
    
};       //semicolon at the end for some reason




int main()
{
    int choice;
    int cashAmount;
    AtmMachine myMachine;
    
    while(1)
    {
        cout << "Press 1 to check balance" << endl;
        cout << "Press 2 to deposit cash" << endl;
        cout << "Press 3 to withdraw cash" << endl;
        cout << "Anything else to quit" << endl;
        cin >> choice;
        
        switch(choice)              //this is a menu from last time
        {
            case 1:    myMachine.checkBalance();   //the 'dot' means we can access all functions
                        break;
                
            case 2:    cout << "How much?" << endl;
                        cin >> cashAmount;
                        myMachine.depositCash(cashAmount);
                        break;
                
                
            case 3:    cout << "How much?" << endl;
                        cin >> cashAmount;
                        myMachine.withdrawCash(cashAmount);
                        break;
                
            default: exit(1);
        }
    }

}
