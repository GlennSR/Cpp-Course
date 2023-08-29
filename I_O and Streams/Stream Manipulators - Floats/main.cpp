// Stream Manipulatores: Floating Points
// scientific, setprecision, fixed, showpoint, showpos, uppercase

#include <iostream>
#include <iomanip>

int main()
{
    double num1 {123456789.987654321};
    double num2 {1234.56789};
    double num3 {1234.0};

    // Using default settings
    std::cout << "\n-- Defaults ----------------------------\n";
    std::cout << num1 << std::endl;
    std::cout << num2 << std::endl;
    std::cout << num3 << std::endl;

    // Note how since we can't display in precision 2 scientific notation is used
    std::cout << std::setprecision(2);
    std::cout << "\n-- Precision 2 ----------------------------\n";
    std::cout << num1 << std::endl;
    std::cout << num2 << std::endl;
    std::cout << num3 << std::endl;

    // Using precision 5
    std::cout << std::setprecision(5);
    std::cout << "\n-- Precision 5 ----------------------------\n";
    std::cout << num1 << std::endl;
    std::cout << num2 << std::endl;
    std::cout << num3 << std::endl;

    // Using precision 9
    std::cout << std::setprecision(9);
    std::cout << "\n-- Precision 9 ----------------------------\n";
    std::cout << num1 << std::endl;
    std::cout << num2 << std::endl;
    std::cout << num3 << std::endl;

    // Using precision 3 and fixed
    std::cout << std::setprecision(3) << std::fixed;
    std::cout << "\n-- Precision 3 - fixed ----------------------------\n";
    std::cout << num1 << std::endl;
    std::cout << num2 << std::endl;
    std::cout << num3 << std::endl;

    // Using precision 3, fixed and scientific notation
    // Note precision is after the decimal
    std::cout << std::setprecision(3) << std::scientific;
    std::cout << "\n-- Precision 3 - scientific ----------------------------\n";
    std::cout << num1 << std::endl;
    std::cout << num2 << std::endl;
    std::cout << num3 << std::endl;

    // Same but display capital 'E' in scientific
    std::cout << std::setprecision(3) << std::scientific << std::uppercase;
    std::cout << "\n-- Precision 3 - scientific - uppercase ----------------------------\n";
    std::cout << num1 << std::endl;
    std::cout << num2 << std::endl;
    std::cout << num3 << std::endl;

    // Show '+' for positive numbers
    std::cout << std::setprecision(3) << std::fixed << std::showpos;
    std::cout << "\n-- Precision 3 - fixed - showpos ----------------------------\n";
    std::cout << num1 << std::endl;
    std::cout << num2 << std::endl;
    std::cout << num3 << std::endl;

    // Back to defaults
    std::cout.unsetf(std::ios::scientific | std::ios::fixed);
    std::cout << std::resetiosflags(std::ios::showpos);

    // Show trailing zeros up to precision 10
    std::cout << std::setprecision(10) << std::showpoint;
    std::cout << "\n-- Precision 10 - showpoint ----------------------------\n";
    std::cout << num1 << std::endl;
    std::cout << num2 << std::endl;
    std::cout << num3 << std::endl;

    // Back to defaults
    std::cout.unsetf(std::ios::scientific | std::ios::fixed);
    std::cout << std::setprecision(6);
    std::cout << std::resetiosflags(std::ios::showpos);
    std::cout << std::resetiosflags(std::ios::showpoint);

    std::cout << "\n-- Back to defaults ----------------------------\n";
    std::cout << num1 << std::endl;
    std::cout << num2 << std::endl;
    std::cout << num3 << std::endl;

    return 0;
}
