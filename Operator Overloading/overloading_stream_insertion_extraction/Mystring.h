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

    void display() const;
    int get_length() const;
    const char *get_str() const;
};

#endif