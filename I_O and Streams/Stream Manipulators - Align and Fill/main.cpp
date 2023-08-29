// Stream Manipulatores: Field width, justification and setfill
// setw, left, right, setfill

#include <iostream>
#include <iomanip>

void ruler(){
    std::cout << "\n12345678901234567890123456789012345678901234567890\n";
}

int main()
{
    int num1 {1234};
    double num2 {9876.5432};
    std::string hello {"Hello"};

    // Defaults
    std::cout << "\n-- Defaults -------------------------------------------------------\n";
    ruler();
    std::cout << num1
              << num2
              << hello
              << std::endl;

    // Defaults - one per line
    std::cout << "\n-- Defaults - one per line -------------------------------------------------------\n";
    ruler();
    std::cout << num1 << std::endl;
    std::cout << num2 << std::endl;
    std::cout << hello << std::endl;

    // Set field width to 10
    // Note the default justification is right for num1 only!
    std::cout << "\n-- Width 10 for num1 -------------------------------------------------------\n";
    ruler();
    std::cout << std::setw(10) << num1
              << num2
              << hello
              << std::endl;

    // Set field width to 10 to the first 2 outputs
    // Note the default justification is right for both!
    std::cout << "\n-- Width 10 for num1 and num2 ------------------------------------------------\n";
    ruler();
    std::cout << std::setw(10) << num1
              << std::setw(10) << num2
              << hello
              << std::endl;

    // Set field width to 10 for all 3 outputs
    // Note the default justification is right for all!
    std::cout << "\n-- Width 10 for num1, num2 and hello ------------------------------------------\n";
    ruler();
    std::cout << std::setw(10) << num1
              << std::setw(10) << num2
              << std::setw(10) << hello
              << std::endl;

    // Set field width to 10 for all 3 outputs and justify all left
    std::cout << "\n-- Width 10 for num1, num2 and hello left for all ------------------------------\n";
    ruler();
    std::cout << std::setw(10) << std::left << num1
              << std::setw(10) << std::left << num2
              << std::setw(10) << std::left << hello
              << std::endl;

    // Setfill to a dash - Wich is persistent
    // The repeat the previous display
    std::cout << std::setfill('-');
    std::cout << "\n-- Width 10 for num1, num2 and hello left for all setfill to dash -------------\n";
    ruler();
    std::cout << std::setw(10) << std::left << num1
              << std::setw(10) << std::left << num2
              << std::setw(10) << std::left << hello
              << std::endl;

    // Set width to 10 for all, left justify all and carry the setfill character
    std::cout << "\n-- Width 10 for num1, num2 and hello - setfill varies -------------\n";
    ruler();
    std::cout << std::setw(10) << std::left << std::setfill('*') << num1
              << std::setw(10) << std::left << std::setfill('#') << num2
              << std::setw(10) << std::left << std::setfill('-') << hello
              << std::endl;

    std::cout << std::endl;

    return 0;
}
