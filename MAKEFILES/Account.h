#include <vector>
#include <string>
#include "Transaction.h"

class Account
{
    private:
        int balance;
        std::vector<Transaction> log;
    public:
        Account();
        std::vector<std::string> Report();
        void FullReport();
        bool Deposit(int amt);
        bool Withdraw(int amt);
        int getBalance(){return balance;};
};