#include <cstring>
#include <iostream>
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

Mystring::~Mystring(){
    delete [] str;
}

void Mystring::display() const{
    std::cout << str << " : " << get_length() << std::endl;
}

int Mystring::get_length() const{ return std::strlen(str); }

const char *Mystring::get_str() const{ return str; }