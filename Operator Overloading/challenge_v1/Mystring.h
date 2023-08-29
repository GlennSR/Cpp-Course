#ifndef _MYSTRING_H_
#define _MYSTRING_H_

class Mystring{
    friend std::ostream &operator<<(std::ostream &os, const Mystring &rhs);
    friend std::istream &operator>>(std::istream &in, Mystring &rhs);
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

    // Overload Member Methods
    Mystring operator-() const;                     // Make lowercase
    Mystring operator+(const Mystring &rhs) const;  // Concatenate
    Mystring &operator+=(const Mystring &rhs);      // += Concatenate
    Mystring operator*(int n) const;                // Repeat the string
    Mystring &operator*=(int n);                    // *= Repeat
    bool operator==(const Mystring &rhs) const;     // Equality
    bool operator!=(const Mystring &rhs) const;     // Inequality
    bool operator<(const Mystring &rhs) const;      // Lexically less than
    bool operator>(const Mystring &rhs) const;      // Lexically bigger than
    Mystring &operator++();                         // Make all character uppercase (Pre-increment)
    Mystring operator++(int);                      // Make all character uppercase (Post-increment)

    int get_length() const;
    const char *get_str() const;
};

#endif