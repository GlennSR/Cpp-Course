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
bool operator==(const Mystring &lhs, const Mystring &rhs){
    return (std::strcmp(lhs.str, rhs.str) == 0);
}

// Inequality
bool operator!=(const Mystring &lhs, const Mystring &rhs){
    return !(std::strcmp(lhs.str, rhs.str) == 0);
}

// Lexically less
bool operator<(const Mystring &lhs, const Mystring &rhs){
    return std::lexicographical_compare(lhs.str, lhs.str+std::strlen(lhs.str), rhs.str, rhs.str+std::strlen(rhs.str));
}

// Lexically bigger
bool operator>(const Mystring &lhs, const Mystring &rhs){
    return std::lexicographical_compare(rhs.str, rhs.str+std::strlen(rhs.str), lhs.str, lhs.str+std::strlen(lhs.str));
}

// Make Lowercase
Mystring operator-(const Mystring &obj){
    char *buff = new char[std::strlen(obj.str) + 1];
    std::strcpy(buff, obj.str);
    for(size_t i{0}; i < std::strlen(buff); ++i)
        buff[i] = std::tolower(buff[i]);
    Mystring temp {buff};
    delete [] buff;
    return temp;
}

// Concatenate
Mystring operator+(const Mystring &lhs, const Mystring &rhs){
    char *buff = new char[std::strlen(lhs.str) + std::strlen(rhs.str) + 1];
    std::strcpy(buff, lhs.str);
    std::strcat(buff, rhs.str);
    Mystring temp{buff};
    delete [] buff;
    return temp;
}

// += Concatenate
Mystring &operator+=(Mystring &lhs, const Mystring &rhs){
    // lhs = operator+(lhs, rhs);
    lhs = lhs + rhs;
    return lhs;
}

// Repeat
Mystring operator*(const Mystring &obj, int n){
    /*char *buff = new char[std::strlen(obj.str) * n + 1];
    std::strcpy(buff, obj.str);
    for(int i{1}; i < n; ++i)
        std::strcat(buff, obj.str);
    Mystring temp{buff};
    delete [] buff;
    return temp;*/
    Mystring temp;
    for(int i{1}; i <= n; ++i)
        temp = temp + obj;
    return temp;
}

// *= Repeat
Mystring &operator*=(Mystring &obj, int n){
    // obj = operator*(obj, n);
    obj = obj * n;
    return obj;
}

// Make all character uppercase (Pre-increment)
Mystring &operator++(Mystring &obj){
    for(size_t i{0}; i < std::strlen(obj.str); ++i)
        obj.str[i] = std::toupper(obj.str[i]);
    return obj;
}

// Make all character uppercase (Post-increment)
Mystring operator++(Mystring &obj, int){
    Mystring temp{obj};
    operator++(obj);
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