#ifndef _TRUST_ACCOUNT_H_
#define _TRUST_ACCOUNT_H_
#include "Savings_Account.h"

class Trust_Account : public Savings_Account{
    // friend std::ostream &operator<<(std::ostream &os, const Trust_Account &account);
private:
    static constexpr const char *def_name = "Unnamed Trust Account";
    static constexpr double def_balance = 0.0;
    static constexpr double def_int_rate = 0.0;
    static constexpr int max_withdrawals = 3;
    static constexpr double max_withdraw_percent = 0.2;
protected:
    int withdraw_count;
public:
    Trust_Account(std::string name = def_name, double balance = def_balance, double int_rate = def_int_rate);
    virtual bool deposit(double amount);
    virtual bool withdraw(double amount);
    virtual void print(std::ostream &os) const;
    int get_withdraw_count() const { return withdraw_count; };
    bool operator-=(double amount);
    bool operator+=(double amount);
    virtual ~Trust_Account() = default;
};

#endif