
#ifndef __EX05_05__account__
#define __EX05_05__account__

#include <iostream>
#include <vector>
#include "transactions.h"
using namespace std;
class account{
private:
     double annualInterestRate=2.5;
    string name;
    int id;
    double balance;
    vector<Transactions> transactions;
    
    
    
public:
    account(string name, double id, double balance){
        name=this->name;
        id=this->id;
        balance=this->balance;
    }
    
    double getinterest(){
        return annualInterestRate;
    }
    string getname(){
        return name;
    }
    int getid(){
        return id;
    }
    double getbalance(){
        return balance;
    }
    
    void setinterest(double annualInterestRate){
        annualInterestRate=this->annualInterestRate;
    }
    void setid(int id){
        id=this->id;
    }
    void setname(string name){
        name=this->name;
    }
    void setbalance(double balance){
        balance=this->balance;
    }
    
    // Transactions settransactions(){
     //    Transactions('D',30, 970, "1st");
         
      //   return 12;
        
   // }
    
    
    
};

#endif 