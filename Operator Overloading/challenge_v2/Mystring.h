#ifndef _MYSTRING_H_
#define _MYSTRING_H_

class Mystring{
    friend std::ostream &operator<<(std::ostream &os, const Mystring &rhs);
    friend std::istream &operator>>(std::istream &in, Mystring &rhs);

    // Overload Non-Member Methods
    friend Mystring operator-(const Mystring &obj);                       // Make lowercase
    friend Mystring operator+(const Mystring &lhs, const Mystring &rhs);  // Concatenate
    friend Mystring &operator+=(Mystring &lhs, const Mystring &rhs);      // += Concatenate
    friend Mystring operator*(const Mystring &obj, int n);                // Repeat the string
    friend Mystring &operator*=(Mystring &obj, int n);                    // *= Repeat
    friend bool operator==(const Mystring &lhs, const Mystring &rhs);     // Equality
    friend bool operator!=(const Mystring &lhs, const Mystring &rhs);     // Inequality
    friend bool operator<(const Mystring &lhs, const Mystring &rhs);      // Lexically less than
    friend bool operator>(const Mystring &lhs, const Mystring &rhs);      // Lexically bigger than
    friend Mystring &operator++(Mystring &obj);                           // Make all character uppercase (Pre-increment)
    friend Mystring operator++(Mystring &obj, int);                 // Make all character uppercase (Post-increment)
private:
    char *str; // pointer to char[] that holds a C-style string

public:
    Mystring();
    Mystring(const char *s);
    Mystring(const Mystring &source);
    // Move Constructor
    Mystring(Mystring &&source);
    ~Mystring();

    // Copy Assignment
    Mystring &operator=(const Mystring &rhs);
    // Move Assignment
    Mystring &operator=(Mystring &&rhs);

    int get_length() const;
    const char *get_str() const;
};

#endif