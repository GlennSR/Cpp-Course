#ifndef _INSUFFICENT_FUNDS_EXCEPTION_H_
#define _INSUFFICENT_FUNDS_EXCEPTION_H_
#include <exception>

class InsufficientFundsException : public std::exception {
public:
    InsufficientFundsException() noexcept {};
    ~InsufficientFundsException() {};
    virtual const char* what() const noexcept{
        return "Insufficient Funds exception";
    }
};

#endif