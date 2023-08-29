#ifndef _MYSTRING_H_
#define _MYSTRING_H_

class Mystring{
    // We can overload Non-Member Functions as class friends
    friend Mystring operator-(const Mystring &obj);                     // Make lowercase
    friend Mystring operator+(const Mystring &lhs, const Mystring &rhs);  // Concatenate
    friend bool operator==(const Mystring &lhs, const Mystring &rhs);     // Equality
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

    void display() const;
    int get_length() const;
    const char *get_str() const;
};

#endif