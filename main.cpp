#include <iostream> 
#include <vector>
#include "account.h"
using namespace std;
int main() {
    //creating the first account for george
    account george("George", 1122, 1000);
    george.setinterest(1.5);
    
    //printing out statement
    cout << "Account Holder: " << george.getname() << endl;
    cout << "Interest rate: " << george.getinterest() << endl;
    cout << "Balance: " << george.getbalance() << endl;
    cout << "All transactions: "; //<< george.gettrans() << endl;
    
    
    return 0;
    
}