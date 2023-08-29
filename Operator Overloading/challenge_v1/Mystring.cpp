#include <cstring>
#include <iostream>
#include <algorithm>
#include "Mystring.h"

Mystring::Mystring() : str{nullptr}{
    str = new char[1];
    *str = '\0';
}

// Overloaded constructor
Mystring::Mystring(const char *s) : str{nullptr}{
    if(s == nullptr){
        str = new char[1];
        *str = '\0';
    }else{
        str = new char[std::strlen(s) + 1];
        std::strcpy(str, s);
    }
}

// Copy Constructor
Mystring::Mystring(const Mystring &source) : str{nullptr}{
    str = new char[std::strlen(source.str) + 1];
    std::strcpy(str, source.str);
    std::cout << "Copy constructor used\n";
}

// Move Constructor
Mystring::Mystring(Mystring &&source) : str(source.str){
    source.str = nullptr;
    std::cout << "Move constructor used\n";
}

// Copy Assignment
Mystring &Mystring::operator=(const Mystring &rhs){
    std::cout << "Using copy assignment\n";
    if(this == &rhs)
        return *this;

    delete [] str; // deallocation space to avoid memory leak
    str = new char[std::strlen(rhs.str) + 1];
    std::strcpy(str, rhs.str);
    return *this;
}

// Move Assignment
Mystring &Mystring::operator=(Mystring &&rhs){
    std::cout << "Using move assignment\n";
    if(this == &rhs)
        return *this;
    
    delete [] str;
    str = rhs.str;
    rhs.str = nullptr;
    return *this;
}

// Equality
bool Mystring::operator==(const Mystring &rhs) const{
    return (std::strcmp(str, rhs.str) == 0);
}

// Inequality
bool Mystring::operator!=(const Mystring &rhs) const{
    return !(std::strcmp(str, rhs.str) == 0);
}

// Lexically less
bool Mystring::operator<(const Mystring &rhs) const{
    return std::lexicographical_compare(str, str+std::strlen(str), rhs.str, rhs.str+std::strlen(rhs.str));
}

// Lexically bigger
bool Mystring::operator>(const Mystring &rhs) const{
    return std::lexicographical_compare(rhs.str, rhs.str+std::strlen(rhs.str), str, str+std::strlen(str));
}

// Make Lowercase
Mystring Mystring::operator-() const{
    char *buff = new char[std::strlen(str) + 1];
    std::strcpy(buff, str);
    for(size_t i{0}; i < std::strlen(buff); ++i)
        buff[i] = std::tolower(buff[i]);
    Mystring temp {buff};
    delete [] buff;
    return temp;
}

// Concatenate
Mystring Mystring::operator+(const Mystring &rhs) const{
    char *buff = new char[std::strlen(str) + std::strlen(rhs.str) + 1];
    std::strcpy(buff, str);
    std::strcat(buff, rhs.str);
    Mystring temp{buff};
    delete [] buff;
    return temp;
}

// += Concatenate
Mystring &Mystring::operator+=(const Mystring &rhs){
    // *this = operator+(rhs); or
    *this = *this + rhs;
    return *this;
}

// Repeat
Mystring Mystring::operator*(int n) const{
    char *buff = new char[std::strlen(str) * n + 1];
    std::strcpy(buff, str);
    for(int i{1}; i < n; ++i)
        std::strcat(buff, str);
    Mystring temp{buff};
    delete [] buff;
    return temp;
    /* or
    Mtsring temp;
    for(int i{1}; i <= n; ++i)
        temp = temp + *this;
    return temp;
    */
}

// *= Repeat
Mystring &Mystring::operator*=(int n){
    // *this = operator*(n);
    // return *this;
    // or
    *this = *this * n;
    return *this;
}

// Make all character uppercase (Pre-increment)
Mystring &Mystring::operator++(){
    for(size_t i{0}; i < std::strlen(str); ++i)
        str[i] = std::toupper(str[i]);
    return *this;
}

// Make all character uppercase (Post-increment)
Mystring Mystring::operator++(int){
    Mystring temp{*this};
    operator++();
    return temp;
}

Mystring::~Mystring(){
    delete [] str;
}

// Overloaded Insertion Operator
std::ostream &operator<<(std::ostream &os, const Mystring &rhs){
    os << rhs.str;
    return os;
}

// Overloaded Extraction Operator
std::istream &operator>>(std::istream &in, Mystring &rhs){
    char *buff = new char[1000];
    in >> buff;
    rhs = Mystring{buff};
    delete [] buff;
    return in;
}

int Mystring::get_length() const{ return std::strlen(str); }

const char *Mystring::get_str() const{ return str; }