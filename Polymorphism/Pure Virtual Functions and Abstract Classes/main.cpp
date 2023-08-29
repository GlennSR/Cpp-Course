#include <iostream>
#include <vector>

class Shape{    // Abstract Base class
private:
    // attributes common to all shapes
public:
    virtual void draw() = 0; // pure virtual function
    virtual void rotate() = 0; // pure virtual function
    virtual ~Shape(){}
};

class Open_Shape : public Shape{    // Abstract class
public:
    ~Open_Shape(){}
};

class Closed_Shape : public Shape{    // Abstract class
public:
    ~Closed_Shape(){}
};

class Line : public Open_Shape{     // Concrete class
public:
    virtual void draw() override{
        std::cout << "Drawing a line\n";
    }
    virtual void rotate() override{
        std::cout << "Rotating a line\n";
    }
    virtual ~Line(){}
};

class Circle : public Closed_Shape{  // Concrete class
public:
    virtual void draw() override{
        std::cout << "Drawing a circle\n";
    }
    virtual void rotate() override{
        std::cout << "Rotating a circle\n";
    }
    virtual ~Circle(){}
};

class Square : public Closed_Shape{  // Concrete class
public:
    virtual void draw() override{
        std::cout << "Drawing a square\n";
    }
    virtual void rotate() override{
        std::cout << "Rotating a square\n";
    }
    virtual ~Square(){}
};

void screen_refresh(const std::vector<Shape *> &shapes){
    std::cout << "Refreshing\n";
    for(const auto p: shapes)
        p->draw();
}

int main()
{
    // Shape s;        
    // Shape *p = new Shape();     // ERROR - Is an abstract class

    // Circle c;
    // c.draw();

    // Shape *ptr = new Circle(); // OK - Dynamic polymorphism
    // ptr->draw();
    // ptr->rotate();

    Shape *s1 = new Circle();
    Shape *s2 = new Line();
    Shape *s3 = new Square();

    std::vector<Shape *> shapes{s1, s2, s3};
    // for(const auto p: shapes)
    //     p->draw();

    screen_refresh(shapes);

    delete s1;
    delete s2;
    delete s3;

    return 0;
}
