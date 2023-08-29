// Stream Manipulatores: Integers
// boolalpha and noboolalpha

#include <iostream>
#include <iomanip> // must include for manipulators

int main()
{
    std::cout << "noboolalpha - default (10 == 10): " << (10 == 10) << std::endl;
    std::cout << "noboolalpha - default (10 == 20): " << (10 == 20) << std::endl;

    // Set to true/false formatting
    std::cout << std::boolalpha;
    std::cout << "noboolalpha - default (10 == 10): " << (10 == 10) << std::endl;
    std::cout << "noboolalpha - default (10 == 20): " << (10 == 20) << std::endl;

    // Toogle to 0/1
    std::cout << std::noboolalpha;
    std::cout << "noboolalpha - default (10 == 10): " << (10 == 10) << std::endl;
    std::cout << "noboolalpha - default (10 == 20): " << (10 == 20) << std::endl;

    // Set bac to true/false using setf method
    std::cout.setf(std::ios::boolalpha);
    std::cout << "noboolalpha - default (10 == 10): " << (10 == 10) << std::endl;
    std::cout << "noboolalpha - default (10 == 20): " << (10 == 20) << std::endl;

    // resets to default wich is 0/1
    std::cout << std::resetiosflags(std::ios::boolalpha);
    std::cout << "noboolalpha - default (10 == 10): " << (10 == 10) << std::endl;
    std::cout << "noboolalpha - default (10 == 20): " << (10 == 20) << std::endl;

    return 0;
}
