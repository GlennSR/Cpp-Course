#ifndef _MYSTRING_H_
#define _MYSTRING_H_

class Mystring{
private:
    char *str; // pointer to char[] that holds a C-style string

public:
    Mystring();
    Mystring(const char *s);
    Mystring(const Mystring &source);
    ~Mystring();

    // Copy Assignment
    Mystring &operator=(const Mystring &rhs); // Syntax 

    void display() const;
    int get_length() const;
    const char *get_str() const;
};

#endif