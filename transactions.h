

#ifndef EX05_05_transactions_h
#define EX05_05_transactions_h
#include <iostream>
#include <string>
using namespace std;
//creating transaction class
class Transactions{
private:
    //private variables
    int date;
    char type;
    double amount;
    double balance;
    string description;

    
public:
    //constructor
    Transactions(char type, double amount, double balance, string description);
    //get and sets
    int getdate(){
        return date;
    }
    char gettype(){
        return type;
    }
    double getamount(){
        return amount;
    }
    double getbalance(){
        return balance;
    }
    
    void setdate(int date){
        date=this->date;
    }
    void settype(char type){
        type=this->type;
    }
    void setamount(double amount){
        amount=this->amount;
    }
    void setbalance(double balance){
        balance=this->balance;
    }
    
    
    
    
    
    
};

#endif
